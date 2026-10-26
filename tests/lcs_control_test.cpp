#include "lcs_control.hpp"

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <initializer_list>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#if !defined(_WIN32)
#include <poll.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>
#endif

namespace {

int g_fails = 0;

void expect(bool condition, const char *message) {
    if (condition) return;
    std::cerr << "FAIL " << message << '\n';
    ++g_fails;
}

int begin_case() { return g_fails; }

void end_case(const char *name, int before) {
    if (g_fails == before) std::cout << name << " ok\n";
    else std::cout << name << " FAILED\n";
}

enum class EvKind { Cam, Drive, Supp, Mouse };

struct Ev {
    EvKind kind;
    int a{};
    int b{};
    bool accel{};
    bool brake{};
};

std::vector<Ev> g_events;
bool g_stick = false;

void on_camera(int x, int y, void *) { g_events.push_back({EvKind::Cam, x, y, false, false}); }
void on_drive(bool accelerate, bool brake, void *) {
    g_events.push_back({EvKind::Drive, 0, 0, accelerate, brake});
}
void on_suppress(void *) { g_events.push_back({EvKind::Supp, 0, 0, false, false}); }
void on_mouse(int dx, int dy, void *) { g_events.push_back({EvKind::Mouse, dx, dy, false, false}); }

bool camera_probe() { return g_stick; }

void install_publisher() {
    lcs::ControlPublisher publisher;
    publisher.camera = on_camera;
    publisher.drive = on_drive;
    publisher.suppress_mouse = on_suppress;
    publisher.mouse_delta = on_mouse;
    lcs::control_set_publisher(publisher);
    lcs::control_set_camera_stick_probe(camera_probe);
}

std::string send(const char *json, std::int64_t now, bool truncated = false) {
    return lcs::control_handle_client_message(json, now, truncated);
}

void boot(std::int64_t now = 10000) {
    lcs::control_surface_reset();
    g_events.clear();
    const std::string reply = send(R"({"op":"hello","id":1,"version":1})", now);
    expect(reply.find("\"ok\":true") != std::string::npos, "hello failed");
}

bool extract_i64(const std::string &json, const char *key, std::int64_t &out) {
    const std::string pattern = std::string("\"") + key + "\":";
    const std::size_t pos = json.find(pattern);
    if (pos == std::string::npos) return false;
    const char *start = json.c_str() + pos + pattern.size();
    char *end = nullptr;
    out = std::strtoll(start, &end, 10);
    return end != start;
}

int count_kind(EvKind kind) {
    int count = 0;
    for (const Ev &event : g_events)
        if (event.kind == kind) ++count;
    return count;
}

bool last_camera(int x, int y) {
    for (auto it = g_events.rbegin(); it != g_events.rend(); ++it) {
        if (it->kind == EvKind::Cam) return it->a == x && it->b == y;
    }
    return false;
}

bool last_drive(bool accelerate, bool brake) {
    for (auto it = g_events.rbegin(); it != g_events.rend(); ++it) {
        if (it->kind == EvKind::Drive) return it->accel == accelerate && it->brake == brake;
    }
    return false;
}

bool saw_kind_after(std::size_t start, EvKind kind) {
    for (std::size_t index = start; index < g_events.size(); ++index)
        if (g_events[index].kind == kind) return true;
    return false;
}

lcs::HostInputState human_pad() {
    lcs::HostInputState pad;
    pad.buttons = lcs::kPspCross;
    pad.analog_x = 200;
    pad.analog_y = 40;
    pad.camera_x = 3;
    pad.camera_y = 9;
    pad.accelerate = false;
    pad.brake = true;
    return pad;
}

bool same_pad(const lcs::HostInputState &left, const lcs::HostInputState &right) {
    return left.buttons == right.buttons && left.analog_x == right.analog_x &&
           left.analog_y == right.analog_y && left.camera_x == right.camera_x &&
           left.camera_y == right.camera_y && left.accelerate == right.accelerate &&
           left.brake == right.brake;
}

bool zero_pad(const lcs::HostInputState &pad) {
    return pad.buttons == 0u && pad.analog_x == 128u && pad.analog_y == 128u && pad.camera_x == 0 &&
           pad.camera_y == 0 && !pad.accelerate && !pad.brake;
}

lcs::ControlApplyContext at(std::int64_t now) {
    lcs::ControlApplyContext ctx;
    ctx.now_ms = now;
    return ctx;
}

lcs::ControlRequest request_with(std::initializer_list<lcs::BindAction> actions) {
    lcs::ControlRequest request;
    for (const lcs::BindAction action : actions)
        request.held_mask |= 1u << static_cast<unsigned>(action);
    return request;
}

void test_resolver() {
    const int before = begin_case();
    using lcs::BindAction;
    for (unsigned index = 0; index < static_cast<unsigned>(BindAction::Count); ++index) {
        const auto action = static_cast<BindAction>(index);
        lcs::ControlRequest request;
        request.held_mask = 1u << index;
        const lcs::HostInputState on_foot = lcs::resolve_control_request(request, false);
        const lcs::HostInputState driving = lcs::resolve_control_request(request, true);
        expect(on_foot.buttons == lcs::action_buttons(action, false), "on-foot action bit");
        expect(driving.buttons == lcs::action_buttons(action, true), "vehicle action bit");
    }

    const lcs::HostInputState forward = lcs::resolve_control_request(request_with({BindAction::MoveForward}), false);
    expect(forward.analog_y == 1u, "on-foot forward stick");
    expect(forward.accelerate, "on-foot forward accelerate");
    expect(forward.buttons == 0u, "on-foot forward has no button");

    lcs::ControlRequest walk = request_with({BindAction::MoveForward, BindAction::Walk});
    const lcs::HostInputState walking = lcs::resolve_control_request(walk, false);
    expect(walking.analog_y == 68u, "walk reach");
    expect(walking.accelerate, "walk still accelerates");

    const lcs::HostInputState oppose = lcs::resolve_control_request(
        request_with({BindAction::MoveForward, BindAction::MoveBack}), false);
    expect(oppose.analog_y == 128u, "opposing Y cancels");
    expect(oppose.accelerate && oppose.brake, "both drive flags");

    const lcs::HostInputState strafe = lcs::resolve_control_request(
        request_with({BindAction::MoveLeft, BindAction::MoveRight}), false);
    expect(strafe.analog_x == 128u, "opposing X cancels");

    const lcs::HostInputState vehicle_forward =
        lcs::resolve_control_request(request_with({BindAction::MoveForward}), true);
    expect(vehicle_forward.accelerate, "vehicle forward accelerates");
    expect(vehicle_forward.analog_y == 128u, "vehicle forward leaves Y");
    expect(vehicle_forward.buttons == 0u, "vehicle forward has no button");

    const lcs::HostInputState vehicle_both = lcs::resolve_control_request(
        request_with({BindAction::MoveForward, BindAction::MoveBack}), true);
    expect(vehicle_both.analog_y == 128u && vehicle_both.accelerate && vehicle_both.brake,
           "vehicle both pedals");

    const lcs::HostInputState vehicle_up = lcs::resolve_control_request(request_with({BindAction::Up}), true);
    expect(vehicle_up.analog_y == 1u, "vehicle pitch");
    expect((vehicle_up.buttons & lcs::kPspUp) != 0u, "vehicle up bit");

    lcs::ControlRequest moved = request_with({BindAction::MoveForward});
    moved.analog_explicit = true;
    moved.analog_x = 10;
    moved.analog_y = 20;
    const lcs::HostInputState foot_move = lcs::resolve_control_request(moved, false);
    const lcs::HostInputState car_move = lcs::resolve_control_request(moved, true);
    expect(foot_move.analog_x == 10u && foot_move.analog_y == 20u && foot_move.accelerate, "explicit move on foot");
    expect(car_move.analog_x == 10u && car_move.analog_y == 20u && car_move.accelerate, "explicit move in vehicle");

    lcs::ControlRequest look;
    look.camera_explicit = true;
    look.camera_x = 200;
    look.camera_y = -200;
    const lcs::HostInputState clamped = lcs::resolve_control_request(look, false);
    expect(clamped.camera_x == 127 && clamped.camera_y == -127, "camera clamp");
    look.camera_explicit = false;
    look.camera_x = 5;
    const lcs::HostInputState hidden = lcs::resolve_control_request(look, false);
    expect(hidden.camera_x == 0 && hidden.camera_y == 0, "camera omitted stays zero");

    end_case("resolver", before);
}

struct ByteMem {
    std::map<std::uint32_t, std::uint8_t> bytes;
    std::vector<std::uint32_t> loads;
};

bool mem_contains(void *ctx, std::uint32_t address, std::uint32_t size) noexcept {
    auto *mem = static_cast<ByteMem *>(ctx);
    if (size == 0u || address > 0xFFFFFFFFu - (size - 1u)) return false;
    for (std::uint32_t offset = 0; offset < size; ++offset)
        if (!mem->bytes.contains(address + offset)) return false;
    return true;
}

std::uint8_t mem_load8(void *ctx, std::uint32_t address) noexcept {
    auto *mem = static_cast<ByteMem *>(ctx);
    mem->loads.push_back(address);
    const auto found = mem->bytes.find(address);
    return found == mem->bytes.end() ? 0u : found->second;
}

std::uint32_t mem_load32(void *ctx, std::uint32_t address) noexcept {
    auto *mem = static_cast<ByteMem *>(ctx);
    mem->loads.push_back(address);
    std::uint32_t value = 0u;
    for (int lane = 0; lane < 4; ++lane) {
        const auto found = mem->bytes.find(address + static_cast<std::uint32_t>(lane));
        const std::uint8_t byte = found == mem->bytes.end() ? 0u : found->second;
        value |= static_cast<std::uint32_t>(byte) << (8 * lane);
    }
    return value;
}

lcs::ControlMemory view_of(ByteMem &mem) {
    lcs::ControlMemory view;
    view.contains = mem_contains;
    view.load8 = mem_load8;
    view.load32 = mem_load32;
    view.ctx = &mem;
    return view;
}

void put8(ByteMem &mem, std::uint32_t address, std::uint8_t value) { mem.bytes[address] = value; }

void put32(ByteMem &mem, std::uint32_t address, std::uint32_t value) {
    for (int lane = 0; lane < 4; ++lane)
        mem.bytes[address + static_cast<std::uint32_t>(lane)] =
            static_cast<std::uint8_t>((value >> (8 * lane)) & 0xFFu);
}

void put_f(ByteMem &mem, std::uint32_t address, float value) {
    std::uint32_t bits = 0u;
    std::memcpy(&bits, &value, sizeof bits);
    put32(mem, address, bits);
}

void fill(ByteMem &mem, std::uint32_t address, std::uint32_t size, std::uint8_t value = 0u) {
    for (std::uint32_t offset = 0; offset < size; ++offset) mem.bytes[address + offset] = value;
}

bool loaded(const ByteMem &mem, std::uint32_t address) {
    for (const std::uint32_t load : mem.loads)
        if (load == address) return true;
    return false;
}

bool loaded_span(const ByteMem &mem, std::uint32_t address, std::uint32_t size) {
    for (const std::uint32_t load : mem.loads)
        if (load >= address && load < address + size) return true;
    return false;
}

constexpr std::uint32_t kSlot = 0x08B5E054u;
constexpr std::uint32_t kPedTable = 0x08B89A10u;
constexpr std::uint32_t kPed = 0x10000000u;
constexpr std::uint32_t kVehicle = 0x20000000u;

void test_pose() {
    const int before = begin_case();

    ByteMem empty;
    const lcs::ControlObservation unmapped = lcs::observe_player(view_of(empty));
    expect(!unmapped.driving && !unmapped.pose_ready && !unmapped.has_position && !unmapped.has_forward,
           "unmapped slot");
    expect(empty.loads.empty(), "unmapped slot loaded");

    ByteMem bad_slot;
    put8(bad_slot, kSlot, 2u);
    const lcs::ControlObservation slot = lcs::observe_player(view_of(bad_slot));
    expect(!slot.driving && !slot.pose_ready && !slot.has_position, "invalid slot");
    expect(loaded(bad_slot, kSlot), "slot was read");
    expect(!loaded(bad_slot, kPedTable), "invalid slot loaded the ped table");

    ByteMem bad_ped;
    put8(bad_ped, kSlot, 0u);
    put32(bad_ped, kPedTable, kPed);
    const lcs::ControlObservation ped = lcs::observe_player(view_of(bad_ped));
    expect(!ped.driving && !ped.pose_ready && !ped.has_position, "invalid ped");
    expect(loaded(bad_ped, kPedTable), "ped word was read");
    expect(!loaded_span(bad_ped, kPed, 1337u), "invalid ped loaded the ped");

    ByteMem boundary;
    put8(boundary, kSlot, 0u);
    put32(boundary, kPedTable, kPed);
    fill(boundary, kPed, 1336u);
    const lcs::ControlObservation edge = lcs::observe_player(view_of(boundary));
    expect(!edge.driving && !edge.pose_ready && !edge.has_position && !edge.has_forward, "ped boundary");
    expect(!loaded(boundary, kPed + 1336u) && !loaded(boundary, kPed + 1332u), "boundary loaded ped fields");

    ByteMem bad_vehicle;
    put8(bad_vehicle, kSlot, 0u);
    put32(bad_vehicle, kPedTable, kPed);
    fill(bad_vehicle, kPed, 1337u);
    put8(bad_vehicle, kPed + 1336u, 1u);
    put32(bad_vehicle, kPed + 1332u, kVehicle);
    const lcs::ControlObservation vehicle = lcs::observe_player(view_of(bad_vehicle));
    expect(!vehicle.driving && !vehicle.pose_ready && !vehicle.has_position, "invalid vehicle");
    expect(loaded(bad_vehicle, kPed + 1336u) && loaded(bad_vehicle, kPed + 1332u), "driving fields were read");
    expect(!loaded_span(bad_vehicle, kVehicle, 64u), "invalid vehicle was loaded");

    boot();
    const std::string act = send(R"({"op":"act","id":2,"hold_ms":500,"hold":["MoveForward"]})", 10000);
    expect(act.find("\"ok\":true") != std::string::npos, "act before bad pose");
    lcs::ControlApplyContext ctx = at(10000);
    const lcs::ControlApplyResult applied = lcs::control_surface_apply(human_pad(), view_of(bad_vehicle), ctx);
    expect(std::string(applied.source) == "agent", "bad pose still applies the command");
    expect(applied.input.analog_y == 1u && applied.input.accelerate, "bad pose resolves on foot");
    const std::string observed = send(R"({"op":"observe","id":3})", 10000);
    expect(observed.find("\"pose_ready\":false") != std::string::npos, "observe pose_ready");
    expect(observed.find("\"position\":null") != std::string::npos, "observe position null");
    expect(observed.find("\"forward\":null") != std::string::npos, "observe forward null");

    ByteMem on_foot;
    put8(on_foot, kSlot, 0u);
    put32(on_foot, kPedTable, kPed);
    fill(on_foot, kPed, 1337u);
    put_f(on_foot, kPed + 48u, 10.0f);
    put_f(on_foot, kPed + 52u, -20.0f);
    put_f(on_foot, kPed + 56u, 30.0f);
    put_f(on_foot, kPed + 32u, 0.0f);
    put_f(on_foot, kPed + 36u, 1.0f);
    put_f(on_foot, kPed + 40u, 0.0f);
    const lcs::ControlObservation standing = lcs::observe_player(view_of(on_foot));
    expect(!standing.driving && standing.pose_ready && standing.has_position && standing.has_forward, "on-foot pose");
    expect(standing.position[0] == 10.0f && standing.position[1] == -20.0f && standing.position[2] == 30.0f,
           "on-foot position");
    expect(!loaded(on_foot, kPed + 1332u), "on-foot loaded a vehicle pointer");

    ByteMem wide;
    put8(wide, kSlot, 0u);
    put32(wide, kPedTable, kPed);
    fill(wide, kPed, 1337u);
    put_f(wide, kPed + 48u, 100001.0f);
    put_f(wide, kPed + 52u, 0.0f);
    put_f(wide, kPed + 56u, 0.0f);
    const lcs::ControlObservation out_of_range = lcs::observe_player(view_of(wide));
    expect(!out_of_range.pose_ready && !out_of_range.has_position && !out_of_range.has_forward, "out of range pose");

    ByteMem car;
    put8(car, kSlot, 1u);
    put32(car, kPedTable + 368u, kPed);
    fill(car, kPed, 1337u);
    put8(car, kPed + 1336u, 1u);
    put32(car, kPed + 1332u, kVehicle);
    fill(car, kVehicle, 64u);
    put_f(car, kPed + 48u, 9.0f);
    put_f(car, kPed + 52u, 9.0f);
    put_f(car, kPed + 56u, 9.0f);
    put_f(car, kVehicle + 48u, 1.0f);
    put_f(car, kVehicle + 52u, 2.0f);
    put_f(car, kVehicle + 56u, 3.0f);
    put_f(car, kVehicle + 32u, 0.0f);
    put_f(car, kVehicle + 36u, 0.0f);
    put_f(car, kVehicle + 40u, 0.0f);
    const lcs::ControlObservation driving = lcs::observe_player(view_of(car));
    expect(driving.driving && driving.pose_ready && driving.has_position && !driving.has_forward, "vehicle pose");
    expect(driving.entity == kVehicle && driving.position[0] == 1.0f && driving.position[2] == 3.0f,
           "vehicle position");

    end_case("pose", before);
}

void test_hold_and_oneshot() {
    const int before = begin_case();
    boot();
    const lcs::HostInputState human = human_pad();
    lcs::ControlMemory memory{};

    const std::string clamped = send(
        R"({"op":"act","id":2,"hold_ms":2001,"hold":["MoveForward","Sprint"],"tap":["Jump"]})", 10000);
    expect(clamped.find("\"hold_ms\":2000") != std::string::npos, "hold clamped to 2000");
    lcs::ControlApplyContext first = at(11999);
    const lcs::ControlApplyResult live = lcs::control_surface_apply(human, memory, first);
    expect(std::string(live.source) == "agent", "hold is agent");
    expect(live.input.analog_y == 1u && live.input.accelerate, "hold forward");
    expect((live.input.buttons & lcs::kPspCross) != 0u, "hold sprint");
    expect((live.input.buttons & lcs::kPspSquare) != 0u, "tap jump on first read");

    lcs::ControlApplyContext second = at(12000 - 1);
    const lcs::ControlApplyResult replay = lcs::control_surface_apply(human, memory, second);
    expect(std::string(replay.source) == "agent", "hold replays");
    expect(replay.input.analog_y == 1u && replay.input.accelerate, "replay keeps forward");
    expect((replay.input.buttons & lcs::kPspSquare) == 0u, "tap is one read");
    expect((replay.input.buttons & lcs::kPspCross) != 0u, "sprint stays held");

    lcs::ControlApplyContext expired = at(12000);
    const lcs::ControlApplyResult neutral = lcs::control_surface_apply(human, memory, expired);
    expect(std::string(neutral.source) == "neutral", "expiry source");
    expect(zero_pad(neutral.input), "expiry is a zero sample");
    expect(last_camera(0, 0) && last_drive(false, false), "expiry releases camera and drive");

    g_events.clear();
    lcs::ControlApplyContext handoff = at(12001);
    handoff.cache_hit = true;
    const lcs::ControlApplyResult back = lcs::control_surface_apply(human, memory, handoff);
    expect(std::string(back.source) == "human" && same_pad(back.input, human), "expiry handoff");
    expect(last_camera(human.camera_x, human.camera_y) && last_drive(human.accelerate, human.brake),
           "handoff republishes cached human axes");
    expect(count_kind(EvKind::Supp) == 1, "handoff suppresses mouse-look");

    boot();
    const std::string negative = send(
        R"({"op":"act","id":2,"hold_ms":-1,"hold":["MoveForward"],"camera":{"x":15,"y":-4}})", 5000);
    expect(negative.find("\"hold_ms\":0") != std::string::npos, "negative hold is a one-shot");
    lcs::ControlApplyContext late = at(5100);
    const lcs::ControlApplyResult missed = lcs::control_surface_apply(human, memory, late);
    expect(std::string(missed.source) == "neutral" && zero_pad(missed.input), "missed one-shot expires");
    g_events.clear();
    lcs::ControlApplyContext after_miss = at(5101);
    after_miss.cache_hit = true;
    const lcs::ControlApplyResult after = lcs::control_surface_apply(human, memory, after_miss);
    expect(std::string(after.source) == "human" && same_pad(after.input, human), "post-expiry handoff");
    expect(last_camera(3, 9) && last_drive(false, true), "post-expiry republishes human");

    boot();
    g_events.clear();
    const std::string shot = send(
        R"({"op":"act","id":4,"hold_ms":0,"hold":["MoveForward"],"camera":{"x":15,"y":-4}})", 5000);
    std::int64_t seq = 0;
    expect(extract_i64(shot, "seq", seq) && seq != 0, "one-shot seq");
    g_events.clear();
    lcs::ControlApplyContext take = at(5050);
    const lcs::ControlApplyResult once = lcs::control_surface_apply(human, memory, take);
    expect(std::string(once.source) == "agent", "one-shot source");
    expect(once.input.analog_y == 1u && once.input.accelerate, "one-shot forward");
    expect(once.input.camera_x == 15 && once.input.camera_y == -4, "one-shot camera");
    expect(last_camera(15, -4) && last_drive(true, false), "one-shot publishes its axes");
    const std::string mid = send(R"({"op":"observe","id":5})", 5050);
    std::int64_t applied_seq = -1;
    std::int64_t read_seq = 0;
    expect(extract_i64(mid, "applied_seq", applied_seq) && applied_seq == seq, "applied_seq matches the act");
    expect(extract_i64(mid, "read_seq", read_seq) && read_seq >= 1, "read_seq advanced");
    expect(mid.find("\"source\":\"agent\"") != std::string::npos, "snapshot source agent");

    const std::size_t after_shot = g_events.size();
    lcs::ControlApplyContext cached = at(5051);
    cached.cache_hit = true;
    const lcs::ControlApplyResult human_again = lcs::control_surface_apply(human, memory, cached);
    expect(std::string(human_again.source) == "human" && same_pad(human_again.input, human),
           "one-shot handoff pad");
    expect(last_camera(human.camera_x, human.camera_y) && last_drive(false, true),
           "cache hit republishes the human sample");
    expect(saw_kind_after(after_shot, EvKind::Supp), "handoff suppress");
    expect(!last_camera(15, -4), "one-shot camera does not stick");

    const std::size_t after_handoff = g_events.size();
    lcs::ControlApplyContext steady = at(5052);
    steady.cache_hit = true;
    steady.mouse_dx = 6;
    const lcs::ControlApplyResult quiet = lcs::control_surface_apply(human, memory, steady);
    expect(std::string(quiet.source) == "human" && same_pad(quiet.input, human), "steady cache hit pad");
    expect(g_events.size() == after_handoff, "steady cache hit publishes nothing");

    end_case("hold", before);
}

enum class HookMode { Clear, Replace };

HookMode g_hook_mode = HookMode::Clear;

void test_hook(void *) {
    if (g_hook_mode == HookMode::Clear) {
        lcs::control_surface_clear();
        return;
    }
    send(R"({"op":"act","id":9,"hold_ms":800,"hold":["MoveForward"],"camera":{"x":11,"y":-6}})", 10000);
}

void test_release_and_races() {
    const int before = begin_case();
    const lcs::HostInputState human = human_pad();
    lcs::ControlMemory memory{};

    boot();
    send(R"({"op":"act","id":2,"hold_ms":0,"hold":["MoveForward"],"camera":{"x":15,"y":-4}})", 5000);
    g_events.clear();
    lcs::control_surface_clear();
    expect(last_camera(0, 0) && last_drive(false, false), "disconnect releases axes");
    expect(count_kind(EvKind::Supp) == 1, "disconnect suppresses");
    g_events.clear();
    lcs::ControlApplyContext cached = at(5001);
    cached.cache_hit = true;
    const lcs::ControlApplyResult after_drop = lcs::control_surface_apply(human, memory, cached);
    expect(std::string(after_drop.source) == "human" && same_pad(after_drop.input, human), "disconnect handoff");
    expect(last_camera(3, 9) && last_drive(false, true), "disconnect does not keep the one-shot");

    boot();
    send(R"({"op":"act","id":2,"hold_ms":1000,"hold":["MoveForward"]})", 10000);
    const std::string garbage = send("{", 10000);
    expect(garbage.find("\"error\":\"bad_message\"") != std::string::npos, "garbage is bad_message");
    expect(last_drive(false, false), "bad message releases throttle");
    lcs::ControlApplyContext idle = at(10000);
    idle.cache_hit = true;
    const lcs::ControlApplyResult after_bad = lcs::control_surface_apply(human, memory, idle);
    expect(std::string(after_bad.source) == "human" && same_pad(after_bad.input, human), "bad message handoff");
    expect(after_bad.input.analog_y != 1u, "bad message does not keep walking");

    boot();
    send(R"({"op":"act","id":2,"hold_ms":1000,"hold":["MoveForward"]})", 10000);
    const std::string again = send(R"({"op":"hello","id":3,"version":1})", 10000);
    expect(again.find("\"error\":\"bad_version\"") != std::string::npos, "repeated hello");
    const lcs::ControlApplyResult after_hello = lcs::control_surface_apply(human, memory, idle);
    expect(std::string(after_hello.source) == "human" && same_pad(after_hello.input, human),
           "repeated hello clears the hold");

    boot();
    const std::string unknown = send(R"({"op":"act","id":2,"hold":["MoveForward","not-a-thing"]})", 10000);
    expect(unknown.find("\"error\":\"unknown_action\"") != std::string::npos, "unknown action");
    expect(unknown.find("not-a-thing") != std::string::npos, "unknown detail");
    const lcs::ControlApplyResult after_unknown = lcs::control_surface_apply(human, memory, idle);
    expect(std::string(after_unknown.source) == "human" && after_unknown.input.analog_y == human.analog_y,
           "unknown action leaves the take idle");

    boot();
    const std::string alias = send(
        R"({"op":"act","id":2,"hold_ms":400,"hold":["move_forward"],"tap":["fire"]})", 10000);
    expect(alias.find("\"ok\":true") != std::string::npos, "alias act");
    const lcs::ControlApplyResult aliased = lcs::control_surface_apply(human, memory, idle);
    expect(std::string(aliased.source) == "agent", "alias is agent");
    expect(aliased.input.analog_y == 1u && aliased.input.accelerate, "move_forward");
    expect((aliased.input.buttons & lcs::kPspCircle) != 0u, "fire is Attack");

    lcs::control_surface_reset();
    const std::string early = send(R"({"op":"act","id":2,"hold":["Attack"]})", 10000);
    expect(early.find("\"error\":\"bad_version\"") != std::string::npos, "act before hello");
    lcs::control_surface_reset();
    const std::string version = send(R"({"op":"hello","id":1,"version":2})", 10000);
    expect(version.find("\"error\":\"bad_version\"") != std::string::npos, "bad version");
    const std::string truncated = send(R"({"op":"hello","id":1,"version":1})", 10000, true);
    expect(truncated.find("\"error\":\"bad_message\"") != std::string::npos, "truncated");

    boot();
    g_events.clear();
    g_hook_mode = HookMode::Clear;
    lcs::control_set_between_hook(test_hook, nullptr);
    lcs::ControlApplyContext race = at(10000);
    race.cache_hit = false;
    race.mouse_dx = 5;
    race.mouse_dy = -2;
    lcs::HostInputState staged = human;
    staged.camera_x = 40;
    staged.camera_y = 7;
    const lcs::ControlApplyResult discarded = lcs::control_surface_apply(staged, memory, race);
    expect(std::string(discarded.source) == "human" && same_pad(discarded.input, staged), "mismatch returns physical");
    expect(last_camera(0, 0) && last_drive(false, false), "clear wins the publish");
    expect(count_kind(EvKind::Mouse) == 0, "mismatch adds no mouse");
    expect(count_kind(EvKind::Cam) == 1, "mismatch does not publish the physical camera");
    const std::string during = send(R"({"op":"observe","id":6})", 10000);
    std::int64_t seq_after_clear = 0;
    std::int64_t applied_during = -1;
    expect(extract_i64(during, "seq", seq_after_clear), "seq after clear");
    expect(extract_i64(during, "applied_seq", applied_during) && applied_during == 0, "mismatch applied_seq");
    g_events.clear();
    lcs::ControlApplyContext next = at(10001);
    next.cache_hit = true;
    const lcs::ControlApplyResult restored = lcs::control_surface_apply(staged, memory, next);
    expect(std::string(restored.source) == "human", "restore bit survived the mismatch");
    expect(last_camera(40, 7), "next poll republishes the staged human camera");

    boot();
    g_events.clear();
    g_hook_mode = HookMode::Replace;
    lcs::control_set_between_hook(test_hook, nullptr);
    const lcs::ControlApplyResult raced = lcs::control_surface_apply(staged, memory, race);
    expect(std::string(raced.source) == "human" && raced.input.camera_x == 40, "replacement discards this poll");
    expect(last_camera(11, -6) && last_drive(true, false), "replacement act keeps its axes");
    expect(count_kind(EvKind::Mouse) == 0, "replacement adds no mouse");
    const std::string before_take = send(R"({"op":"observe","id":7})", 10000);
    std::int64_t latched = 0;
    std::int64_t not_yet = -1;
    std::int64_t reads = 0;
    expect(extract_i64(before_take, "seq", latched) && latched != 0, "act seq");
    expect(extract_i64(before_take, "applied_seq", not_yet) && not_yet == 0, "act is not sampled yet");
    expect(extract_i64(before_take, "read_seq", reads) && reads >= 1, "mismatch still counts a read");
    const lcs::ControlApplyResult taken = lcs::control_surface_apply(staged, memory, race);
    expect(std::string(taken.source) == "agent" && taken.input.analog_y == 1u && taken.input.accelerate,
           "later read consumes the replacement");
    const std::string after_take = send(R"({"op":"observe","id":8})", 10000);
    std::int64_t consumed = 0;
    std::int64_t reads_after = 0;
    expect(extract_i64(after_take, "applied_seq", consumed) && consumed == latched, "later applied_seq");
    expect(extract_i64(after_take, "read_seq", reads_after) && reads_after > reads, "read_seq moves again");

    boot();
    g_events.clear();
    lcs::ControlApplyContext miss = at(10000);
    miss.cache_hit = false;
    miss.mouse_dx = 8;
    miss.mouse_dy = -3;
    lcs::HostInputState physical = human;
    physical.camera_x = 1;
    physical.camera_y = 2;
    physical.accelerate = true;
    physical.brake = false;
    const int suppresses = count_kind(EvKind::Supp);
    const lcs::ControlApplyResult steady = lcs::control_surface_apply(physical, memory, miss);
    expect(std::string(steady.source) == "human" && same_pad(steady.input, physical), "steady miss pad");
    expect(last_camera(1, 2) && last_drive(true, false), "steady miss publishes physical");
    expect(count_kind(EvKind::Mouse) == 1 && g_events.back().kind == EvKind::Mouse, "steady miss adds mouse");
    expect(count_kind(EvKind::Supp) == suppresses, "steady miss does not suppress");

    g_events.clear();
    lcs::ControlApplyContext hit = at(10004);
    hit.cache_hit = true;
    hit.mouse_dx = 9;
    const lcs::ControlApplyResult cached_idle = lcs::control_surface_apply(physical, memory, hit);
    expect(std::string(cached_idle.source) == "human", "steady hit source");
    expect(g_events.empty(), "steady hit publishes nothing");

    boot();
    send(R"({"op":"act","id":2,"hold_ms":0,"tap":["Jump"]})", 8000);
    lcs::ControlApplyContext menu = at(8010);
    menu.host_menu = true;
    const lcs::ControlApplyResult hidden = lcs::control_surface_apply(human, memory, menu);
    expect(std::string(hidden.source) == "host_menu" && zero_pad(hidden.input), "menu hides the pad");
    expect(last_camera(0, 0) && last_drive(false, false), "menu clears axes");
    lcs::ControlApplyContext open = at(8020);
    const lcs::ControlApplyResult jumped = lcs::control_surface_apply(human, memory, open);
    expect(std::string(jumped.source) == "agent" && (jumped.input.buttons & lcs::kPspSquare) != 0u,
           "menu does not consume the one-shot");

    boot();
    const std::string bare = send(R"({"op":"act","id":2})", 10000);
    expect(bare.find("\"hold_ms\":250") != std::string::npos, "default hold");
    const lcs::ControlApplyResult empty = lcs::control_surface_apply(human, memory, at(10000));
    expect(std::string(empty.source) == "agent" && zero_pad(empty.input), "bare act is exclusive");

    const std::string huge(4097, 'x');
    const std::string oversize = lcs::control_handle_client_message(huge, 10000, false);
    expect(oversize.find("\"error\":\"bad_message\"") != std::string::npos, "oversize");

    end_case("release", before);
}

void test_enabled() {
    const int before = begin_case();
    expect(!lcs::control_surface_enabled(), "surface starts disabled");
    g_stick = false;
    lcs::control_surface_reset();
    const std::string off = send(R"({"op":"hello","id":1,"version":1})", 10);
    expect(off.find("\"camera_stick\":false") != std::string::npos, "camera stick off");
    g_stick = true;
    lcs::control_surface_reset();
    const std::string on = send(R"({"op":"hello","id":1,"version":1})", 10);
    expect(on.find("\"camera_stick\":true") != std::string::npos, "camera stick on");
    expect(on.find("MoveForward") != std::string::npos && on.find("Handbrake") != std::string::npos, "action list");
    lcs::control_surface_reset();
    const std::string imaged = send(R"({"op":"hello","id":1,"version":1,"image":true})", 10);
    expect(imaged.find("\"ok\":true") != std::string::npos && imaged.find("\"image\":null") != std::string::npos &&
               imaged.find("\"error\":\"not_ready\"") != std::string::npos,
           "hello image is not ready");
    end_case("enabled", before);
}

void test_socket() {
#if !defined(_WIN32)
    const int before = begin_case();
    const mode_t previous_mask = umask(0);
    char directory[] = "/tmp/lcs-ctl-XXXXXX";
    if (mkdtemp(directory) == nullptr) {
        expect(false, "mkdtemp");
        umask(previous_mask);
        end_case("socket", before);
        return;
    }
    const std::string path = std::string(directory) + "/control.sock";
    bool started = false;
    const auto finish = [&] {
        if (started) lcs::control_surface_stop();
        started = false;
        unlink(path.c_str());
        rmdir(directory);
        umask(previous_mask);
    };

    if (!lcs::control_surface_start(path)) {
        expect(false, "control_surface_start");
        finish();
        end_case("socket", before);
        return;
    }
    started = true;
    struct stat status {};
    expect(lstat(path.c_str(), &status) == 0 && S_ISSOCK(status.st_mode), "bound socket");
    expect(status.st_uid == geteuid(), "socket uid");
    expect((status.st_mode & 0777) == 0600, "socket mode 0600 under umask 0");

    const int client = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
    sockaddr_un address {};
    std::memset(&address, 0, sizeof address);
    address.sun_family = AF_UNIX;
    std::snprintf(address.sun_path, sizeof address.sun_path, "%s", path.c_str());
    expect(client >= 0 && connect(client, reinterpret_cast<sockaddr *>(&address), sizeof address) == 0,
           "hello connect");
    const char hello[] = R"({"op":"hello","id":7,"version":1})";
    expect(send(client, hello, sizeof hello - 1u, MSG_NOSIGNAL) == static_cast<ssize_t>(sizeof hello - 1u),
           "send hello");
    pollfd waiting {};
    waiting.fd = client;
    waiting.events = POLLIN;
    expect(poll(&waiting, 1, 1000) > 0, "hello reply");
    char buffer[8192];
    const ssize_t got = recv(client, buffer, sizeof buffer, 0);
    const std::string reply(buffer, buffer + (got > 0 ? static_cast<std::size_t>(got) : 0u));
    expect(got > 0 && reply.find("\"ok\":true") != std::string::npos &&
               reply.find("\"op\":\"hello\"") != std::string::npos,
           "hello round trip");
    if (client >= 0) close(client);

    bool rehello = false;
    for (int attempt = 0; attempt < 25 && !rehello; ++attempt) {
        const int again = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
        if (again < 0) break;
        if (connect(again, reinterpret_cast<sockaddr *>(&address), sizeof address) == 0 &&
            send(again, hello, sizeof hello - 1u, MSG_NOSIGNAL) == static_cast<ssize_t>(sizeof hello - 1u)) {
            pollfd retry {};
            retry.fd = again;
            retry.events = POLLIN;
            if (poll(&retry, 1, 200) > 0) {
                char retry_buffer[8192];
                const ssize_t retry_got = recv(again, retry_buffer, sizeof retry_buffer, 0);
                const std::string retry_reply(retry_buffer, retry_buffer + (retry_got > 0 ? static_cast<std::size_t>(retry_got) : 0u));
                rehello = retry_got > 0 && retry_reply.find("\"ok\":true") != std::string::npos &&
                          retry_reply.find("\"op\":\"hello\"") != std::string::npos;
            }
        }
        close(again);
        if (!rehello) usleep(20000);
    }
    expect(rehello, "reconnect hello after EOF");

    lcs::control_surface_stop();
    started = false;
    expect(!lcs::control_surface_enabled(), "stop clears enabled");

    const int foreign = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
    expect(foreign >= 0 && bind(foreign, reinterpret_cast<sockaddr *>(&address), sizeof address) == 0 &&
               listen(foreign, 1) == 0,
           "foreign listen");
    expect(!lcs::control_surface_start(path), "live socket is in use");
    struct stat live {};
    expect(lstat(path.c_str(), &live) == 0 && S_ISSOCK(live.st_mode), "live socket was not unlinked");
    if (foreign >= 0) close(foreign);

    expect(lcs::control_surface_start(path), "stale socket is reclaimed");
    started = true;
    struct stat reclaimed {};
    expect(lstat(path.c_str(), &reclaimed) == 0 && S_ISSOCK(reclaimed.st_mode) &&
               (reclaimed.st_mode & 0777) == 0600 && reclaimed.st_uid == geteuid(),
           "reclaimed socket mode");
    finish();
    expect(!lcs::control_surface_enabled(), "enabled is false after the socket case");
    end_case("socket", before);
#endif
}

}  // namespace

int main() {
    install_publisher();
    test_resolver();
    test_pose();
    test_hold_and_oneshot();
    test_release_and_races();
    test_enabled();
    test_socket();
    if (g_fails != 0) {
        std::cerr << g_fails << " failed\n";
        return 1;
    }
    std::cout << "lcs_control_test ok\n";
    return 0;
}
