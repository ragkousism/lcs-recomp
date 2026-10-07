#include "lcs_stress_test.hpp"
#include "lcs_controls.hpp"
#include "lcs_menu.hpp"
#include "ge_gpu_backend.hpp"

#include <bit>
#include <chrono>
#include <cmath>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>

namespace lcs {
namespace {
using Clock = std::chrono::steady_clock;
bool enabled{};
bool driving_required{};
StressController controller;
Clock::time_point start;
std::filesystem::path output;
std::ofstream telemetry;
unsigned blocked_writes{};
double last_log{-10.0};
// Only the presentation thread updates these; finish reads after worker shutdown.
std::uint64_t presents{};
double frame_sum{}, frame_max{};
Clock::time_point previous_present;
double last_snapshot{-15.0};
unsigned snapshots{};

double elapsed() { return std::chrono::duration<double>(Clock::now() - start).count(); }
StressObservation observe(psprecomp::Runtime &runtime) {
    StressObservation result;
    result.menu = lcs_menu_active();
    auto &memory = runtime.memory();
    const auto slot = memory.load8(0x08B5E054u);
    if (slot > 1u) return result;
    const auto ped = memory.load32(0x08B89A10u + slot * 368u);
    if (ped == 0u || !memory.contains(ped, 1337u)) return result;
    result.driving = memory.load8(ped + 1336u) != 0u;
    result.entity = result.driving ? memory.load32(ped + 1332u) : ped;
    if (result.entity == 0u || !memory.contains(result.entity, 64u)) return result;
    // US 1.05 FindPlayerCoors (0x089D5730): inline matrix translation at +48.
    for (unsigned i = 0; i < 3; ++i) {
        result.position[i] = std::bit_cast<float>(memory.load32(result.entity + 48u + i * 4u));
        if (!std::isfinite(result.position[i]) || std::abs(result.position[i]) > 100000.0f)
            return StressObservation{};
    }
    // Camera hooks can be more than 250 ms apart at low frame rates; their
    // wall-clock freshness must not disable the automated controller.
    result.ready = !result.menu;
    return result;
}
} // namespace

void stress_test_init(bool active, bool driving, const std::filesystem::path &directory) {
    enabled = active;
    if (!enabled) { telemetry.close(); return; }
    controller = StressController(driving);
    driving_required = driving;
    output = directory;
    std::filesystem::create_directories(output);
    telemetry.open(output / "movement.csv");
    if (!telemetry) throw std::runtime_error("Cannot open stress movement log");
    telemetry << "seconds,ready,driving,entity,x,y,z,distance,recoveries,buttons,analog_x,analog_y\n";
    start = Clock::now();
    std::cerr << "[stress] enabled; ALL guest writes and savedata mutations blocked; output="
              << output.string() << "\n";
}
bool stress_test_enabled() { return enabled; }
void stress_test_note_blocked_write() {
    if (++blocked_writes <= 10u) std::cerr << "[stress] blocked guest write/delete request\n";
}
HostInputState stress_test_input(psprecomp::Runtime &runtime, HostInputState physical) {
    if (!enabled) return physical;
    const double seconds = elapsed();
    const auto observation = observe(runtime);
    auto input = controller.sample(seconds, observation);
    lcs_camera_set_axes(input.camera_x, input.camera_y);
    lcs_set_host_drive_inputs(input.accelerate, input.brake);
    if (controller.startup_failed(seconds)) runtime.stop("Stress test failed: gameplay not reached within 120 seconds");
    if (controller.gameplay_lost(seconds)) runtime.stop("Stress test failed: gameplay unavailable for 120 seconds");
    if (controller.movement_stalled()) runtime.stop("Stress test failed: no movement for 60 seconds despite recovery");
    if (seconds - last_log >= 1.0) {
        telemetry << seconds << ',' << observation.ready << ',' << observation.driving << ','
                  << observation.entity << ',' << observation.position[0] << ','
                  << observation.position[1] << ',' << observation.position[2] << ','
                  << controller.distance() << ',' << controller.recoveries() << ','
                  << input.buttons << ',' << unsigned(input.analog_x) << ',' << unsigned(input.analog_y) << '\n';
        telemetry.flush();
        if (seconds - last_log > 5.0 || static_cast<unsigned>(seconds) % 10u == 0u)
            std::cerr << "[stress] t=" << seconds << " ready=" << observation.ready
                      << " driving=" << observation.driving << " distance=" << controller.distance()
                      << " recoveries=" << controller.recoveries() << "\n";
        last_log = seconds;
    }
    return input;
}

void stress_test_present(psprecomp::Runtime &runtime, std::uint32_t buffer,
                         std::uint32_t stride, std::uint32_t format) {
    if (!enabled) return;
    const auto now = Clock::now();
    if (presents++ != 0u) {
        const double ms = std::chrono::duration<double, std::milli>(now - previous_present).count();
        frame_sum += ms; frame_max = std::max(frame_max, ms);
    }
    previous_present = now;
    const double seconds = std::chrono::duration<double>(now - start).count();
    if (seconds - last_snapshot < 15.0) return;
    last_snapshot = seconds;
    // Direct swapchain presentation has no CPU pixels. Do not label stale guest
    // VRAM as a screenshot of that GPU frame.
    if (ge_gpu_backend_presents_directly()) return;
    const auto gpu = ge_gpu_backend_report();
    const auto rgba = ge_gpu_backend_game_frame_rgba();
    unsigned width = 480, height = 272;
    std::vector<unsigned char> rgb;
    if (!rgba.empty() && rgba.size() == std::size_t(gpu.offscreen_width) * gpu.offscreen_height * 4u) {
        width = gpu.offscreen_width; height = gpu.offscreen_height;
        rgb.reserve(std::size_t(width) * height * 3u);
        for (std::size_t i = 0; i < rgba.size(); i += 4u)
            for (unsigned c = 0; c < 3; ++c) rgb.push_back(std::to_integer<unsigned char>(rgba[i + c]));
    } else if (!ge_gpu_backend_active() && buffer != 0 && stride >= width && format <= 3u) {
        const unsigned bpp = format == 3u ? 4u : 2u;
        auto &memory = runtime.memory();
        if (!memory.contains(buffer, std::size_t(stride) * height * bpp)) return;
        rgb.reserve(std::size_t(width) * height * 3u);
        for (unsigned y = 0; y < height; ++y) for (unsigned x = 0; x < width; ++x) {
            const auto address = buffer + (y * stride + x) * bpp;
            const auto pixel = bpp == 4u ? memory.load32(address) : memory.load16(address);
            if (format == 3u) {
                for (unsigned c = 0; c < 3; ++c) rgb.push_back((pixel >> (8u * c)) & 255u);
            } else {
                const unsigned bits = format == 2u ? 4u : 5u;
                const unsigned green = format == 0u ? 6u : bits;
                rgb.push_back((pixel & ((1u << bits) - 1u)) * 255u / ((1u << bits) - 1u));
                rgb.push_back(((pixel >> bits) & ((1u << green) - 1u)) * 255u / ((1u << green) - 1u));
                rgb.push_back(((pixel >> (bits + green)) & ((1u << bits) - 1u)) * 255u / ((1u << bits) - 1u));
            }
        }
    } else return;
    std::ofstream image(output / ("frame-" + std::to_string(static_cast<unsigned>(seconds)) + ".ppm"), std::ios::binary);
    image << "P6\n" << width << ' ' << height << "\n255\n";
    image.write(reinterpret_cast<const char *>(rgb.data()), static_cast<std::streamsize>(rgb.size()));
    if (image) ++snapshots;
}
bool stress_test_finish(bool completed_duration) {
    if (!enabled) return true;
    const bool passed = controller.started() && controller.moving_samples() >= 5 && controller.distance() >= 10.0;
    const bool driving_verified = controller.driving_samples() >= 5u;
    const bool success = passed && completed_duration && (!driving_required || driving_verified);
    std::ofstream report(output / "summary.json");
    report << "{\n  \"movement_verified\": " << (passed ? "true" : "false")
           << ",\n  \"completed_duration\": " << (completed_duration ? "true" : "false")
           << ",\n  \"driving_verified\": " << (driving_verified ? "true" : "false")
           << ",\n  \"success\": " << (success ? "true" : "false")
           << ",\n  \"elapsed_seconds\": " << elapsed()
           << ",\n  \"distance\": " << controller.distance()
           << ",\n  \"moving_samples\": " << controller.moving_samples()
           << ",\n  \"driving_samples\": " << controller.driving_samples()
           << ",\n  \"recoveries\": " << controller.recoveries()
           << ",\n  \"blocked_writes\": " << blocked_writes
           << ",\n  \"presents\": " << presents
           << ",\n  \"mean_present_interval_ms\": " << (presents > 1 ? frame_sum / (presents - 1) : 0.0)
           << ",\n  \"max_present_interval_ms\": " << frame_max
           << ",\n  \"snapshots\": " << snapshots << "\n}\n";
    std::cerr << "[stress] movement_verified=" << passed << " distance=" << controller.distance()
              << " moving_samples=" << controller.moving_samples() << "\n";
    return success && bool(report);
}
}
