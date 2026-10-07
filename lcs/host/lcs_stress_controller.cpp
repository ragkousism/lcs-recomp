#include "lcs_stress_test.hpp"
#include "lcs_key_bindings.hpp"
#include <cmath>

namespace lcs {
namespace {
double separation(const std::array<float, 3> &a, const std::array<float, 3> &b) {
    return std::hypot(static_cast<double>(a[0]) - b[0], static_cast<double>(a[1]) - b[1]);
}
}
HostInputState StressController::sample(double seconds, const StressObservation &o) {
    HostInputState input;
    if (!o.ready) {
        tracking_ = false;
        // Cancel an incidental game menu (including save prompts), never confirm
        // it once the character is in gameplay. Missing/dead players stay neutral.
        if (started_ && o.menu && std::fmod(seconds, 2.0) < 0.25)
            input.buttons = kPspCircle;
        // Startup confirm pulses release between presses.
        if (!started_ && seconds >= 2.0 && std::fmod(seconds - 2.0, 3.0) < 0.25)
            input.buttons = kPspCross;
        return input;
    }
    last_ready_at_ = seconds;
    if (!started_) { started_ = true; started_at_ = seconds; }
    if (!tracking_ || entity_ != o.entity) {
        tracking_ = true; entity_ = o.entity;
        previous_ = anchor_ = o.position;
        observed_at_ = anchor_at_ = seconds; stalled_seconds_ = 0;
    }
    if (seconds - observed_at_ >= 1.0) {
        const double moved = separation(previous_, o.position);
        if (moved >= 0.1) stalled_seconds_ = 0;
        else stalled_seconds_ += seconds - observed_at_;
        // Ignore teleports and respawns rather than counting them as travel.
        if (moved >= 0.1 && moved < 100.0) { distance_ += moved; ++moving_samples_; }
        if (o.driving && moved >= 0.1 && moved < 100.0) ++driving_samples_;
        previous_ = o.position; observed_at_ = seconds;
    }
    if (seconds - anchor_at_ >= 6.0) {
        if (separation(anchor_, o.position) < 1.5 && seconds - recovery_at_ >= 8.0) {
            recovery_at_ = seconds; ++recoveries_;
        }
        anchor_ = o.position; anchor_at_ = seconds;
    }
    const double phase = std::fmod(seconds - started_at_, 40.0);
    const double recovery = seconds - recovery_at_;
    const int turn = (recoveries_ % 2 == 0) ? 1 : -1;
    if (o.driving) {
        input.accelerate = true;
        input.analog_x = phase < 25.0 ? 128u : (phase < 32.0 ? 165u : 91u);
        if (recovery < 2.0) { input.accelerate = false; input.brake = true; }
        else if (recovery < 5.0) input.analog_x = turn > 0 ? 255u : 0u;
        if (recovery >= 5.0 && recovery < 5.25 && recoveries_ % 3 == 0)
            input.buttons |= kPspTriangle; // Abandon a vehicle that repeatedly cannot move.
    } else {
        input.analog_y = 0u;
        input.analog_x = phase < 24.0 ? 128u : (phase < 32.0 ? 190u : 66u);
        if (phase < 18.0) input.buttons |= kPspCross;
        if (std::fmod(seconds - started_at_, 7.0) < 0.2) input.buttons |= kPspSquare;
        if (phase >= 32.0) input.camera_x = 45;
        if (recovery < 1.5) { input.analog_y = 255u; input.buttons = 0u; }
        else if (recovery < 4.0) {
            input.analog_x = turn > 0 ? 255u : 0u;
            input.analog_y = 128u; input.camera_x = turn * 85;
            input.buttons = std::fmod(recovery, 1.0) < 0.2 ? kPspSquare : 0u;
        }
        if (seek_vehicle_ && std::fmod(seconds - started_at_, 12.0) >= 10.0 &&
            std::fmod(seconds - started_at_, 12.0) < 10.25)
            input.buttons |= kPspTriangle;
    }
    return input;
}

bool stress_savedata_mutates(std::uint32_t mode) {
    switch (mode) {
    case 1u: case 3u: case 5u: case 6u: case 7u: case 9u: case 10u: case 13u: case 14u:
    case 17u: case 18u: case 19u: case 20u: case 21u: return true;
    default: return false;
    }
}
}
