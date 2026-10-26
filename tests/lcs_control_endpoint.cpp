#include "lcs_control.hpp"

#include <atomic>
#include <chrono>
#include <cstdint>
#include <iostream>
#include <thread>

#include <csignal>

namespace {

std::atomic<bool> g_stop{false};

void on_signal(int) { g_stop.store(true, std::memory_order_release); }

std::int64_t now_ms() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::steady_clock::now().time_since_epoch())
        .count();
}

}  // namespace

// In-process stand-in for the game's control endpoint. It serves the same
// socket the player serves, and every pump samples an empty guest so pose
// stays not-ready.
int main(int argc, char **argv) {
    if (argc != 2 || argv[1] == nullptr || argv[1][0] != '/') {
        std::cerr << "usage: lcs_control_endpoint <absolute-socket-path>\n";
        return 2;
    }
    std::signal(SIGTERM, on_signal);
    std::signal(SIGINT, on_signal);
    if (!lcs::control_surface_start(argv[1])) return 2;
    std::cout << "ready " << argv[1] << std::endl;
    std::uint64_t vblank = 1;
    while (!g_stop.load(std::memory_order_acquire)) {
        const std::int64_t now = now_ms();
        lcs::control_note_vblank(vblank, false, {}, false, now);
        ++vblank;
        lcs::ControlApplyContext ctx;
        ctx.now_ms = now;
        ctx.cache_hit = true;
        const lcs::HostInputState physical;
        (void)lcs::control_surface_apply(physical, {}, ctx);
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    lcs::control_surface_stop();
    return 0;
}
