#pragma once

#include "display_window.hpp"
#include "lcs_key_bindings.hpp"

#include <cstdint>
#include <string>
#include <string_view>

namespace lcs {

struct ControlRequest {
    std::uint32_t held_mask{};
    std::uint32_t tap_mask{};
    bool analog_explicit{};
    std::uint8_t analog_x{128};
    std::uint8_t analog_y{128};
    bool camera_explicit{};
    int camera_x{};
    int camera_y{};
};

[[nodiscard]] inline HostInputState resolve_control_request(const ControlRequest &request,
                                                            bool driving) noexcept {
    HostInputState sample;
    const std::uint32_t mask = request.held_mask | request.tap_mask;
    const auto held = [&](BindAction action) noexcept {
        return (mask & (1u << static_cast<unsigned>(action))) != 0u;
    };
    for (unsigned index = 0; index < static_cast<unsigned>(BindAction::Count); ++index) {
        if ((mask & (1u << index)) == 0u) continue;
        sample.buttons |= action_buttons(static_cast<BindAction>(index), driving);
    }
    int move_x = 0;
    int move_y = 0;
    if (held(BindAction::MoveLeft)) --move_x;
    if (held(BindAction::MoveRight)) ++move_x;
    if (!driving) {
        if (held(BindAction::MoveForward)) --move_y;
        if (held(BindAction::MoveBack)) ++move_y;
    } else {
        if (held(BindAction::Up)) --move_y;
        if (held(BindAction::Down)) ++move_y;
    }
    sample.accelerate = held(BindAction::MoveForward);
    sample.brake = held(BindAction::MoveBack);
    const int reach = held(BindAction::Walk) ? 60 : 127;
    if (request.analog_explicit) {
        sample.analog_x = request.analog_x;
        sample.analog_y = request.analog_y;
    } else {
        sample.analog_x = static_cast<std::uint8_t>(std::clamp(128 + move_x * reach, 0, 255));
        sample.analog_y = static_cast<std::uint8_t>(std::clamp(128 + move_y * reach, 0, 255));
    }
    if (request.camera_explicit) {
        sample.camera_x = std::clamp(request.camera_x, -127, 127);
        sample.camera_y = std::clamp(request.camera_y, -127, 127);
    }
    return sample;
}

// Checked player read. contains is called before every load. A failed check
// returns driving false and pose_ready false without loading the rejected address.
struct ControlMemory {
    bool (*contains)(void *ctx, std::uint32_t address, std::uint32_t size) noexcept = nullptr;
    std::uint8_t (*load8)(void *ctx, std::uint32_t address) noexcept = nullptr;
    std::uint32_t (*load32)(void *ctx, std::uint32_t address) noexcept = nullptr;
    void *ctx = nullptr;
};

struct ControlObservation {
    bool driving{false};
    bool pose_ready{false};
    bool has_position{false};
    bool has_forward{false};
    float position[3]{};
    float forward[3]{};
    std::uint32_t ped{0};
    std::uint32_t entity{0};
};

[[nodiscard]] ControlObservation observe_player(const ControlMemory &memory) noexcept;

struct ControlApplyContext {
    std::int64_t now_ms{};
    bool cache_hit{};
    int mouse_dx{};
    int mouse_dy{};
    bool host_menu{};
    bool menu{};
    bool vehicle_fresh{};
    bool runtime_stopped{};
    bool window_closed{};
    std::uint64_t vblank{};
    std::string_view stop_reason{};
};

struct ControlApplyResult {
    HostInputState input{};
    const char *source{"human"};
};

struct ControlPublisher {
    void (*camera)(int x, int y, void *ctx) = nullptr;
    void (*drive)(bool accelerate, bool brake, void *ctx) = nullptr;
    void (*suppress_mouse)(void *ctx) = nullptr;
    void (*mouse_delta)(int dx, int dy, void *ctx) = nullptr;
    void *ctx = nullptr;
};

void control_set_publisher(ControlPublisher publisher) noexcept;
// Runs once, after the next apply copies the latch and drops the mutex,
// before it resolves and takes the mutex again.
void control_set_between_hook(void (*hook)(void *ctx), void *ctx) noexcept;
void control_set_camera_stick_probe(bool (*probe)()) noexcept;

[[nodiscard]] ControlApplyResult control_surface_apply(const HostInputState &physical,
                                                       const ControlMemory &memory,
                                                       const ControlApplyContext &ctx);

// I/O clear: disconnect, bad message, bad version, unknown action, release.
void control_surface_clear() noexcept;
void control_surface_reset() noexcept;
[[nodiscard]] bool control_surface_enabled() noexcept;

void control_note_vblank(std::uint64_t vblank, bool runtime_stopped,
                         std::string_view stop_reason, bool window_closed,
                         std::int64_t now_ms) noexcept;
void control_note_presented(std::uint64_t vblank, std::int64_t now_ms) noexcept;
// CPU thread, before a software present. The SDL present path reads it back.
void control_bind_present_vblank(std::uint64_t vblank) noexcept;
[[nodiscard]] bool control_bound_present_vblank(std::uint64_t &vblank) noexcept;
// CPU thread only. Written by the sampler, read by the guest apply on that same thread.
void control_note_sample(bool cache_hit, int mouse_dx, int mouse_dy) noexcept;
void control_read_sample_note(ControlApplyContext &ctx) noexcept;

[[nodiscard]] std::string control_default_socket_path();
// Prints [control] and returns false. Unlinks a socket inode this call created.
bool control_surface_start(const std::string &socket_path);
void control_surface_stop() noexcept;

// One JSON object in, one JSON object out. truncated or over 4096 bytes is bad_message.
[[nodiscard]] std::string control_handle_client_message(std::string_view bytes,
                                                        std::int64_t now_ms,
                                                        bool truncated);

}  // namespace lcs
