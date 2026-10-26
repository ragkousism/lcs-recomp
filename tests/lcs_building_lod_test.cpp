#include "lcs_render_config.hpp"

#include <cstdint>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

namespace {

int fail(const char *message) {
    std::cerr << "FAIL " << message << '\n';
    return 1;
}

bool same(float got, float want) {
    return std::isfinite(got) && got == want;
}

// Both guest loads of 300 must call the scan transform on that register.
bool guest_scan_uses_transform(const std::string &source) {
    const std::string needle = "(17302u << 16u)";
    int sites = 0;
    for (std::size_t pos = 0; (pos = source.find(needle, pos)) != std::string::npos; pos += needle.size()) {
        const std::string window = source.substr(pos, 320);
        const auto assigned = window.find("std::bit_cast<float>(ctx.gpr[5])");
        const auto call = window.find("lcs::building_hd_scan_distance(");
        if (assigned == std::string::npos || call == std::string::npos || call < assigned)
            return false;
        const auto reg = window.find("ctx.fpr[", assigned);
        if (reg == std::string::npos || reg > call) return false;
        const auto end = window.find(']', reg);
        if (end == std::string::npos) return false;
        const std::string fpr = window.substr(reg, end - reg + 1);
        if (window.find(fpr, call) == std::string::npos) return false;
        ++sites;
    }
    if (sites != 2) return false;
    if (source.find("lcs::building_lod_distance(") == std::string::npos) return false;
    int calls = 0;
    const std::string name = "lcs::building_hd_scan_distance(";
    for (std::size_t pos = 0; (pos = source.find(name, pos)) != std::string::npos; pos += name.size())
        ++calls;
    return calls == 2;
}

// The near hide sits on the sqrt distance, before the 330 cutoff, and does not
// store the spawn/removal multiplier at camera offset 228.
bool guest_near_hide_uses_transform(const std::string &source) {
    const auto label = source.find("L_08AACF60:");
    if (label == std::string::npos) return false;
    const auto cutoff = source.find("lcs::building_lod_distance(", label);
    if (cutoff == std::string::npos) return false;
    const std::string window = source.substr(label, cutoff - label);
    const auto dist = window.find("ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);");
    const auto call = window.find("lcs::building_lod_hidden(ctx.fpr[20],");
    if (dist == std::string::npos || call == std::string::npos || call < dist) return false;
    if (window.find("static_cast<std::uint32_t>(48)") == std::string::npos) return false;
    if (window.find("static_cast<std::uint32_t>(224)") == std::string::npos) return false;
    if (window.find("& 16u") == std::string::npos) return false;
    if (window.find("static_cast<std::uint32_t>(228)") != std::string::npos) return false;
    if (window.find("aot_store32") != std::string::npos) return false;
    if (window.find("lcs::building_lod_detail_ready(") == std::string::npos) return false;
    const auto first = source.find("lcs::building_lod_hidden(");
    const auto second = source.find("lcs::building_lod_hidden(", first + 1);
    const auto third = second == std::string::npos ? second : source.find("lcs::building_lod_hidden(", second + 1);
    if (first == std::string::npos || second == std::string::npos || third != std::string::npos) return false;
    if (second != call + label) return false;
    const auto list = source.find("L_08AAC870:");
    const auto listed = source.find("0x089508BCu", list);
    if (list == std::string::npos || listed == std::string::npos || first < list || first > listed) return false;
    return source.find("ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));") != std::string::npos;
}

std::string read_text(const std::string &relative) {
    const std::string here = __FILE__;
    const auto slash = here.find_last_of("/\\");
    const std::string dir = slash == std::string::npos ? std::string{} : here.substr(0, slash);
    std::ifstream in(dir + "/" + relative);
    if (!in) return {};
    return std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
}

// The 12 MiB reserve stays the game's immediate. Raising it shrinks the main heap.
bool guest_reserve_unchanged(const std::string &source) {
    const auto label = source.find("L_08AA4C0C:");
    const auto next = source.find("L_08AA4C14:", label);
    if (label == std::string::npos || next == std::string::npos) return false;
    const std::string window = source.substr(label, next - label);
    if (window.find("ctx.gpr[4] = (192u << 16u);") == std::string::npos) return false;
    if (window.find("static_cast<std::uint32_t>(25900)") == std::string::npos) return false;
    return window.find("lcs::") == std::string::npos;
}

// One size is stored, passed to CreateFpl, and passed to the heap initializer.
bool streaming_size_is_shared(const std::string &source) {
    const auto sized = source.find("L_08A0B8C8:");
    const auto create = source.find("L_08A0B8F0:", sized);
    const auto init = source.find("L_08A0B92C:", create);
    if (sized == std::string::npos || create == std::string::npos || init == std::string::npos)
        return false;
    const std::string pad = source.substr(sized, create - sized);
    if (pad.find("ctx.gpr[5] = (8u << 16u);") == std::string::npos) return false;
    if (pad.find("ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);") == std::string::npos) return false;
    const std::string block = source.substr(create, init - create);
    if (block.find("static_cast<std::uint32_t>(40), ctx.gpr[5])") == std::string::npos) return false;
    if (block.find("ctx.gpr[7] = (ctx.gpr[5] | 0u);") == std::string::npos) return false;
    const std::string heap = source.substr(init, 700);
    return heap.find("static_cast<std::uint32_t>(40))") != std::string::npos &&
           heap.find("0x08AA32FCu") != std::string::npos;
}

// 32 MiB still ends at 0x0A000000. The ceiling follows the constructed map.
bool profile_stack_follows_map(const std::string &source) {
    if (source.find("module_thread.stack_top = 0x0A000000u") != std::string::npos) return false;
    return source.find("psprecomp::GuestMemory::kPhysicalBase + runtime.memory().size()") != std::string::npos;
}

// Same split the HLE uses: max free is the gap from the arena bump to the stack.
std::uint32_t max_free_for_ram(std::uint32_t ram_bytes, std::uint32_t arena) {
    constexpr std::uint32_t kPhysical = 0x08000000u;
    constexpr std::uint32_t kModuleStack = 0x10000u;
    const std::uint32_t high = (kPhysical + ram_bytes - kModuleStack) & ~0xFFu;
    const std::uint32_t low = (arena + 0xFFu) & ~0xFFu;
    return high > low ? high - low : 0u;
}

int building_lod() {
    using namespace lcs;
    const std::string guest = read_text("../lcs/generated/generated_unit_0170.cpp");
    if (guest.empty()) return fail("guest scan file");
    if (!guest_scan_uses_transform(guest)) return fail("guest scan still uses raw 300");
    if (!guest_near_hide_uses_transform(guest)) return fail("guest near hide");
    const std::string heap = read_text("../lcs/generated/generated_unit_0168.cpp");
    if (heap.empty() || !guest_reserve_unchanged(heap)) return fail("guest reserve store");
    const std::string profile = read_text("../lcs/host/lcs_profile.cpp");
    if (profile.empty() || !profile_stack_follows_map(profile)) return fail("stack ceiling");
    const std::string streaming = read_text("../lcs/generated/generated_unit_0129.cpp");
    if (streaming.empty() || !streaming_size_is_shared(streaming)) return fail("streaming size");
    const std::string main_source = read_text("../lcs/host/main.cpp");
    if (main_source.find("Runtime runtime(lcs::guest_ram_bytes())") == std::string::npos)
        return fail("runtime ram size");

    const float scales[]{1.0f, 2.0f, 4.0f};
    for (const float scale : scales) {
        lcs_set_view_distance(scale);
        if (view_distance_scale() != scale) return fail("view distance scale");
        const float scan = building_hd_scan_distance(300.0f);
        if (!same(scan, 300.0f * scale)) return fail("building scan distance");
        // Included at the limit, excluded just past it.
        if (scan < 300.0f * scale) return fail("scan short of limit");
        if (300.0f * scale + 1.0f <= scan) return fail("scan past limit");
        // Close-range model lod. GetAtomicFromDistance compares the raw camera
        // distance with model_lod * TheCamera+224, and +224 already includes
        // this scale, so the high-detail range is the same helper.
        const float model = building_lod_distance(100.0f);
        if (!same(model, 100.0f * scale)) return fail("close model range");
        if (!(model <= scan)) return fail("close range outside scan");
        if (!same(building_lod_distance(330.0f), 330.0f * scale)) return fail("building cutoff");
    }

    lcs_set_view_distance(1.0f);
    if (600.0f <= building_hd_scan_distance(300.0f)) return fail("scale 1 reaches 600");
    lcs_set_view_distance(2.0f);
    if (!(600.0f <= building_hd_scan_distance(300.0f))) return fail("scale 2 misses 600");
    if (1200.0f <= building_hd_scan_distance(300.0f)) return fail("scale 2 reaches 1200");
    lcs_set_view_distance(4.0f);
    if (!(1200.0f <= building_hd_scan_distance(300.0f))) return fail("scale 4 misses 1200");
    if (1200.0f + 1.0f <= building_hd_scan_distance(300.0f)) return fail("scale 4 past 1200");

    // Disappearing distance is lod[2] times the passed multiplier. ViewDistance
    // is already inside that multiplier, so scale 4 must not move a multiplier of 1.
    lcs_set_view_distance(4.0f);
    if (!building_lod_hidden(99.0f, 100.0f, 1.0f)) return fail("hide 99 at multiplier 1");
    if (building_lod_hidden(100.0f, 100.0f, 1.0f)) return fail("near hide scales twice");
    if (building_lod_hidden(200.0f, 100.0f, 1.0f)) return fail("near hide scales twice");
    lcs_set_view_distance(1.0f);
    if (!building_lod_hidden(99.0f, 100.0f, 1.0f)) return fail("hide 99");
    if (building_lod_hidden(100.0f, 100.0f, 1.0f)) return fail("keep 100");
    if (!building_lod_hidden(399.0f, 100.0f, 4.0f)) return fail("hide 399");
    if (building_lod_hidden(400.0f, 100.0f, 4.0f)) return fail("keep 400");
    if (!building_lod_hidden(299.0f, 400.0f, 1.0f)) return fail("cap hides 299");
    if (building_lod_hidden(300.0f, 400.0f, 1.0f)) return fail("cap keeps 300");
    if (!building_lod_hidden(1199.0f, 400.0f, 4.0f)) return fail("cap hides 1199");
    if (building_lod_hidden(1200.0f, 400.0f, 4.0f)) return fail("cap keeps 1200");
    if (!building_lod_detail_ready(0u, 0u, 0u)) return fail("missing detail stays");
    if (building_lod_detail_ready(1u, 0u, 255u)) return fail("unloaded detail hides");
    if (building_lod_detail_ready(1u, 1u, 128u)) return fail("fading detail hides");
    if (!building_lod_detail_ready(1u, 1u, 255u)) return fail("ready detail stays");

    // StreamingHeap sizes itself from sceKernelMaxFreeMemSize. The 32 MiB map's
    // free gap is under 22 MiB, so the 12 MiB reserve is not stored. A 64 MiB
    // map moves that gap up by 32 MiB and the existing size path takes it.
    constexpr std::uint32_t kRam32 = 32u * 1024u * 1024u;
    constexpr std::uint32_t kRam64 = 64u * 1024u * 1024u;
    constexpr std::uint32_t kReserveGate = 0x01600000u;
    constexpr std::uint32_t kOriginalReserve = 0x00C00000u;
    constexpr std::uint32_t kStreamPad = 0x00080000u;
    constexpr std::uint32_t kArena = 0x08E65400u;
    lcs_set_view_distance(1.0f);
    if (guest_ram_bytes() != kRam32) return fail("scale 1 ram");
    lcs_set_view_distance(2.0f);
    if (guest_ram_bytes() != kRam64) return fail("scale 2 ram");
    lcs_set_view_distance(4.0f);
    if (guest_ram_bytes() != kRam64) return fail("scale 4 ram");

    const std::uint32_t free32 = max_free_for_ram(kRam32, kArena);
    const std::uint32_t free64 = max_free_for_ram(kRam64, kArena);
    if (free32 > kReserveGate) return fail("scale 1 would change reserve");
    if (free64 <= kReserveGate) return fail("scale 4 misses reserve branch");
    if (free64 - free32 != kRam64 - kRam32) return fail("free delta");
    if (free32 < 0x00800000u || free64 < 0x00800000u) return fail("streaming pad branch");

    // Streaming init runs on the free gap and keeps a 512 KiB pad. The main
    // heap then gets that pad, same size on both maps.
    const std::uint32_t stream32 = free32 - kStreamPad;
    const std::uint32_t stream64 = free64 - kStreamPad;
    if (stream64 != stream32 + (kRam64 - kRam32)) return fail("streaming block delta");
    if (free32 - stream32 != free64 - stream64) return fail("main leftover changed");
    const std::uint32_t low = (kArena + 0xFFu) & ~0xFFu;
    const std::uint32_t stack64 = (0x08000000u + kRam64 - 0x10000u) & ~0xFFu;
    if (low + stream64 > stack64) return fail("streaming past stack");
    if (low + stream64 > 0x08000000u + kRam64) return fail("streaming past ram");
    const std::uint32_t stack32 = (0x08000000u + kRam32 - 0x10000u) & ~0xFFu;
    if (low + stream32 > stack32) return fail("scale 1 streaming past stack");

    // If the main heap were first, 64 MiB crosses 22 MiB and the game's own
    // 12 MiB reserve applies. That heap must not shrink below the 32 MiB size.
    const std::uint32_t main32 = free32;
    const std::uint32_t main64 = free64 - kOriginalReserve;
    if (main64 < main32) return fail("main heap shrank");
    if (kOriginalReserve < 0x00800000u) return fail("reserve pad");
    const std::uint32_t stream_after_main = kOriginalReserve - kStreamPad;
    if (low + main64 + stream_after_main > stack64) return fail("reserve path past stack");

    lcs_set_view_distance(1.0f);
    std::cout << "building_lod pass scan 300/600/1200 at 1,2,4 near-hide 100/400 stream +32 MiB\n";
    return 0;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    if (mode == "building-lod") return building_lod();
    return 2;
}
