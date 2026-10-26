#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/runtime.hpp"
#include "lcs_profile.hpp"
#include "display_window.hpp"
#include "lcs_audio_output.hpp"
#include "ge_gpu_backend.hpp"
#include "ge_renderer.hpp"
#include "lcs_render_config.hpp"
#include "lcs_control.hpp"
#include "lcs_controls.hpp"

#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <limits>

#ifndef LCS_NO_GENERATED
namespace psprecomp {
void register_generated_functions(Runtime &runtime);
} // namespace psprecomp
#endif

int main(int argc, char **argv) {
    std::filesystem::path elf_path = "game/EBOOT.ELF";
    std::filesystem::path game_root = "game";
    std::uint64_t max_dispatches = std::numeric_limits<std::uint64_t>::max();
    double max_seconds = 0.0;
    enum class ControlMode { Absent, Off, On };
    ControlMode control_mode = ControlMode::Absent;
    std::string control_cli_path;
    bool control_cli = false;
    for (int i = 1; i < argc; ++i) {
        const std::string_view arg = argv[i];
        if (arg == "--game" && i + 1 < argc) {
            game_root = argv[++i];
            elf_path = game_root / "EBOOT.ELF";
        } else if (arg == "--elf" && i + 1 < argc) {
            elf_path = argv[++i];
        } else if ((arg == "--max-dispatches" || arg == "--dispatch-cap") && i + 1 < argc) {
            max_dispatches = std::strtoull(argv[++i], nullptr, 0);
        } else if (arg == "--max-seconds" && i + 1 < argc) {
            max_seconds = std::strtod(argv[++i], nullptr);
        } else if (arg == "--control") {
            control_cli = true;
            if (i + 1 < argc) {
                const std::string_view next = argv[i + 1];
                if (!next.empty() && next.front() != '-') {
                    ++i;
                    if (next == "off") control_mode = ControlMode::Off;
                    else {
                        control_mode = ControlMode::On;
                        control_cli_path = std::string(next);
                    }
                    continue;
                }
            }
            control_mode = ControlMode::On;
        } else {
            std::cerr << "Ignoring unrecognised argument \"" << arg << "\"\n";
        }
    }

#if defined(_WIN32)
    if (control_cli) {
        std::cerr << "control surface is Linux-only\n";
        return 2;
    }
#else
    (void)control_cli;
    if (!control_cli_path.empty() && !std::filesystem::path(control_cli_path).is_absolute()) {
        std::cerr << "[control] socket path must be absolute\n";
        return 2;
    }
#endif

    bool control_started = false;
    try {
        std::error_code executable_error;
        const std::filesystem::path executable_directory =
            argc > 0 ? std::filesystem::absolute(argv[0], executable_error).parent_path()
                     : std::filesystem::current_path();
        lcs::initialize_lcs_render_configuration(executable_directory);

        auto elf = psprecomp::Elf32Image::from_file(elf_path);

        psprecomp::Runtime runtime;
        runtime.set_game_root(game_root);

        const auto stats = elf.load_and_relocate(runtime.memory(), psprecomp::kDefaultPspUserLoadBase);
        std::cout << "Loaded " << elf_path.string() << " (" << stats.total << " relocations applied)\n" << std::flush;

#ifndef LCS_NO_GENERATED
        psprecomp::register_generated_functions(runtime);
#endif
        std::cout << "Registered " << runtime.function_count() << " generated functions\n" << std::flush;


        // User memory arena starts right after the ELF image.
        std::uint64_t image_end = 0u;
        for (std::size_t index = 0; index < elf.segments().size(); ++index) {
            const auto &segment = elf.segments()[index];
            if (segment.type != 1u) continue;  // PT_LOAD
            const std::uint64_t start = elf.segment_runtime_address(index, psprecomp::kDefaultPspUserLoadBase);
            image_end = std::max(image_end, start + segment.memory_size);
        }
        const std::uint32_t user_arena_start =
            static_cast<std::uint32_t>((image_end + 0xFFu) & ~0xFFull);
        lcs::display_window_init();
        lcs::install_profile(runtime, user_arena_start);

        std::string gpu_backend_error;
        if (!lcs::initialize_ge_gpu_backend(gpu_backend_error))
            std::cerr << "[ge] GPU backend unavailable: " << gpu_backend_error << "\n";
        lcs::display_window_attach_gpu_backend();
        lcs::set_wall_clock_limit(max_seconds);

        if (const auto module = elf.find_module_info(runtime.memory(), psprecomp::kDefaultPspUserLoadBase)) {
            runtime.cpu().set_gpr(28, module->gp);
        } else {
            throw psprecomp::Error("PSP module info not found after relocation");
        }
        runtime.cpu().set_gpr(31, 0u);
        runtime.cpu().set_gpr(4, 0u);
        runtime.cpu().set_gpr(5, 0u);

        const std::uint32_t entry = elf.runtime_entry(psprecomp::kDefaultPspUserLoadBase);
        std::cout << "Running from entry " << psprecomp::hex32(entry) << "\n" << std::flush;

#if !defined(_WIN32)
        bool start_control = false;
        std::string control_path;
        if (control_mode == ControlMode::On) {
            start_control = true;
            control_path = control_cli_path.empty() ? lcs::control_default_socket_path() : control_cli_path;
        } else if (control_mode == ControlMode::Absent &&
                   lcs::lcs_render_configuration().control.enabled) {
            start_control = true;
            const std::string &configured = lcs::lcs_render_configuration().control.socket;
            control_path = configured.empty() ? lcs::control_default_socket_path() : configured;
        }
        if (start_control) {
            lcs::lcs_control_use_host_publishers();
            if (!lcs::control_surface_start(control_path)) return 2;
            control_started = true;
            std::cerr << "[control] not isolating saves under " << game_root.string() << '\n';
        }
#endif

        runtime.run(entry, max_dispatches);
        if (control_started) {
            lcs::control_surface_stop();
            control_started = false;
        }
        lcs::ge_worker_shutdown();

        if (runtime.stopped()) {
            std::cout << "Runtime stopped: " << runtime.stop_reason() << "\n";
        }
        lcs::audio_output_shutdown();
    } catch (const std::exception &ex) {
        if (control_started) lcs::control_surface_stop();
        std::cerr << "LCSNative error: " << ex.what() << "\n";
        return 1;
    }
    return 0;
}
