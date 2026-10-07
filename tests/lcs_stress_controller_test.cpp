#include "lcs_stress_test.hpp"
#include "lcs_key_bindings.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>

void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
int main() {
    try {
        lcs::StressController c;
        auto input = c.sample(2.1, {});
        check(input.buttons == lcs::kPspCross, "startup confirm pulse missing");
        check(c.sample(2.5, {}).buttons == 0, "startup pulse did not release");
        check(c.startup_failed(120), "startup must time out");
        lcs::StressObservation o{true, false, 123, {0, 0, 0}};
        input = c.sample(3, o);
        check(input.analog_y == 0 && (input.buttons & lcs::kPspCross), "running input missing");
        check(!c.startup_failed(130), "gameplay should clear startup failure");
        for (int i = 1; i <= 6; ++i) {
            o.position[0] = static_cast<float>(i * 3);
            c.sample(3 + i, o);
        }
        check(c.distance() == 18 && c.moving_samples() == 6, "movement evidence incorrect");
        o.position[0] = 1000;
        c.sample(10, o);
        check(c.distance() == 18, "teleport counted as movement");
        o.entity = 456;
        o.position[0] = 0;
        c.sample(11, o);
        check(c.distance() == 18, "entity switch counted as movement");
        c.sample(17, o);
        input = c.sample(17.1, o);
        check(c.recoveries() == 1 && input.analog_y == 255, "stuck character must back up");
        input = c.sample(19, o);
        check(input.analog_x != 128 && input.camera_x != 0, "recovery must turn");
        check(c.sample(21, {}).buttons == 0, "do not blindly confirm menus after gameplay");
        lcs::StressObservation menu;
        menu.menu = true;
        check(c.sample(20.1, menu).buttons == lcs::kPspCircle, "incidental menus should cancel, never confirm");
        check(c.sample(20.5, menu).buttons == 0, "menu cancel did not release");
        o.driving = true;
        o.entity = 789;
        c.sample(22, o);
        o.position[0] = 20;
        input = c.sample(23, o);
        check(input.accelerate && !(input.buttons & lcs::kPspCross), "vehicle acceleration hook missing");
        check(c.driving_samples() == 1, "driving movement not recorded");
        lcs::StressController driver(true);
        o.driving = false;
        driver.sample(0, o);
        check(driver.sample(10.1, o).buttons & lcs::kPspTriangle, "vehicle seeking missing");
        check(!(driver.sample(10.5, o).buttons & lcs::kPspTriangle), "vehicle button did not release");
        lcs::StressController stuck;
        o.entity = 123; o.driving = false;
        for (int i = 0; i <= 60; ++i) stuck.sample(i, o);
        check(stuck.movement_stalled(), "stationary test must fail rather than pass a soak");
        check(!stuck.gameplay_lost(179), "gameplay timeout triggered too early");
        check(stuck.gameplay_lost(180), "lost gameplay must time out");
        for (unsigned mode : {1u, 3u, 5u, 6u, 7u, 9u, 10u, 13u, 14u, 17u, 18u, 19u, 20u, 21u})
            check(lcs::stress_savedata_mutates(mode), "a savedata mutation is unprotected");
        for (unsigned mode : {0u, 2u, 4u, 8u, 11u, 12u, 15u, 16u, 22u})
            check(!lcs::stress_savedata_mutates(mode), "read-only savedata operation blocked");
        std::cout << "Stress controller tests passed\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
