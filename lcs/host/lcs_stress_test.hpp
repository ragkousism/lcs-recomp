#pragma once

#include "display_window.hpp"

#include <array>
#include <cstdint>
#include <filesystem>

namespace lcs {

struct StressObservation {
    bool ready{};
    bool driving{};
    std::uint32_t entity{};
    std::array<float, 3> position{};
    bool menu{};
};

// Time comes from the caller so scripts and obstacle recovery can be replayed in tests.
class StressController {
public:
    explicit StressController(bool seek_vehicle = false) : seek_vehicle_(seek_vehicle) {}
    HostInputState sample(double seconds, const StressObservation &observation);
    double distance() const { return distance_; }
    unsigned recoveries() const { return recoveries_; }
    unsigned moving_samples() const { return moving_samples_; }
    unsigned driving_samples() const { return driving_samples_; }
    bool gameplay_lost(double seconds) const { return started_ && seconds - last_ready_at_ >= 120.0; }
    bool movement_stalled() const { return stalled_seconds_ >= 60.0; }
    bool started() const { return started_; }
    bool startup_failed(double seconds) const { return !started_ && seconds >= 120.0; }
private:
    bool seek_vehicle_{};
    bool started_{};
    bool tracking_{};
    std::uint32_t entity_{};
    std::array<float, 3> previous_{};
    std::array<float, 3> anchor_{};
    double started_at_{};
    double last_ready_at_{};
    double observed_at_{};
    double anchor_at_{};
    double recovery_at_{-100.0};
    double distance_{};
    double stalled_seconds_{};
    unsigned recoveries_{};
    unsigned moving_samples_{};
    unsigned driving_samples_{};
};

// Explicit opt-in; enabling this also disables ALL guest filesystem writes.
void stress_test_init(bool enabled, bool driving, const std::filesystem::path &output);
bool stress_test_enabled();
bool stress_savedata_mutates(std::uint32_t mode);
void stress_test_note_blocked_write();
HostInputState stress_test_input(psprecomp::Runtime &runtime, HostInputState physical);
void stress_test_present(psprecomp::Runtime &runtime, std::uint32_t buffer,
                         std::uint32_t stride, std::uint32_t format);
bool stress_test_finish(bool completed_duration);

}
