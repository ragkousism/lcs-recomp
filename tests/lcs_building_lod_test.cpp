#include "lcs_render_config.hpp"

#include <cmath>
#include <iostream>
#include <string>

namespace {

int fail(const char *message) {
    std::cerr << "FAIL " << message << '\n';
    return 1;
}

bool same(float got, float want) {
    return std::isfinite(got) && got == want;
}

int building_lod() {
    using namespace lcs;
    const float originals[]{330.0f, 300.0f, 100.0f};
    const float scales[]{1.0f, 2.0f, 4.0f};
    for (const float scale : scales) {
        lcs_set_view_distance(scale);
        if (view_distance_scale() != scale) return fail("view distance scale");
        for (const float original : originals) {
            const float got = building_lod_distance(original);
            if (!same(got, original * scale)) return fail("building lod distance");
        }
    }
    lcs_set_view_distance(1.0f);
    std::cout << "building_lod pass 330/300/100 at 1,2,4\n";
    return 0;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    if (mode == "building-lod") return building_lod();
    return 2;
}
