#include "lcs_control.hpp"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
#include <utility>
#include <vector>

#if !defined(_WIN32)
#include <cerrno>
#include <fcntl.h>
#include <poll.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>
#endif

namespace lcs {
namespace {

std::mutex g_mu;

struct ControlLatch {
    std::uint64_t seq{};
    std::int64_t deadline_ms{};
    bool one_shot{};
    bool delivered{};
    std::uint32_t held_mask{};
    std::uint32_t tap_mask{};
    bool tap_pending{};
    std::uint8_t analog_x{128};
    std::uint8_t analog_y{128};
    bool analog_explicit{};
    int camera_x{};
    int camera_y{};
    bool camera_explicit{};
    bool restore_side_channels{};
};

enum class SampleSource { Human, Agent, Neutral, HostMenu };

struct ControlSnapshot {
    std::uint64_t read_seq{};
    std::uint64_t applied_seq{};
    SampleSource source{SampleSource::Human};
    HostInputState pad{};
    bool driving{false};
    bool pose_ready{false};
    bool has_position{false};
    bool has_forward{false};
    float position[3]{};
    float forward[3]{};
    std::uint32_t ped{0};
    std::uint32_t entity{0};
    bool vehicle_fresh{false};
    bool running{false};
    bool window_closed{false};
    bool menu{false};
    bool host_menu{false};
    char stop_reason[160]{};
    std::uint64_t vblank{};
    bool have_liveness{false};
    std::int64_t liveness_ms{};
    std::uint64_t presented_vblank{};
    bool have_presented{false};
    std::int64_t presented_ms{};
};

ControlLatch g_latch{};
ControlSnapshot g_snap{};
bool g_hello{false};
ControlPublisher g_pub{};
void (*g_hook)(void *) = nullptr;
void *g_hook_ctx = nullptr;
bool (*g_camera_stick)() = nullptr;
bool g_sample_cache_hit{false};
int g_sample_mouse_dx{0};
int g_sample_mouse_dy{0};
std::atomic<bool> g_enabled{false};
thread_local bool g_have_bound_present{false};
thread_local std::uint64_t g_bound_present{0};

constexpr std::uint32_t kPlayerSlot = 0x08B5E054u;
constexpr std::uint32_t kPedTable = 0x08B89A10u;

const char *source_name(SampleSource source) noexcept {
    switch (source) {
    case SampleSource::Agent: return "agent";
    case SampleSource::Neutral: return "neutral";
    case SampleSource::HostMenu: return "host_menu";
    case SampleSource::Human: return "human";
    }
    return "human";
}

void copy_reason(char *dest, std::string_view reason) noexcept {
    const std::size_t count = std::min(reason.size(), std::size_t{159});
    if (count != 0u) std::memcpy(dest, reason.data(), count);
    dest[count] = '\0';
}

void publish_camera(int x, int y) noexcept {
    if (g_pub.camera) g_pub.camera(x, y, g_pub.ctx);
}

void publish_drive(bool accelerate, bool brake) noexcept {
    if (g_pub.drive) g_pub.drive(accelerate, brake, g_pub.ctx);
}

void publish_suppress() noexcept {
    if (g_pub.suppress_mouse) g_pub.suppress_mouse(g_pub.ctx);
}

void publish_mouse(int dx, int dy) noexcept {
    if ((dx != 0 || dy != 0) && g_pub.mouse_delta) g_pub.mouse_delta(dx, dy, g_pub.ctx);
}

void publish_axes(int camera_x, int camera_y, bool accelerate, bool brake) noexcept {
    publish_camera(camera_x, camera_y);
    publish_drive(accelerate, brake);
}

ControlLatch idle_latch(std::uint64_t seq) noexcept {
    ControlLatch latch;
    latch.seq = seq;
    latch.restore_side_channels = true;
    return latch;
}

void store_observation(const ControlApplyContext &ctx, const ControlObservation &observed) noexcept {
    g_snap.driving = observed.driving;
    g_snap.pose_ready = observed.pose_ready;
    g_snap.has_position = observed.has_position && observed.pose_ready;
    g_snap.has_forward = observed.has_forward && observed.pose_ready;
    std::memcpy(g_snap.position, observed.position, sizeof g_snap.position);
    std::memcpy(g_snap.forward, observed.forward, sizeof g_snap.forward);
    g_snap.ped = observed.pose_ready ? observed.ped : 0u;
    g_snap.entity = observed.pose_ready ? observed.entity : 0u;
    g_snap.vehicle_fresh = ctx.vehicle_fresh;
    g_snap.running = !ctx.runtime_stopped && !ctx.window_closed;
    g_snap.window_closed = ctx.window_closed;
    g_snap.menu = ctx.menu;
    g_snap.host_menu = ctx.host_menu;
    copy_reason(g_snap.stop_reason, ctx.stop_reason);
}

void store_pad(const HostInputState &pad, SampleSource source, std::uint64_t applied_seq) noexcept {
    ++g_snap.read_seq;
    g_snap.pad = pad;
    g_snap.source = source;
    g_snap.applied_seq = applied_seq;
}

enum class ApplyRow { Expiry, Agent, HostMenu, Handoff, Steady };

ApplyRow classify_row(const ControlLatch &latch, const ControlApplyContext &ctx) noexcept {
    const bool armed = latch.deadline_ms != 0;
    if (armed && ctx.now_ms >= latch.deadline_ms && !latch.delivered) return ApplyRow::Expiry;
    const bool exclusive = armed && ctx.now_ms < latch.deadline_ms && !(latch.one_shot && latch.delivered);
    if (exclusive) return ctx.host_menu ? ApplyRow::HostMenu : ApplyRow::Agent;
    if (latch.restore_side_channels) return ApplyRow::Handoff;
    return ApplyRow::Steady;
}

ControlRequest request_from_latch(const ControlLatch &latch) noexcept {
    ControlRequest request;
    request.held_mask = latch.held_mask;
    request.tap_mask = latch.tap_mask;
    request.analog_explicit = latch.analog_explicit;
    request.analog_x = latch.analog_x;
    request.analog_y = latch.analog_y;
    request.camera_explicit = latch.camera_explicit;
    request.camera_x = latch.camera_x;
    request.camera_y = latch.camera_y;
    return request;
}

bool range_contained(const ControlMemory &memory, std::uint32_t address, std::uint32_t size) noexcept {
    if (memory.contains == nullptr || size == 0u) return false;
    if (address > 0xFFFFFFFFu - (size - 1u)) return false;
    return memory.contains(memory.ctx, address, size);
}

float bits_to_float(std::uint32_t bits) noexcept {
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof value);
    return value;
}

bool read_vec3(const ControlMemory &memory, std::uint32_t base, float out[3]) noexcept {
    if (memory.load32 == nullptr) return false;
    for (int lane = 0; lane < 3; ++lane) {
        const std::uint32_t address = base + static_cast<std::uint32_t>(lane) * 4u;
        if (!range_contained(memory, address, 4u)) return false;
        out[lane] = bits_to_float(memory.load32(memory.ctx, address));
    }
    return true;
}

bool finite_position(const float value[3]) noexcept {
    for (int lane = 0; lane < 3; ++lane) {
        if (!std::isfinite(value[lane])) return false;
        if (std::fabs(value[lane]) > 100000.0f) return false;
    }
    return true;
}

void clear_locked() noexcept {
    const std::uint64_t seq = g_latch.seq + 1u;
    g_latch = idle_latch(seq == 0u ? 1u : seq);
    publish_axes(0, 0, false, false);
    publish_suppress();
}

struct ParsedMessage {
    bool ok{false};
    std::string op;
    bool have_id{false};
    std::int64_t id{0};
    bool have_version{false};
    std::int64_t version{0};
    bool have_hold_ms{false};
    std::int64_t hold_ms{0};
    std::vector<std::string> hold;
    std::vector<std::string> tap;
    bool have_move{false};
    std::int64_t move_x{128};
    std::int64_t move_y{128};
    bool have_camera{false};
    std::int64_t camera_x{0};
    std::int64_t camera_y{0};
    bool have_image{false};
    bool image{false};
    std::string unknown_action;
};

struct Parser {
    std::string_view in;
    std::size_t index{0};
    bool ok{true};

    void skip() noexcept {
        while (index < in.size()) {
            const char ch = in[index];
            if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r') break;
            ++index;
        }
    }

    [[nodiscard]] bool peek(char ch) noexcept {
        skip();
        return index < in.size() && in[index] == ch;
    }

    bool eat(char ch) noexcept {
        skip();
        if (index < in.size() && in[index] == ch) {
            ++index;
            return true;
        }
        ok = false;
        return false;
    }

    std::string parse_string() {
        if (!eat('"')) return {};
        std::string out;
        while (index < in.size()) {
            const char ch = in[index++];
            if (ch == '"') return out;
            if (static_cast<unsigned char>(ch) < 0x20u) {
                ok = false;
                return {};
            }
            if (ch != '\\') {
                out.push_back(ch);
                continue;
            }
            if (index >= in.size()) {
                ok = false;
                return {};
            }
            const char escaped = in[index++];
            if (escaped == '"' || escaped == '\\' || escaped == '/') out.push_back(escaped);
            else if (escaped == 'n') out.push_back('\n');
            else if (escaped == 't') out.push_back('\t');
            else if (escaped == 'r') out.push_back('\r');
            else {
                ok = false;
                return {};
            }
        }
        ok = false;
        return {};
    }

    bool parse_int(std::int64_t &out) noexcept {
        skip();
        if (index >= in.size()) {
            ok = false;
            return false;
        }
        int sign = 1;
        if (in[index] == '-') {
            sign = -1;
            ++index;
        }
        if (index >= in.size() || in[index] < '0' || in[index] > '9') {
            ok = false;
            return false;
        }
        if (in[index] == '0') {
            ++index;
            if (index < in.size() && in[index] >= '0' && in[index] <= '9') {
                ok = false;
                return false;
            }
            out = 0;
            return true;
        }
        std::int64_t value = 0;
        while (index < in.size() && in[index] >= '0' && in[index] <= '9') {
            const int digit = in[index] - '0';
            if (value > (9223372036854775807LL - digit) / 10) {
                ok = false;
                return false;
            }
            value = value * 10 + digit;
            ++index;
        }
        out = sign < 0 ? -value : value;
        return true;
    }

    bool parse_bool(bool &out) noexcept {
        skip();
        if (in.substr(index).starts_with("true")) {
            index += 4;
            out = true;
            return true;
        }
        if (in.substr(index).starts_with("false")) {
            index += 5;
            out = false;
            return true;
        }
        ok = false;
        return false;
    }
};

struct JValue {
    enum class Kind { Bad, String, Int, Bool, Object, Array } kind{Kind::Bad};
    std::string text;
    std::int64_t number{};
    bool boolean{};
    std::vector<std::pair<std::string, JValue>> fields;
    std::vector<JValue> items;
};

JValue parse_value(Parser &parser, int depth);

JValue parse_object(Parser &parser, int depth) {
    JValue value;
    value.kind = JValue::Kind::Object;
    if (!parser.eat('{')) return {};
    if (parser.peek('}')) {
        parser.eat('}');
        return value;
    }
    while (parser.ok) {
        const std::string key = parser.parse_string();
        if (!parser.ok || !parser.eat(':')) return {};
        for (const auto &field : value.fields) {
            if (field.first == key) {
                parser.ok = false;
                return {};
            }
        }
        JValue child = parse_value(parser, depth + 1);
        if (!parser.ok || child.kind == JValue::Kind::Bad) return {};
        value.fields.emplace_back(key, std::move(child));
        parser.skip();
        if (parser.peek(',')) {
            parser.eat(',');
            continue;
        }
        if (!parser.eat('}')) return {};
        return value;
    }
    return {};
}

JValue parse_array(Parser &parser, int depth) {
    JValue value;
    value.kind = JValue::Kind::Array;
    if (!parser.eat('[')) return {};
    if (parser.peek(']')) {
        parser.eat(']');
        return value;
    }
    while (parser.ok) {
        JValue child = parse_value(parser, depth + 1);
        if (!parser.ok || child.kind == JValue::Kind::Bad) return {};
        value.items.push_back(std::move(child));
        parser.skip();
        if (parser.peek(',')) {
            parser.eat(',');
            continue;
        }
        if (!parser.eat(']')) return {};
        return value;
    }
    return {};
}

JValue parse_value(Parser &parser, int depth) {
    parser.skip();
    if (parser.index >= parser.in.size()) {
        parser.ok = false;
        return {};
    }
    const char ch = parser.in[parser.index];
    if (ch == '{') {
        if (depth >= 2) {
            parser.ok = false;
            return {};
        }
        return parse_object(parser, depth);
    }
    if (ch == '[') {
        if (depth >= 2) {
            parser.ok = false;
            return {};
        }
        return parse_array(parser, depth);
    }
    if (ch == '"') {
        JValue value;
        value.kind = JValue::Kind::String;
        value.text = parser.parse_string();
        if (!parser.ok) return {};
        return value;
    }
    if (ch == 't' || ch == 'f') {
        JValue value;
        value.kind = JValue::Kind::Bool;
        if (!parser.parse_bool(value.boolean)) return {};
        return value;
    }
    if (ch == '-' || (ch >= '0' && ch <= '9')) {
        JValue value;
        value.kind = JValue::Kind::Int;
        if (!parser.parse_int(value.number)) return {};
        return value;
    }
    parser.ok = false;
    return {};
}

const JValue *find_field(const JValue &object, const char *key) noexcept {
    for (const auto &field : object.fields) {
        if (field.first == key) return &field.second;
    }
    return nullptr;
}

bool take_string_array(const JValue &value, std::vector<std::string> &out) {
    if (value.kind != JValue::Kind::Array) return false;
    for (const JValue &item : value.items) {
        if (item.kind != JValue::Kind::String) return false;
        out.push_back(item.text);
    }
    return true;
}

bool take_axis_object(const JValue &value, std::int64_t &x, std::int64_t &y) {
    if (value.kind != JValue::Kind::Object) return false;
    const JValue *x_field = find_field(value, "x");
    const JValue *y_field = find_field(value, "y");
    if (x_field == nullptr || y_field == nullptr) return false;
    if (x_field->kind != JValue::Kind::Int || y_field->kind != JValue::Kind::Int) return false;
    if (value.fields.size() != 2u) return false;
    x = x_field->number;
    y = y_field->number;
    return true;
}

bool parse_message(std::string_view bytes, ParsedMessage &message) {
    Parser parser{bytes};
    const JValue root = parse_value(parser, 0);
    parser.skip();
    if (!parser.ok || root.kind != JValue::Kind::Object || parser.index != parser.in.size()) return false;
    const JValue *op = find_field(root, "op");
    const JValue *id = find_field(root, "id");
    if (op == nullptr || op->kind != JValue::Kind::String) return false;
    if (id == nullptr || id->kind != JValue::Kind::Int) return false;
    message.ok = true;
    message.op = op->text;
    message.have_id = true;
    message.id = id->number;
    static constexpr const char *kKnown[] = {
        "op", "id", "version", "hold_ms", "hold", "tap", "move", "camera", "image",
    };
    for (const auto &field : root.fields) {
        bool known = false;
        for (const char *name : kKnown) {
            if (field.first == name) known = true;
        }
        if (!known) return false;
    }
    if (const JValue *version = find_field(root, "version")) {
        if (version->kind != JValue::Kind::Int) return false;
        message.have_version = true;
        message.version = version->number;
    }
    if (const JValue *hold_ms = find_field(root, "hold_ms")) {
        if (hold_ms->kind != JValue::Kind::Int) return false;
        message.have_hold_ms = true;
        message.hold_ms = hold_ms->number;
    }
    if (const JValue *hold = find_field(root, "hold")) {
        if (!take_string_array(*hold, message.hold)) return false;
    }
    if (const JValue *tap = find_field(root, "tap")) {
        if (!take_string_array(*tap, message.tap)) return false;
    }
    if (const JValue *move = find_field(root, "move")) {
        if (!take_axis_object(*move, message.move_x, message.move_y)) return false;
        message.have_move = true;
    }
    if (const JValue *camera = find_field(root, "camera")) {
        if (!take_axis_object(*camera, message.camera_x, message.camera_y)) return false;
        message.have_camera = true;
    }
    if (const JValue *image = find_field(root, "image")) {
        if (image->kind != JValue::Kind::Bool) return false;
        message.have_image = true;
        message.image = image->boolean;
    }
    return true;
}

void append_escaped(std::string &out, std::string_view text) {
    for (const unsigned char ch : text) {
        if (ch == '"' || ch == '\\') {
            out.push_back('\\');
            out.push_back(static_cast<char>(ch));
        } else if (ch == '\n') {
            out += "\\n";
        } else if (ch == '\t') {
            out += "\\t";
        } else if (ch == '\r') {
            out += "\\r";
        } else if (ch < 0x20u) {
            char buf[8];
            std::snprintf(buf, sizeof buf, "\\u%04x", ch);
            out += buf;
        } else {
            out.push_back(static_cast<char>(ch));
        }
    }
}

void append_string(std::string &out, std::string_view text) {
    out.push_back('"');
    append_escaped(out, text);
    out.push_back('"');
}

void append_float(std::string &out, float value) {
    char buf[64];
    std::snprintf(buf, sizeof buf, "%.9g", static_cast<double>(value));
    out += buf;
}

std::int64_t non_negative_age(std::int64_t now_ms, std::int64_t stamp_ms) noexcept {
    if (now_ms < stamp_ms) return 0;
    return now_ms - stamp_ms;
}

// Caller holds g_mu.
std::string format_reply_locked(std::string_view op, std::int64_t id, bool ok, const char *error,
                                std::string_view detail, bool echo_hold, int hold_ms,
                                bool image_requested, std::int64_t now_ms) {
    const bool stale = !g_snap.have_liveness || non_negative_age(now_ms, g_snap.liveness_ms) > 500;
    const std::int64_t age = g_snap.have_liveness ? non_negative_age(now_ms, g_snap.liveness_ms) : 501;
    const bool running = g_snap.running && !stale;
    const std::int64_t presented_age =
        g_snap.have_presented ? non_negative_age(now_ms, g_snap.presented_ms) : 501;
    const bool presented_recently = g_snap.have_presented && presented_age <= 500;
    const bool exclusive = g_latch.deadline_ms != 0 && now_ms < g_latch.deadline_ms &&
                           !(g_latch.one_shot && g_latch.delivered);
    const std::int64_t hold_left =
        g_latch.deadline_ms == 0 || now_ms >= g_latch.deadline_ms ? 0 : g_latch.deadline_ms - now_ms;

    std::string out;
    out.reserve(1024);
    out += "{\"op\":";
    append_string(out, op);
    out += ",\"id\":";
    out += std::to_string(id);
    out += ",\"ok\":";
    out += ok ? "true" : "false";
    if (error != nullptr) {
        out += ",\"error\":";
        append_string(out, error);
    }
    if (!detail.empty()) {
        out += ",\"detail\":";
        append_string(out, detail);
    }
    if (echo_hold) {
        out += ",\"hold_ms\":";
        out += std::to_string(hold_ms);
    }
    if (op == "hello") {
        out += ",\"version\":1,\"actions\":[";
        bool first = true;
        for (unsigned index = 0; index < static_cast<unsigned>(BindAction::Count); ++index) {
            const char *name = bind_action_name(static_cast<BindAction>(index));
            if (name == nullptr || name[0] == '\0') continue;
            if (!first) out.push_back(',');
            first = false;
            append_string(out, name);
        }
        out += "],\"camera_stick\":";
        const bool stick = g_camera_stick != nullptr && g_camera_stick();
        out += stick ? "true" : "false";
        out += ",\"running\":";
        out += running ? "true" : "false";
        out += ",\"vblank\":";
        out += std::to_string(g_snap.vblank);
        out += ",\"image\":null";
        if (image_requested && error == nullptr) out += ",\"error\":\"not_ready\"";
        out.push_back('}');
        return out;
    }
    if (op == "ping") {
        out += ",\"running\":";
        out += running ? "true" : "false";
        out += ",\"vblank\":";
        out += std::to_string(g_snap.vblank);
        if (stale) out += ",\"stale\":true";
        out += ",\"image\":null";
        if (image_requested && error == nullptr) out += ",\"error\":\"not_ready\"";
        out.push_back('}');
        return out;
    }

    out += ",\"seq\":";
    out += std::to_string(g_latch.seq);
    out += ",\"read_seq\":";
    out += std::to_string(g_snap.read_seq);
    out += ",\"running\":";
    out += running ? "true" : "false";
    out += ",\"stop_reason\":";
    append_string(out, g_snap.stop_reason);
    out += ",\"window_closed\":";
    out += g_snap.window_closed ? "true" : "false";
    out += ",\"vblank\":";
    out += std::to_string(g_snap.vblank);
    out += ",\"snapshot_age_ms\":";
    out += std::to_string(age);
    if (stale) out += ",\"stale\":true";
    out += ",\"presented_vblank\":";
    out += std::to_string(g_snap.presented_vblank);
    out += ",\"presented_age_ms\":";
    out += std::to_string(presented_age);
    out += ",\"presented_recently\":";
    out += presented_recently ? "true" : "false";
    out += ",\"menu\":";
    out += g_snap.menu ? "true" : "false";
    out += ",\"host_menu\":";
    out += g_snap.host_menu ? "true" : "false";
    out += ",\"driving\":";
    out += g_snap.driving ? "true" : "false";
    out += ",\"vehicle_fresh\":";
    out += g_snap.vehicle_fresh ? "true" : "false";
    out += ",\"ped\":";
    char hex[32];
    std::snprintf(hex, sizeof hex, "\"0x%x\"", g_snap.ped);
    out += hex;
    out += ",\"entity\":";
    std::snprintf(hex, sizeof hex, "\"0x%x\"", g_snap.entity);
    out += hex;
    out += ",\"pose_ready\":";
    out += g_snap.pose_ready ? "true" : "false";
    out += ",\"position\":";
    if (!g_snap.has_position) {
        out += "null";
    } else {
        out.push_back('[');
        append_float(out, g_snap.position[0]);
        out.push_back(',');
        append_float(out, g_snap.position[1]);
        out.push_back(',');
        append_float(out, g_snap.position[2]);
        out.push_back(']');
    }
    out += ",\"forward\":";
    if (!g_snap.has_forward) {
        out += "null";
    } else {
        out.push_back('[');
        append_float(out, g_snap.forward[0]);
        out.push_back(',');
        append_float(out, g_snap.forward[1]);
        out.push_back(',');
        append_float(out, g_snap.forward[2]);
        out.push_back(']');
    }
    out += ",\"pad\":{\"buttons\":";
    out += std::to_string(g_snap.pad.buttons);
    out += ",\"analog_x\":";
    out += std::to_string(g_snap.pad.analog_x);
    out += ",\"analog_y\":";
    out += std::to_string(g_snap.pad.analog_y);
    out += ",\"camera_x\":";
    out += std::to_string(g_snap.pad.camera_x);
    out += ",\"camera_y\":";
    out += std::to_string(g_snap.pad.camera_y);
    out += ",\"accelerate\":";
    out += g_snap.pad.accelerate ? "true" : "false";
    out += ",\"brake\":";
    out += g_snap.pad.brake ? "true" : "false";
    out += ",\"source\":";
    append_string(out, source_name(g_snap.source));
    out += ",\"applied_seq\":";
    out += std::to_string(g_snap.applied_seq);
    out += "},\"latch\":{\"exclusive\":";
    out += exclusive ? "true" : "false";
    out += ",\"hold_ms_left\":";
    out += std::to_string(hold_left);
    out += ",\"one_shot\":";
    out += g_latch.one_shot ? "true" : "false";
    out += "},\"image\":null";
    if (image_requested && error == nullptr) out += ",\"error\":\"not_ready\"";
    out.push_back('}');
    return out;
}

std::string error_reply(std::string_view op, std::int64_t id, const char *error, std::string_view detail,
                        std::int64_t now_ms) {
    std::lock_guard lock(g_mu);
    return format_reply_locked(op.empty() ? "observe" : op, id, false, error, detail, false, 0, false,
                               now_ms);
}

int clamp_hold_ms(const ParsedMessage &message) noexcept {
    if (!message.have_hold_ms) return 250;
    if (message.hold_ms < 0) return 0;
    if (message.hold_ms > 2000) return 2000;
    return static_cast<int>(message.hold_ms);
}

int clamp_stick(std::int64_t value) noexcept {
    if (value < 0) return 0;
    if (value > 255) return 255;
    return static_cast<int>(value);
}

int clamp_camera(std::int64_t value) noexcept {
    if (value < -127) return -127;
    if (value > 127) return 127;
    return static_cast<int>(value);
}

bool decode_actions(const std::vector<std::string> &tokens, std::uint32_t &mask, std::string &unknown) {
    mask = 0u;
    for (const std::string &token : tokens) {
        const std::string normalized = normalize_binding_token(token);
        BindAction action{};
        if (!lookup_bind_action(normalized, action)) {
            unknown = token;
            return false;
        }
        mask |= 1u << static_cast<unsigned>(action);
    }
    return true;
}

void accept_locked(const ParsedMessage &message, int hold_ms, std::int64_t now_ms, std::uint32_t held,
                   std::uint32_t tap) noexcept {
    ControlLatch next;
    const std::uint64_t seq = g_latch.seq + 1u;
    next.seq = seq == 0u ? 1u : seq;
    next.one_shot = hold_ms == 0;
    next.deadline_ms = now_ms + (hold_ms == 0 ? 100 : hold_ms);
    next.held_mask = held;
    next.tap_mask = tap;
    next.tap_pending = tap != 0u;
    next.analog_explicit = message.have_move;
    next.analog_x = static_cast<std::uint8_t>(message.have_move ? clamp_stick(message.move_x) : 128);
    next.analog_y = static_cast<std::uint8_t>(message.have_move ? clamp_stick(message.move_y) : 128);
    next.camera_explicit = message.have_camera;
    next.camera_x = message.have_camera ? clamp_camera(message.camera_x) : 0;
    next.camera_y = message.have_camera ? clamp_camera(message.camera_y) : 0;
    g_latch = next;
    const HostInputState resolved = resolve_control_request(request_from_latch(g_latch), g_snap.driving);
    publish_axes(resolved.camera_x, resolved.camera_y, resolved.accelerate, resolved.brake);
    publish_suppress();
}

bool known_op(std::string_view op) noexcept {
    return op == "hello" || op == "act" || op == "release" || op == "observe" || op == "ping";
}

std::int64_t steady_now_ms() noexcept {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::steady_clock::now().time_since_epoch())
        .count();
}

#if !defined(_WIN32)
std::thread g_io;
std::atomic<bool> g_io_stop{false};
int g_wake_read{-1};
int g_wake_write{-1};
std::string g_bound_path;
bool g_bound{false};

bool control_fail(const char *message) {
    std::cerr << "[control] " << message << '\n';
    return false;
}

bool fill_un_address(sockaddr_un &address, const std::string &path) noexcept {
    if (path.empty() || path.size() >= sizeof address.sun_path) return false;
    std::memset(&address, 0, sizeof address);
    address.sun_family = AF_UNIX;
    std::memcpy(address.sun_path, path.data(), path.size());
    return true;
}

bool ensure_private_directory(const std::string &directory) {
    if (directory.empty() || directory.front() != '/') return control_fail("socket directory is not absolute");
    struct stat status;
    if (lstat(directory.c_str(), &status) != 0) {
        if (errno != ENOENT) return control_fail("socket directory is not private");
        if (mkdir(directory.c_str(), 0700) != 0 && errno != EEXIST) return control_fail("socket directory is not private");
        if (lstat(directory.c_str(), &status) != 0) return control_fail("socket directory is not private");
    }
    if (S_ISLNK(status.st_mode) || !S_ISDIR(status.st_mode) || status.st_uid != geteuid() ||
        (status.st_mode & 0777) != 0700) {
        return control_fail("socket directory is not private");
    }
    return true;
}

bool reclaim_stale_socket(const std::string &path) {
    struct stat status;
    if (lstat(path.c_str(), &status) != 0) return errno == ENOENT ? true : control_fail("socket in use");
    const int fd = socket(AF_UNIX, SOCK_SEQPACKET, 0);
    if (fd < 0) return control_fail("socket in use");
    timeval timeout{};
    timeout.tv_sec = 0;
    timeout.tv_usec = 200000;
    setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &timeout, sizeof timeout);
    sockaddr_un address{};
    const bool addressed = fill_un_address(address, path);
    const int connected = addressed ? connect(fd, reinterpret_cast<sockaddr *>(&address), sizeof address) : -1;
    const int error = connected == 0 ? 0 : errno;
    close(fd);
    if (!addressed || connected == 0) {
        std::cerr << "[control] socket in use\n";
        return false;
    }
    if (error == ECONNREFUSED && S_ISSOCK(status.st_mode) && status.st_uid == geteuid()) {
        return unlink(path.c_str()) == 0 ? true : control_fail("socket in use");
    }
    std::cerr << "[control] socket in use\n";
    return false;
}

void wake_io() noexcept {
    if (g_wake_write < 0) return;
    const char byte = 1;
    (void)write(g_wake_write, &byte, 1);
}

struct IoClient {
    int fd{-1};
    std::string pending;
    bool have_pending{false};
    std::int64_t backpressure_ms{0};
};

bool flush_pending(IoClient &client) {
    while (client.have_pending) {
        const ssize_t sent = send(client.fd, client.pending.data(), client.pending.size(), MSG_NOSIGNAL);
        if (sent < 0) {
            if (errno == EINTR) continue;
            if (errno == EAGAIN || errno == EWOULDBLOCK) {
                if (client.backpressure_ms == 0) client.backpressure_ms = steady_now_ms();
                return steady_now_ms() - client.backpressure_ms < 1000;
            }
            return false;
        }
        if (static_cast<std::size_t>(sent) != client.pending.size()) return false;
        client.pending.clear();
        client.have_pending = false;
        client.backpressure_ms = 0;
    }
    return true;
}

void drop_client(IoClient &client) noexcept {
    if (client.fd >= 0) close(client.fd);
    client = {};
    control_surface_clear();
    // EOF ends the session. A later connection has to hello again.
    std::lock_guard lock(g_mu);
    g_hello = false;
}

void accept_client(int listen_fd, IoClient &client) {
    const int fd = accept4(listen_fd, nullptr, nullptr, SOCK_NONBLOCK | SOCK_CLOEXEC);
    if (fd < 0) return;
    ucred peer{};
    socklen_t peer_size = sizeof peer;
    if (getsockopt(fd, SOL_SOCKET, SO_PEERCRED, &peer, &peer_size) != 0 || peer.uid != geteuid()) {
        close(fd);
        return;
    }
    if (client.fd >= 0) {
        const char busy[] = "{\"ok\":false,\"error\":\"busy\"}";
        (void)send(fd, busy, sizeof busy - 1u, MSG_NOSIGNAL);
        close(fd);
        return;
    }
    client.fd = fd;
}

void receive_request(IoClient &client) {
    char buffer[4096];
    iovec io{};
    io.iov_base = buffer;
    io.iov_len = sizeof buffer;
    msghdr message{};
    message.msg_iov = &io;
    message.msg_iovlen = 1;
    const ssize_t count = recvmsg(client.fd, &message, MSG_DONTWAIT | MSG_TRUNC);
    if (count < 0) {
        if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR) return;
        drop_client(client);
        return;
    }
    if (count == 0) {
        drop_client(client);
        return;
    }
    const bool truncated = (message.msg_flags & MSG_TRUNC) != 0 || count > 4096;
    client.pending = control_handle_client_message(
        truncated ? std::string_view{} : std::string_view(buffer, static_cast<std::size_t>(count)),
        steady_now_ms(), truncated);
    client.have_pending = true;
    client.backpressure_ms = 0;
    if (!flush_pending(client)) drop_client(client);
}

void io_thread(int listen_fd) {
    IoClient client;
    while (!g_io_stop.load(std::memory_order_acquire)) {
        if (client.fd >= 0 && client.have_pending && !flush_pending(client)) drop_client(client);
        pollfd fds[3]{};
        fds[0].fd = g_wake_read;
        fds[0].events = POLLIN;
        fds[1].fd = listen_fd;
        fds[1].events = POLLIN;
        nfds_t count = 2;
        int timeout = -1;
        if (client.fd >= 0) {
            fds[2].fd = client.fd;
            fds[2].events = client.have_pending ? POLLOUT : POLLIN;
            count = 3;
            if (client.have_pending && client.backpressure_ms != 0) {
                const std::int64_t left = 1000 - (steady_now_ms() - client.backpressure_ms);
                timeout = left <= 0 ? 0 : static_cast<int>(left);
            }
        }
        const int polled = poll(fds, count, timeout);
        if (g_io_stop.load(std::memory_order_acquire)) break;
        if (polled < 0) {
            if (errno == EINTR) continue;
            break;
        }
        if (client.fd >= 0 && client.have_pending && client.backpressure_ms != 0 &&
            steady_now_ms() - client.backpressure_ms >= 1000) {
            drop_client(client);
            continue;
        }
        if ((fds[0].revents & POLLIN) != 0) {
            char drain[32];
            while (read(g_wake_read, drain, sizeof drain) > 0) {
            }
        }
        if ((fds[1].revents & POLLIN) != 0) accept_client(listen_fd, client);
        if (client.fd >= 0 && count == 3 && (fds[2].revents & (POLLERR | POLLHUP | POLLNVAL)) != 0 &&
            (fds[2].revents & (POLLIN | POLLOUT)) == 0) {
            drop_client(client);
            continue;
        }
        if (client.fd >= 0 && !client.have_pending && count == 3 && (fds[2].revents & POLLIN) != 0)
            receive_request(client);
    }
    if (client.fd >= 0) drop_client(client);
    close(listen_fd);
}
#endif

}  // namespace

ControlObservation observe_player(const ControlMemory &memory) noexcept {
    ControlObservation observation;
    if (memory.load8 == nullptr || memory.load32 == nullptr) return observation;
    if (!range_contained(memory, kPlayerSlot, 1u)) return observation;
    const std::uint8_t slot = memory.load8(memory.ctx, kPlayerSlot);
    if (slot > 1u) return observation;
    const std::uint32_t ped_word = kPedTable + static_cast<std::uint32_t>(slot) * 368u;
    if (!range_contained(memory, ped_word, 4u)) return observation;
    const std::uint32_t ped = memory.load32(memory.ctx, ped_word);
    if (!range_contained(memory, ped, 1337u)) return observation;
    const std::uint8_t driving_byte = memory.load8(memory.ctx, ped + 1336u);
    std::uint32_t entity = ped;
    if (driving_byte != 0u) {
        const std::uint32_t vehicle = memory.load32(memory.ctx, ped + 1332u);
        if (!range_contained(memory, vehicle, 64u)) return observation;
        observation.driving = true;
        entity = vehicle;
    }
    if (!range_contained(memory, entity, 64u)) return observation;
    float position[3]{};
    if (!read_vec3(memory, entity + 48u, position) || !finite_position(position)) return observation;
    observation.pose_ready = true;
    observation.has_position = true;
    observation.ped = ped;
    observation.entity = entity;
    std::memcpy(observation.position, position, sizeof observation.position);
    float forward[3]{};
    if (!read_vec3(memory, entity + 32u, forward)) return observation;
    const float length_sq = forward[0] * forward[0] + forward[1] * forward[1] + forward[2] * forward[2];
    const float length = std::sqrt(length_sq);
    if (std::isfinite(length) && length >= 0.5f && length <= 1.5f) {
        observation.has_forward = true;
        std::memcpy(observation.forward, forward, sizeof observation.forward);
    }
    return observation;
}

void control_set_publisher(ControlPublisher publisher) noexcept {
    std::lock_guard lock(g_mu);
    g_pub = publisher;
}

void control_set_between_hook(void (*hook)(void *ctx), void *ctx) noexcept {
    std::lock_guard lock(g_mu);
    g_hook = hook;
    g_hook_ctx = ctx;
}

void control_set_camera_stick_probe(bool (*probe)()) noexcept {
    std::lock_guard lock(g_mu);
    g_camera_stick = probe;
}

void control_surface_clear() noexcept {
    std::lock_guard lock(g_mu);
    clear_locked();
}

void control_surface_reset() noexcept {
    std::lock_guard lock(g_mu);
    g_latch = {};
    g_snap = {};
    g_hello = false;
    g_hook = nullptr;
    g_hook_ctx = nullptr;
}

bool control_surface_enabled() noexcept { return g_enabled.load(std::memory_order_acquire); }

void control_note_sample(bool cache_hit, int mouse_dx, int mouse_dy) noexcept {
    g_sample_cache_hit = cache_hit;
    g_sample_mouse_dx = mouse_dx;
    g_sample_mouse_dy = mouse_dy;
}

void control_read_sample_note(ControlApplyContext &ctx) noexcept {
    ctx.cache_hit = g_sample_cache_hit;
    ctx.mouse_dx = g_sample_mouse_dx;
    ctx.mouse_dy = g_sample_mouse_dy;
}

void control_note_vblank(std::uint64_t vblank, bool runtime_stopped, std::string_view stop_reason,
                         bool window_closed, std::int64_t now_ms) noexcept {
    std::lock_guard lock(g_mu);
    g_snap.vblank = vblank;
    g_snap.have_liveness = true;
    g_snap.liveness_ms = now_ms;
    g_snap.running = !runtime_stopped && !window_closed;
    g_snap.window_closed = window_closed;
    copy_reason(g_snap.stop_reason, stop_reason);
}

void control_note_presented(std::uint64_t vblank, std::int64_t now_ms) noexcept {
    std::lock_guard lock(g_mu);
    g_snap.presented_vblank = vblank;
    g_snap.presented_ms = now_ms;
    g_snap.have_presented = true;
}

void control_bind_present_vblank(std::uint64_t vblank) noexcept {
    g_have_bound_present = true;
    g_bound_present = vblank;
}

bool control_bound_present_vblank(std::uint64_t &vblank) noexcept {
    if (!g_have_bound_present) return false;
    vblank = g_bound_present;
    return true;
}

ControlApplyResult control_surface_apply(const HostInputState &physical, const ControlMemory &memory,
                                         const ControlApplyContext &ctx) {
    ControlLatch copied;
    void (*hook)(void *) = nullptr;
    void *hook_ctx = nullptr;
    {
        std::lock_guard lock(g_mu);
        copied = g_latch;
        hook = g_hook;
        hook_ctx = g_hook_ctx;
        g_hook = nullptr;
        g_hook_ctx = nullptr;
    }
    if (hook != nullptr) hook(hook_ctx);

    const ControlObservation observed = observe_player(memory);
    const ApplyRow row = classify_row(copied, ctx);
    HostInputState agent_pad;
    if (row == ApplyRow::Agent) {
        agent_pad = resolve_control_request(request_from_latch(copied), observed.driving);
    }

    std::lock_guard lock(g_mu);
    ControlApplyResult result;
    if (g_latch.seq != copied.seq) {
        result.input = physical;
        result.source = source_name(SampleSource::Human);
        store_observation(ctx, observed);
        store_pad(physical, SampleSource::Human, 0u);
        return result;
    }

    if (row == ApplyRow::Expiry) {
        HostInputState neutral;
        result.input = neutral;
        result.source = source_name(SampleSource::Neutral);
        publish_axes(0, 0, false, false);
        publish_suppress();
        const std::uint64_t seq = copied.seq + 1u;
        g_latch = idle_latch(seq == 0u ? 1u : seq);
        store_observation(ctx, observed);
        store_pad(neutral, SampleSource::Neutral, 0u);
        return result;
    }
    if (row == ApplyRow::HostMenu) {
        HostInputState hidden;
        result.input = hidden;
        result.source = source_name(SampleSource::HostMenu);
        publish_axes(0, 0, false, false);
        publish_suppress();
        store_observation(ctx, observed);
        store_pad(hidden, SampleSource::HostMenu, 0u);
        return result;
    }
    if (row == ApplyRow::Agent) {
        result.input = agent_pad;
        result.source = source_name(SampleSource::Agent);
        publish_axes(agent_pad.camera_x, agent_pad.camera_y, agent_pad.accelerate, agent_pad.brake);
        publish_suppress();
        const std::uint64_t applied = copied.seq;
        if (copied.one_shot) {
            const std::uint64_t seq = copied.seq + 1u;
            g_latch = idle_latch(seq == 0u ? 1u : seq);
        } else {
            g_latch.tap_mask = 0u;
            g_latch.tap_pending = false;
        }
        store_observation(ctx, observed);
        store_pad(agent_pad, SampleSource::Agent, applied);
        return result;
    }
    if (row == ApplyRow::Handoff) {
        result.input = physical;
        result.source = source_name(SampleSource::Human);
        publish_axes(physical.camera_x, physical.camera_y, physical.accelerate, physical.brake);
        publish_suppress();
        g_latch.restore_side_channels = false;
        store_observation(ctx, observed);
        store_pad(physical, SampleSource::Human, 0u);
        return result;
    }
    result.input = physical;
    result.source = source_name(SampleSource::Human);
    if (!ctx.cache_hit) {
        publish_axes(physical.camera_x, physical.camera_y, physical.accelerate, physical.brake);
        publish_mouse(ctx.mouse_dx, ctx.mouse_dy);
    }
    store_observation(ctx, observed);
    store_pad(physical, SampleSource::Human, 0u);
    return result;
}

std::string control_handle_client_message(std::string_view bytes, std::int64_t now_ms, bool truncated) {
    if (truncated || bytes.size() > 4096u) {
        control_surface_clear();
        return error_reply({}, 0, "bad_message", {}, now_ms);
    }
    ParsedMessage message;
    if (!parse_message(bytes, message)) {
        control_surface_clear();
        return error_reply({}, 0, "bad_message", {}, now_ms);
    }
    if (message.have_version && message.version != 1) {
        control_surface_clear();
        return error_reply(message.op, message.id, "bad_version", {}, now_ms);
    }
    if (message.op == "hello") {
        if (!message.have_version || message.version != 1) {
            control_surface_clear();
            return error_reply(message.op, message.id, "bad_version", {}, now_ms);
        }
        {
            std::lock_guard lock(g_mu);
            if (!g_hello) {
                g_hello = true;
                return format_reply_locked("hello", message.id, true, nullptr, {}, false, 0, message.image,
                                           now_ms);
            }
        }
        control_surface_clear();
        return error_reply(message.op, message.id, "bad_version", {}, now_ms);
    }

    bool hello = false;
    {
        std::lock_guard lock(g_mu);
        hello = g_hello;
    }
    if (!known_op(message.op)) {
        control_surface_clear();
        return error_reply(message.op, message.id, hello ? "bad_message" : "bad_version", {}, now_ms);
    }
    if (!hello) {
        control_surface_clear();
        return error_reply(message.op, message.id, "bad_version", {}, now_ms);
    }
    if (message.op == "release") {
        control_surface_clear();
        std::lock_guard lock(g_mu);
        return format_reply_locked("release", message.id, true, nullptr, {}, false, 0, message.image, now_ms);
    }
    if (message.op == "observe" || message.op == "ping") {
        std::lock_guard lock(g_mu);
        return format_reply_locked(message.op, message.id, true, nullptr, {}, false, 0, message.image, now_ms);
    }

    std::uint32_t held = 0u;
    std::uint32_t tap = 0u;
    std::string unknown;
    if (!decode_actions(message.hold, held, unknown) || !decode_actions(message.tap, tap, unknown)) {
        control_surface_clear();
        return error_reply(message.op, message.id, "unknown_action", unknown, now_ms);
    }
    const int hold_ms = clamp_hold_ms(message);
    {
        std::lock_guard lock(g_mu);
        accept_locked(message, hold_ms, now_ms, held, tap);
        return format_reply_locked("act", message.id, true, nullptr, {}, true, hold_ms, message.image, now_ms);
    }
}

std::string control_default_socket_path() {
#if defined(_WIN32)
    return {};
#else
    if (const char *runtime_dir = std::getenv("XDG_RUNTIME_DIR");
        runtime_dir != nullptr && runtime_dir[0] == '/') {
        return std::string(runtime_dir) + "/lcs-native/control.sock";
    }
    return "/tmp/lcs-native-" + std::to_string(geteuid()) + "/control.sock";
#endif
}

bool control_surface_start(const std::string &socket_path) {
#if defined(_WIN32)
    (void)socket_path;
    std::cerr << "control surface is Linux-only\n";
    return false;
#else
    if (g_enabled.load(std::memory_order_acquire) || g_io.joinable()) {
        std::cerr << "[control] socket in use\n";
        return false;
    }
    const std::string directory = [&] {
        const std::size_t slash = socket_path.find_last_of('/');
        return slash == std::string::npos ? std::string{} : socket_path.substr(0, slash);
    }();
    if (!ensure_private_directory(directory)) return false;
    if (!reclaim_stale_socket(socket_path)) return false;

    int wake[2]{-1, -1};
    if (pipe2(wake, O_NONBLOCK | O_CLOEXEC) != 0) return control_fail("socket setup failed");
    const int listen_fd = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_NONBLOCK | SOCK_CLOEXEC, 0);
    if (listen_fd < 0) {
        close(wake[0]);
        close(wake[1]);
        return control_fail("socket setup failed");
    }
    sockaddr_un address{};
    if (!fill_un_address(address, socket_path) ||
        bind(listen_fd, reinterpret_cast<sockaddr *>(&address), sizeof address) != 0) {
        close(listen_fd);
        close(wake[0]);
        close(wake[1]);
        return control_fail("socket setup failed");
    }
    g_bound = true;
    g_bound_path = socket_path;
    auto unlink_bound = [&] {
        if (g_bound) unlink(g_bound_path.c_str());
        g_bound = false;
        g_bound_path.clear();
    };
    if (chmod(socket_path.c_str(), 0600) != 0) {
        close(listen_fd);
        close(wake[0]);
        close(wake[1]);
        unlink_bound();
        return control_fail("socket setup failed");
    }
    struct stat status;
    if (lstat(socket_path.c_str(), &status) != 0 || !S_ISSOCK(status.st_mode) || status.st_uid != geteuid() ||
        (status.st_mode & 0777) != 0600) {
        close(listen_fd);
        close(wake[0]);
        close(wake[1]);
        unlink_bound();
        return control_fail("socket setup failed");
    }
    if (listen(listen_fd, 1) != 0) {
        close(listen_fd);
        close(wake[0]);
        close(wake[1]);
        unlink_bound();
        return control_fail("socket setup failed");
    }
    control_surface_reset();
    g_wake_read = wake[0];
    g_wake_write = wake[1];
    g_io_stop.store(false, std::memory_order_release);
    try {
        g_io = std::thread(io_thread, listen_fd);
    } catch (const std::exception &) {
        close(listen_fd);
        close(wake[0]);
        close(wake[1]);
        g_wake_read = -1;
        g_wake_write = -1;
        unlink_bound();
        return control_fail("socket setup failed");
    }
    g_enabled.store(true, std::memory_order_release);
    std::cerr << "[control] listening on " << socket_path << '\n';
    return true;
#endif
}

void control_surface_stop() noexcept {
#if !defined(_WIN32)
    if (!g_io.joinable() && !g_enabled.load(std::memory_order_acquire)) return;
    g_io_stop.store(true, std::memory_order_release);
    g_enabled.store(false, std::memory_order_release);
    wake_io();
    if (g_io.joinable()) g_io.join();
    if (g_wake_read >= 0) close(g_wake_read);
    if (g_wake_write >= 0) close(g_wake_write);
    g_wake_read = -1;
    g_wake_write = -1;
    if (g_bound) unlink(g_bound_path.c_str());
    g_bound = false;
    g_bound_path.clear();
    control_surface_clear();
    {
        std::lock_guard lock(g_mu);
        g_hello = false;
    }
#endif
}

}  // namespace lcs
