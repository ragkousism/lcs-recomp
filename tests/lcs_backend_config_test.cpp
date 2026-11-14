#include "lcs_render_config.hpp"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

namespace {

int fail(const std::string &message) {
    std::cerr << "FAIL " << message << '\n';
    return 1;
}

bool write_ini(const std::filesystem::path &path, const char *backend) {
    std::ofstream output(path);
    if (!output) return false;
    output << "[Rendering]\nBackend=" << backend << "\n";
    return static_cast<bool>(output);
}

bool set_env(const char *name, const char *value) {
#if defined(_WIN32)
    return _putenv_s(name, value) == 0;
#else
    if (value == nullptr || *value == '\0') return unsetenv(name) == 0;
    return setenv(name, value, 1) == 0;
#endif
}

int expect_loaded(const lcs::LcsConfiguration &loaded, const char *label,
                  lcs::RenderingBackend expected) {
    if (!loaded.loaded_from_file) return fail(std::string(label) + " ini was not loaded");
    if (loaded.rendering.backend != expected) {
        return fail(std::string(label) + " parsed as " +
                    lcs::rendering_backend_name(loaded.rendering.backend));
    }
    std::cout << "parse " << label << " -> "
              << lcs::rendering_backend_name(loaded.rendering.backend) << '\n';
    return 0;
}

int expect_active(const char *label, lcs::RenderingBackend expected) {
    const lcs::RenderingBackend actual = lcs::lcs_render_configuration().rendering.backend;
    if (actual != expected) {
        return fail(std::string(label) + " selected " + lcs::rendering_backend_name(actual));
    }
    std::cout << label << " -> " << lcs::rendering_backend_name(actual) << '\n';
    return 0;
}

}  // namespace

int main() {
    const std::filesystem::path directory =
        std::filesystem::temp_directory_path() / "lcs-backend-config-test";
    std::filesystem::create_directories(directory);
    const std::filesystem::path ini = directory / "LCSNative.ini";

    const struct {
        const char *text;
        lcs::RenderingBackend expected;
    } parsed[] = {
        {"DirectX12", lcs::RenderingBackend::DirectX12},
        {"Vulkan", lcs::RenderingBackend::Vulkan},
        {"OpenGL", lcs::RenderingBackend::OpenGL},
    };
    for (const auto &item : parsed) {
        if (!write_ini(ini, item.text)) return fail("write ini");
        const int status = expect_loaded(lcs::load_lcs_render_configuration(ini), item.text,
                                          item.expected);
        if (status != 0) return status;
    }

    if (!write_ini(ini, "DirectX12")) return fail("write startup ini");
    if (!set_env("PSPRECOMP_CONFIG", ini.string().c_str())) return fail("set PSPRECOMP_CONFIG");
    if (!set_env("LCS_GE_BACKEND", "")) return fail("clear LCS_GE_BACKEND");
    lcs::initialize_lcs_render_configuration(directory);
    if (const int status = expect_active("startup ini DirectX12", lcs::RenderingBackend::DirectX12))
        return status;

    if (!set_env("LCS_GE_BACKEND", "opengl")) return fail("set opengl override");
    lcs::initialize_lcs_render_configuration(directory);
    if (const int status =
            expect_active("LCS_GE_BACKEND=opengl overrides DirectX12", lcs::RenderingBackend::OpenGL))
        return status;

    if (!set_env("LCS_GE_BACKEND", "vulkan")) return fail("set vulkan override");
    lcs::initialize_lcs_render_configuration(directory);
    if (const int status =
            expect_active("LCS_GE_BACKEND=vulkan overrides DirectX12", lcs::RenderingBackend::Vulkan))
        return status;

    if (!write_ini(ini, "OpenGL")) return fail("write opengl ini");
    if (!set_env("LCS_GE_BACKEND", "directx12")) return fail("set directx12 override");
    lcs::initialize_lcs_render_configuration(directory);
    if (const int status = expect_active("LCS_GE_BACKEND=directx12 overrides OpenGL",
                                         lcs::RenderingBackend::DirectX12))
        return status;

    std::cout << "backend config passed\n";
    return 0;
}
