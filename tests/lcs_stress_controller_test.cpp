#include "lcs_stress_test.hpp"
#include "lcs_key_bindings.hpp"
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
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
        const auto hold = lcs::parse_direct_order("hold");
        check(hold.hold && !hold.shot && !hold.has_target, "hold should stand");
        const auto shot = lcs::parse_direct_order("shot goto 12.5 -4");
        check(shot.shot && shot.has_target && shot.target_x == 12.5f && shot.target_y == -4.0f,
              "shot goto should keep both");
        const auto stick = lcs::parse_direct_order("stick 0 255 64");
        check(stick.manual && stick.analog_x == 0 && stick.analog_y == 255 && stick.buttons == 64u,
              "stick should copy the pad");
        check(lcs::parse_direct_order("run").buttons == lcs::kPspCross, "run should sprint");
        check(lcs::parse_direct_order("nope").hold, "unknown command should stand");
        lcs::StressObservation ped;
        ped.position = {0, 0, 0};
        ped.facing = {0, 1};
        const auto north = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(!north.arrived && north.input.analog_x == 128 && north.input.analog_y == 0 &&
              (north.input.buttons & lcs::kPspCross), "aligned target should run forward");
        const auto east = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(east.input.analog_x == 255 && east.input.analog_y == 128, "target on the right should turn right");
        const auto west = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 0"), ped);
        check(west.input.analog_x == 0, "target on the left should turn left");
        ped.facing = {1, 0};
        const auto behind = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 0"), ped);
        check(behind.input.analog_x == 255 && behind.input.analog_y == 128 &&
              !(behind.input.buttons & lcs::kPspCross),
              "target directly behind should turn");
        const auto behind_left = lcs::apply_direct_order(lcs::parse_direct_order("goto -10 2"), ped);
        check(behind_left.input.analog_x == 0 && behind_left.input.analog_y == 128,
              "a target just left of behind should turn left");
        ped.facing = {0, 1};
        const auto there = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 1"), ped);
        check(there.arrived && there.input.analog_x == 128 && there.input.analog_y == 128,
              "arrival should stand");
        ped.facing = {0, 0};
        check(lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped).input.analog_x == 255,
              "missing facing should turn");
        ped.facing = {1, 0};
        ped.camera = {0, 1};
        const auto cam_north = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(cam_north.input.analog_x == 128 && cam_north.input.analog_y == 0 &&
              (cam_north.input.buttons & lcs::kPspCross),
              "on foot goto should follow the camera, not the body");
        const auto cam_east = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(cam_east.input.analog_x == 255 && cam_east.input.analog_y == 128,
              "a target right of the camera should turn right");
        const auto cam_behind = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 -10"), ped);
        check(cam_behind.input.analog_x == 128 && cam_behind.input.analog_y == 255 &&
              !(cam_behind.input.buttons & lcs::kPspCross),
              "a target behind a fixed camera should walk back");
        ped.driving = true;
        ped.facing = {0, 1};
        ped.camera = {1, 0};
        const auto drive = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 10"), ped);
        check(drive.input.accelerate && drive.input.analog_x == 128,
              "a vehicle should steer from its heading");
        const auto turning = lcs::apply_direct_order(lcs::parse_direct_order("goto 10 0"), ped);
        check(turning.input.accelerate && !turning.input.brake && turning.input.analog_x == 255 &&
              turning.input.analog_y == 0,
              "a vehicle should accelerate while turning");
        const auto reverse = lcs::apply_direct_order(lcs::parse_direct_order("goto 0 -10"), ped);
        check(reverse.input.brake && !reverse.input.accelerate && reverse.input.analog_y == 255,
              "a vehicle should reverse toward a target behind it");
        const float rows[3][2] = {{3.0f, 0.0f}, {0.0f, 1.0f}, {0.0f, 4.0f}};
        const auto heading = lcs::matrix_forward(rows);
        check(heading[0] == 0.0f && heading[1] == 1.0f,
              "forward row should win over a longer right or up row");
        float missing[3][2] = {{1.0f, 0.0f}, {0.0f, 1.0f}, {0.0f, 0.0f}};
        missing[1][0] = std::numeric_limits<float>::quiet_NaN();
        const auto no_heading = lcs::matrix_forward(missing);
        check(no_heading[0] == 0.0f && no_heading[1] == 0.0f,
              "a non-finite forward row should be empty");
        const auto dir = std::filesystem::temp_directory_path() / "lcs-stress-ppm-test";
        std::filesystem::remove_all(dir);
        std::filesystem::create_directories(dir);
        const unsigned char rgb[6] = {1, 2, 3, 4, 5, 6};
        const auto ppm_path = dir / "shot.ppm";
        const auto latest = dir / "latest.ppm";
        check(lcs::write_ppm(ppm_path, latest, rgb, sizeof rgb, 2, 1), "ppm write should finish before copy");
        std::ifstream shot_in(ppm_path, std::ios::binary);
        std::ifstream latest_in(latest, std::ios::binary);
        const std::string shot_bytes((std::istreambuf_iterator<char>(shot_in)), {});
        const std::string latest_bytes((std::istreambuf_iterator<char>(latest_in)), {});
        check(!shot_bytes.empty() && shot_bytes == latest_bytes, "latest ppm should match the closed file");
        std::filesystem::remove_all(dir);
        lcs::VehicleSample cars[3] = {{100.0f, 0.0f, 0.0f}, {4.0f, 1.0f, 0.0f}, {8.0f, 0.0f, 0.0f}};
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 80.0f) == 1,
              "nearest vehicle should win");
        cars[1].x = std::numeric_limits<float>::quiet_NaN();
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 80.0f) == 2,
              "a non-finite vehicle should be ignored");
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, cars, 3, 5.0f) == -1,
              "a vehicle past the search radius should be ignored");
        check(lcs::nearest_vehicle(0.0f, 0.0f, 0.0f, nullptr, 0, 80.0f) == -1,
              "no vehicles should report none");
        std::cout << "Stress controller tests passed\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
