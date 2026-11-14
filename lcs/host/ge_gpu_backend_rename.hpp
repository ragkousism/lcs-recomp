// Included more than once. GE_GPU_BACKEND_PREFIX selects the symbol prefix.
// GE_GPU_BACKEND_DECLARE emits declarations, GE_GPU_BACKEND_RENAME renames
// the definitions in a backend translation unit, and GE_GPU_BACKEND_RENAME_END
// clears those macros.

#ifndef GE_GPU_BACKEND_RENAME_MACROS
#define GE_GPU_BACKEND_RENAME_MACROS
#define GE_GPU_BACKEND_PREFIX_PASTE(prefix, name) GE_GPU_BACKEND_PREFIX_PASTE2(prefix, name)
#define GE_GPU_BACKEND_PREFIX_PASTE2(prefix, name) prefix##name
#define GE_GPU_BACKEND_SYMBOL(name) GE_GPU_BACKEND_PREFIX_PASTE(GE_GPU_BACKEND_PREFIX, name)
#endif

#ifdef GE_GPU_BACKEND_RENAME_END

#undef initialize_ge_gpu_backend
#undef shutdown_ge_gpu_backend
#undef ge_gpu_backend_active
#undef ge_gpu_backend_transfer_ready
#undef ge_gpu_backend_graphics_ready
#undef ge_gpu_backend_record_draw
#undef ge_gpu_backend_observe_camera
#undef ge_gpu_backend_stage_vertices
#undef ge_gpu_backend_texture_needed
#undef ge_gpu_backend_prepare_texture_keys
#undef ge_gpu_backend_texture_signature_needed
#undef ge_gpu_backend_is_framebuffer_feedback_texture
#undef ge_gpu_backend_widescreen_hud
#undef ge_gpu_backend_note_through_extent
#undef ge_gpu_backend_adopt_shared_texture
#undef ge_gpu_backend_texture_available
#undef ge_gpu_backend_upload_decoded_texture
#undef ge_gpu_backend_upload_decoded_texture_chain
#undef ge_gpu_backend_upload_decoded_texture_chain_packed
#undef ge_gpu_backend_copy_last_texture_rgba
#undef ge_gpu_backend_accumulate_color_triangles
#undef ge_gpu_backend_accumulate_hardware_triangles
#undef ge_gpu_backend_accumulate_hardware_packed_0115
#undef ge_gpu_backend_set_native_window
#undef ge_gpu_backend_set_display_framebuffer
#undef ge_gpu_backend_display_logical_size
#undef ge_gpu_backend_finish_color_frame
#undef ge_gpu_backend_copy_game_frame_rgba
#undef ge_gpu_backend_presents_directly
#undef ge_gpu_backend_owned_framebuffer
#undef ge_gpu_backend_display_framebuffer
#undef ge_gpu_backend_game_frame_rgba
#undef ge_gpu_backend_copy_offscreen_rgba
#undef ge_gpu_backend_mark_window_presented
#undef ge_gpu_backend_report
#undef GE_GPU_BACKEND_RENAME_END

#elif defined(GE_GPU_BACKEND_DECLARE)

bool GE_GPU_BACKEND_SYMBOL(initialize_ge_gpu_backend)(std::string &error);
void GE_GPU_BACKEND_SYMBOL(shutdown_ge_gpu_backend)() noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_active)() noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_transfer_ready)() noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_graphics_ready)() noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_record_draw)(const GeGpuDrawDescriptor &draw) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_observe_camera)(const std::array<float, 12> &view,
                                                         const std::array<float, 16> &projection,
                                                         const std::array<float, 6> &viewport,
                                                         const std::array<float, 3> &camera_position,
                                                         const GeGpuDrawDescriptor &draw,
                                                         std::uint32_t vertex_weight) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_stage_vertices)(const GeGpuDrawDescriptor &draw,
                                                         std::span<const GeGpuVertex> vertices) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_needed)(const GeGpuDrawDescriptor &draw) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_prepare_texture_keys)(GeGpuDrawDescriptor &draw) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_signature_needed)(const GeGpuDrawDescriptor &draw) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_is_framebuffer_feedback_texture)(const GeGpuDrawDescriptor &draw) noexcept;
GeGpuWidescreenHud GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_widescreen_hud)(const GeGpuDrawDescriptor &draw) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_note_through_extent)(const GeGpuDrawDescriptor &draw,
                                                              float max_x, float max_y) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_adopt_shared_texture)(const GeGpuDrawDescriptor &draw) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_available)(const GeGpuDrawDescriptor &draw) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture)(const GeGpuDrawDescriptor &draw,
                                                                 std::uint32_t width, std::uint32_t height,
                                                                 std::span<const std::byte> rgba8) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture_chain)(
    const GeGpuDrawDescriptor &draw, std::span<const GeGpuDecodedMipLevel> levels) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture_chain_packed)(
    const GeGpuDrawDescriptor &draw, std::uint32_t base_width, std::uint32_t base_height,
    std::uint32_t mip_levels, std::vector<std::byte> rgba8) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_last_texture_rgba)(std::span<std::byte> destination) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_color_triangles)(
    const GeGpuDrawDescriptor &draw, std::span<const GeGpuVertex> triangle_vertices) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_hardware_triangles)(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const GeGpuVertex> vertices, std::span<const std::uint32_t> triangle_indices) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_hardware_packed_0115)(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const std::byte> packed_vertices, std::uint32_t vertex_count,
    std::span<const std::uint32_t> triangle_indices) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_set_native_window)(void *native_window) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_set_display_framebuffer)(std::uint32_t address,
                                                                  std::uint32_t logical_width,
                                                                  std::uint32_t logical_height) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_display_logical_size)(std::uint32_t &width,
                                                               std::uint32_t &height) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_finish_color_frame)(std::uint64_t vblank) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_game_frame_rgba)(std::span<std::byte> destination) noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_presents_directly)() noexcept;
std::uint32_t GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_owned_framebuffer)() noexcept;
std::uint32_t GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_display_framebuffer)() noexcept;
std::span<const std::byte> GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_game_frame_rgba)() noexcept;
bool GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_offscreen_rgba)(std::span<std::byte> destination) noexcept;
void GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_mark_window_presented)() noexcept;
GeGpuBackendReport GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_report)();

#elif defined(GE_GPU_BACKEND_RENAME)

#define initialize_ge_gpu_backend GE_GPU_BACKEND_SYMBOL(initialize_ge_gpu_backend)
#define shutdown_ge_gpu_backend GE_GPU_BACKEND_SYMBOL(shutdown_ge_gpu_backend)
#define ge_gpu_backend_active GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_active)
#define ge_gpu_backend_transfer_ready GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_transfer_ready)
#define ge_gpu_backend_graphics_ready GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_graphics_ready)
#define ge_gpu_backend_record_draw GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_record_draw)
#define ge_gpu_backend_observe_camera GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_observe_camera)
#define ge_gpu_backend_stage_vertices GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_stage_vertices)
#define ge_gpu_backend_texture_needed GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_needed)
#define ge_gpu_backend_prepare_texture_keys GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_prepare_texture_keys)
#define ge_gpu_backend_texture_signature_needed GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_signature_needed)
#define ge_gpu_backend_is_framebuffer_feedback_texture GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_is_framebuffer_feedback_texture)
#define ge_gpu_backend_widescreen_hud GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_widescreen_hud)
#define ge_gpu_backend_note_through_extent GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_note_through_extent)
#define ge_gpu_backend_adopt_shared_texture GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_adopt_shared_texture)
#define ge_gpu_backend_texture_available GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_texture_available)
#define ge_gpu_backend_upload_decoded_texture GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture)
#define ge_gpu_backend_upload_decoded_texture_chain GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture_chain)
#define ge_gpu_backend_upload_decoded_texture_chain_packed GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_upload_decoded_texture_chain_packed)
#define ge_gpu_backend_copy_last_texture_rgba GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_last_texture_rgba)
#define ge_gpu_backend_accumulate_color_triangles GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_color_triangles)
#define ge_gpu_backend_accumulate_hardware_triangles GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_hardware_triangles)
#define ge_gpu_backend_accumulate_hardware_packed_0115 GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_accumulate_hardware_packed_0115)
#define ge_gpu_backend_set_native_window GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_set_native_window)
#define ge_gpu_backend_set_display_framebuffer GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_set_display_framebuffer)
#define ge_gpu_backend_display_logical_size GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_display_logical_size)
#define ge_gpu_backend_finish_color_frame GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_finish_color_frame)
#define ge_gpu_backend_copy_game_frame_rgba GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_game_frame_rgba)
#define ge_gpu_backend_presents_directly GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_presents_directly)
#define ge_gpu_backend_owned_framebuffer GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_owned_framebuffer)
#define ge_gpu_backend_display_framebuffer GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_display_framebuffer)
#define ge_gpu_backend_game_frame_rgba GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_game_frame_rgba)
#define ge_gpu_backend_copy_offscreen_rgba GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_copy_offscreen_rgba)
#define ge_gpu_backend_mark_window_presented GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_mark_window_presented)
#define ge_gpu_backend_report GE_GPU_BACKEND_SYMBOL(ge_gpu_backend_report)

#endif
