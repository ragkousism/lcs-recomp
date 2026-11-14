#include "ge_gpu_backend.hpp"

#include "lcs_render_config.hpp"

#include <iostream>
#include <utility>

namespace lcs {

#if defined(_WIN32)
#define GE_GPU_BACKEND_PREFIX ge_dx12_
#define GE_GPU_BACKEND_DECLARE
#include "ge_gpu_backend_rename.hpp"
#undef GE_GPU_BACKEND_PREFIX
#undef GE_GPU_BACKEND_DECLARE
#else
#define GE_GPU_BACKEND_PREFIX ge_vulkan_
#define GE_GPU_BACKEND_DECLARE
#include "ge_gpu_backend_rename.hpp"
#undef GE_GPU_BACKEND_PREFIX
#undef GE_GPU_BACKEND_DECLARE
#endif

#define GE_GPU_BACKEND_PREFIX ge_opengl_
#define GE_GPU_BACKEND_DECLARE
#include "ge_gpu_backend_rename.hpp"
#undef GE_GPU_BACKEND_PREFIX
#undef GE_GPU_BACKEND_DECLARE

namespace {

enum class Slot {
    Software,
    Dx12,
    Vulkan,
    OpenGL,
};

struct IdleState {
    std::uint32_t framebuffer{};
    std::uint32_t width{480u};
    std::uint32_t height{272u};
    GeGpuBackendKind requested{GeGpuBackendKind::Software};
    std::string message{"Software GE backend active"};
};

IdleState &idle_state() noexcept {
    static IdleState state;
    return state;
}

Slot &chosen_slot() noexcept {
    static Slot slot = Slot::Software;
    return slot;
}

bool &slot_locked() noexcept {
    static bool locked = false;
    return locked;
}

Slot slot_for(RenderingBackend backend) noexcept {
    switch (backend) {
    case RenderingBackend::OpenGL:
        return Slot::OpenGL;
    case RenderingBackend::Vulkan:
#if defined(_WIN32)
        return Slot::Software;
#else
        return Slot::Vulkan;
#endif
    case RenderingBackend::DirectX12:
#if defined(_WIN32)
        return Slot::Dx12;
#else
        return Slot::Vulkan;
#endif
    case RenderingBackend::Software:
        return Slot::Software;
    }
    return Slot::Software;
}

Slot active_slot() noexcept {
    if (slot_locked()) return chosen_slot();
    return slot_for(lcs_render_configuration().rendering.backend);
}

const char *slot_name(Slot slot) noexcept {
    switch (slot) {
    case Slot::Dx12: return "DirectX12";
    case Slot::Vulkan: return "Vulkan";
    case Slot::OpenGL: return "OpenGL";
    case Slot::Software: return "Software";
    }
    return "Software";
}

#if defined(_WIN32)
#define GE_GPU_DISPATCH_CALL(name, args) \
    do { \
        switch (active_slot()) { \
        case Slot::Dx12: ge_dx12_##name args; break; \
        case Slot::OpenGL: ge_opengl_##name args; break; \
        case Slot::Software: break; \
        case Slot::Vulkan: break; \
        } \
    } while (0)
#define GE_GPU_DISPATCH_RETURN(name, args, fallback) \
    do { \
        switch (active_slot()) { \
        case Slot::Dx12: return ge_dx12_##name args; \
        case Slot::OpenGL: return ge_opengl_##name args; \
        case Slot::Software: break; \
        case Slot::Vulkan: break; \
        } \
        return (fallback); \
    } while (0)
#else
#define GE_GPU_DISPATCH_CALL(name, args) \
    do { \
        switch (active_slot()) { \
        case Slot::Vulkan: ge_vulkan_##name args; break; \
        case Slot::OpenGL: ge_opengl_##name args; break; \
        case Slot::Software: break; \
        case Slot::Dx12: break; \
        } \
    } while (0)
#define GE_GPU_DISPATCH_RETURN(name, args, fallback) \
    do { \
        switch (active_slot()) { \
        case Slot::Vulkan: return ge_vulkan_##name args; \
        case Slot::OpenGL: return ge_opengl_##name args; \
        case Slot::Software: break; \
        case Slot::Dx12: break; \
        } \
        return (fallback); \
    } while (0)
#endif

}  // namespace

bool initialize_ge_gpu_backend(std::string &error) {
    const RenderingBackend backend = lcs_render_configuration().rendering.backend;
    chosen_slot() = slot_for(backend);
    slot_locked() = true;
    std::cerr << "[ge] selected " << slot_name(chosen_slot()) << "\n";
    if (chosen_slot() == Slot::Software) {
        IdleState &idle = idle_state();
        idle = {};
        idle.requested = backend == RenderingBackend::Vulkan ? GeGpuBackendKind::Vulkan
                         : backend == RenderingBackend::OpenGL ? GeGpuBackendKind::OpenGL
                         : backend == RenderingBackend::DirectX12 ? GeGpuBackendKind::DirectX12
                                                                  : GeGpuBackendKind::Software;
#if defined(_WIN32)
        if (backend == RenderingBackend::Vulkan)
            idle.message = "Vulkan GE is not in the Windows build. Use DirectX12 or OpenGL";
        else
#endif
            idle.message = "Software GE backend active";
        error.clear();
        return true;
    }
    GE_GPU_DISPATCH_RETURN(initialize_ge_gpu_backend, (error), true);
}

void shutdown_ge_gpu_backend() noexcept {
    GE_GPU_DISPATCH_CALL(shutdown_ge_gpu_backend, ());
    slot_locked() = false;
}

bool ge_gpu_backend_active() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_active, (), false);
}
bool ge_gpu_backend_transfer_ready() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_transfer_ready, (), false);
}
bool ge_gpu_backend_graphics_ready() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_graphics_ready, (), false);
}

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_record_draw, (draw));
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &view,
                                   const std::array<float, 16> &projection,
                                   const std::array<float, 6> &viewport,
                                   const std::array<float, 3> &camera_position,
                                   const GeGpuDrawDescriptor &draw,
                                   std::uint32_t vertex_weight) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_observe_camera,
                         (view, projection, viewport, camera_position, draw, vertex_weight));
}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &draw,
                                   std::span<const GeGpuVertex> vertices) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_stage_vertices, (draw, vertices), false);
}
bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_texture_needed, (draw), false);
}
void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_prepare_texture_keys, (draw));
}
bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_texture_signature_needed, (draw), false);
}
bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_is_framebuffer_feedback_texture, (draw), false);
}
GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_widescreen_hud, (draw), GeGpuWidescreenHud{});
}
void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &draw, float max_x, float max_y) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_note_through_extent, (draw, max_x, max_y));
}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_adopt_shared_texture, (draw), false);
}
bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_texture_available, (draw), false);
}
bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height, std::span<const std::byte> rgba8) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_upload_decoded_texture, (draw, width, height, rgba8), false);
}
bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &draw,
                                                 std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_upload_decoded_texture_chain, (draw, levels), false);
}
bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw,
                                                        std::uint32_t base_width, std::uint32_t base_height,
                                                        std::uint32_t mip_levels,
                                                        std::vector<std::byte> rgba8) noexcept {
    switch (active_slot()) {
#if defined(_WIN32)
    case Slot::Dx12:
        return ge_dx12_ge_gpu_backend_upload_decoded_texture_chain_packed(
            draw, base_width, base_height, mip_levels, std::move(rgba8));
#else
    case Slot::Vulkan:
        return ge_vulkan_ge_gpu_backend_upload_decoded_texture_chain_packed(
            draw, base_width, base_height, mip_levels, std::move(rgba8));
#endif
    case Slot::OpenGL:
        return ge_opengl_ge_gpu_backend_upload_decoded_texture_chain_packed(
            draw, base_width, base_height, mip_levels, std::move(rgba8));
    case Slot::Software:
        break;
#if defined(_WIN32)
    case Slot::Vulkan:
        break;
#else
    case Slot::Dx12:
        break;
#endif
    }
    return false;
}
bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte> destination) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_copy_last_texture_rgba, (destination), false);
}
void ge_gpu_backend_accumulate_color_triangles(const GeGpuDrawDescriptor &draw,
                                               std::span<const GeGpuVertex> triangle_vertices) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_accumulate_color_triangles, (draw, triangle_vertices));
}
void ge_gpu_backend_accumulate_hardware_triangles(const GeGpuDrawDescriptor &draw,
                                                  const GeGpuHardwareTransform &transform,
                                                  std::span<const GeGpuVertex> vertices,
                                                  std::span<const std::uint32_t> triangle_indices) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_accumulate_hardware_triangles,
                         (draw, transform, vertices, triangle_indices));
}
bool ge_gpu_backend_accumulate_hardware_packed_0115(const GeGpuDrawDescriptor &draw,
                                                    const GeGpuHardwareTransform &transform,
                                                    std::span<const std::byte> packed_vertices,
                                                    std::uint32_t vertex_count,
                                                    std::span<const std::uint32_t> triangle_indices) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_accumulate_hardware_packed_0115,
                           (draw, transform, packed_vertices, vertex_count, triangle_indices), false);
}

void ge_gpu_backend_set_native_window(void *native_window) noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_set_native_window, (native_window));
}

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address, std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    if (active_slot() == Slot::Software) {
        IdleState &idle = idle_state();
        idle.framebuffer = address & 0x001FFFF0u;
        idle.width = logical_width != 0u ? logical_width : 480u;
        idle.height = logical_height != 0u ? logical_height : 272u;
        return;
    }
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_set_display_framebuffer, (address, logical_width, logical_height));
}

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    if (active_slot() == Slot::Software) {
        width = idle_state().width;
        height = idle_state().height;
        return;
    }
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_display_logical_size, (width, height));
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_finish_color_frame, (vblank), false);
}
bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_copy_game_frame_rgba, (destination), false);
}
bool ge_gpu_backend_presents_directly() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_presents_directly, (), false);
}
std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_owned_framebuffer, (), 0u);
}
std::uint32_t ge_gpu_backend_display_framebuffer() noexcept {
    if (active_slot() == Slot::Software) return idle_state().framebuffer;
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_display_framebuffer, (), 0u);
}
std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_game_frame_rgba, (), std::span<const std::byte>{});
}
bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_copy_offscreen_rgba, (destination), false);
}
void ge_gpu_backend_mark_window_presented() noexcept {
    GE_GPU_DISPATCH_CALL(ge_gpu_backend_mark_window_presented, ());
}
GeGpuBackendReport ge_gpu_backend_report() {
    if (active_slot() == Slot::Software) {
        const IdleState &idle = idle_state();
        GeGpuBackendReport report{};
        report.requested = idle.requested;
        report.active = GeGpuBackendKind::Software;
        report.message = idle.message;
        return report;
    }
    GE_GPU_DISPATCH_RETURN(ge_gpu_backend_report, (), GeGpuBackendReport{});
}

}  // namespace lcs
