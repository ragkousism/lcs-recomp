#include "lcs_render_config.hpp"

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
    if (source.find("lcs::building_lod_hidden(") != call + label) return false;
    const auto again = source.find("lcs::building_lod_hidden(", call + label + 1);
    if (again != std::string::npos) return false;
    return source.find("ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));") != std::string::npos;
}

std::string read_guest() {
    const std::string here = __FILE__;
    const auto slash = here.find_last_of("/\\");
    const std::string dir = slash == std::string::npos ? std::string{} : here.substr(0, slash);
    const std::string path = dir + "/../lcs/generated/generated_unit_0170.cpp";
    std::ifstream in(path);
    if (!in) return {};
    return std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
}

int building_lod() {
    using namespace lcs;
    const std::string guest = read_guest();
    if (guest.empty()) return fail("guest scan file");
    if (!guest_scan_uses_transform(guest)) return fail("guest scan still uses raw 300");
    if (!guest_near_hide_uses_transform(guest)) return fail("guest near hide");

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

    lcs_set_view_distance(1.0f);
    std::cout << "building_lod pass scan 300/600/1200 at 1,2,4 near-hide 100/400\n";
    return 0;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    if (mode == "building-lod") return building_lod();
    return 2;
}
