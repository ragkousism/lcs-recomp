#include "ge_gpu_backend.hpp"

#if defined(LCS_OPENGL_GE_BACKEND)

#include "lcs_render_config.hpp"
#include "lcs_runtime_log.hpp"
#include "opengl/ge_shaders.hpp"
#include "opengl/gl_core.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#else
#include <SDL.h>
#endif

namespace lcs {
namespace {

constexpr std::uint32_t kReferenceWidth = 480u;
constexpr std::uint32_t kReferenceHeight = 272u;
constexpr std::size_t kGeometryUploadCapacity = 64u * 1024u * 1024u;
constexpr GLenum kRgba = 0x1908u;
constexpr GLenum kSrcAlpha = 0x0302u;
constexpr GLenum kOneMinusSrcAlpha = 0x0303u;
constexpr GLenum kConstantColor = 0x8001u;
constexpr GLenum kPackAlignment = 0x0D05u;
constexpr GLenum kUnpackAlignment = 0x0CF5u;
constexpr GLenum kTextureMaxLevel = 0x813Du;
constexpr GLenum kTextureMinLod = 0x813Au;
constexpr GLenum kTextureMaxLod = 0x813Bu;
constexpr GLenum kTextureLodBias = 0x8501u;
constexpr GLenum kMaxAnisotropy = 0x84FFu;
constexpr GLenum kTextureAnisotropy = 0x84FEu;
constexpr GLenum kNearestMipNearest = 0x2700u;
constexpr GLenum kLinearMipNearest = 0x2701u;
constexpr GLenum kNearestMipLinear = 0x2702u;
constexpr GLenum kLinearMipLinear = 0x2703u;
constexpr GLenum kBack = 0x0405u;
constexpr GLenum kCw = 0x0900u;
constexpr GLenum kCcw = 0x0901u;
constexpr GLenum kReadFramebuffer = 0x8CA8u;
constexpr GLenum kDrawFramebuffer = 0x8CA9u;

struct UploadVertex {
    float x{};
    float y{};
    float z{};
    float w{1.0f};
    std::uint32_t rgba{0xFFFFFFFFu};
    float u{};
    float v{};
    float fog_factor{1.0f};
    float q{1.0f};
};
static_assert(sizeof(UploadVertex) == 36u);

struct DrawUniforms {
    float row0[4]{};
    float row1[4]{};
    float row2[4]{};
    float row3[4]{};
    float view_z[4]{};
    float uv[4]{1.0f, 1.0f, 0.0f, 0.0f};
    float fog[4]{};
    std::uint32_t control[4]{};
    float color_mul[4]{1.0f, 1.0f, 1.0f, 1.0f};
    float color_add[4]{};
    std::uint32_t pixel0[4]{};
    std::uint32_t pixel1[4]{};
};
static_assert(sizeof(DrawUniforms) == 192u);
static_assert(offsetof(DrawUniforms, control) == 112u);
static_assert(offsetof(DrawUniforms, pixel0) == 160u);

#pragma pack(push, 1)
struct Packed0115 {
    std::uint8_t u{};
    std::uint8_t v{};
    std::uint16_t color{};
    std::int16_t x{};
    std::int16_t y{};
    std::int16_t z{};
};
#pragma pack(pop)
static_assert(sizeof(Packed0115) == 10u);

struct Batch {
    GeGpuDrawDescriptor draw{};
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    std::uint32_t first_index{};
    std::uint32_t index_count{};
    bool indexed{};
    std::uint32_t logical_draw_count{1u};
    bool hardware_transform{};
    GeGpuHardwareTransform transform{};
    bool framebuffer_feedback{};
    std::uint32_t feedback_address{};
};

struct GpuImage {
    GLuint texture{};
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t mips{1u};
};

struct Target {
    std::uint32_t address{};
    std::uint32_t logical_width{kReferenceWidth};
    std::uint32_t logical_height{kReferenceHeight};
    GpuImage color{};
    GpuImage snapshot{};
    GLuint fbo{};
    GLuint depth{};
    std::uint64_t last_render_epoch{};
    bool created{};
};

struct Texture {
    GeGpuDrawDescriptor descriptor{};
    GpuImage gpu{};
    std::vector<std::byte> rgba8;
    std::uint32_t mip_levels{1u};
    bool dirty{};
    std::uint64_t signature_epoch{};
    std::uint64_t last_used_epoch{};
};

struct GLState {
    std::recursive_mutex mutex;
    GeGpuBackendReport report{};
    bool enabled{};
    bool context_ready{};
    std::thread::id context_thread{};
#if defined(_WIN32)
    HWND hidden_window{};
    HDC hidden_dc{};
    HGLRC context{};
#else
    SDL_Window *hidden_window{};
    SDL_GLContext context{};
#endif
    GLuint ge_program{};
    GLint present_tex_loc{-1};
    GLuint vao{};
    GLuint vbo{};
    GLuint ibo{};
    GLuint ubo{};
    GLuint white{};
    float max_anisotropy{1.0f};
    std::unordered_map<std::uint64_t, GLuint> samplers;
    std::unordered_map<std::uint64_t, Texture> textures;
    std::unordered_map<std::uint32_t, Target> targets;
    std::vector<UploadVertex> vertices;
    std::vector<std::uint32_t> indices;
    std::vector<Batch> batches;
    std::vector<std::byte> frame_rgba;
    std::vector<std::byte> readback_raw;
    std::vector<std::byte> last_texture_rgba;
    std::vector<GLuint> retired_textures;
    GLuint present_fbo{};
    GLuint present_color{};
    std::uint32_t present_width{};
    std::uint32_t present_height{};
    std::uint32_t readback_width{};
    std::uint32_t readback_height{};
    std::uint32_t target_width{kReferenceWidth};
    std::uint32_t target_height{kReferenceHeight};
    std::uint32_t display_framebuffer{};
    std::uint32_t display_logical_width{kReferenceWidth};
    std::uint32_t display_logical_height{kReferenceHeight};
    std::uint64_t frame_epoch{1u};
    std::string version;
    Target *current_target{};
};

GLState &state() {
    static GLState s;
    return s;
}

std::uint64_t hash_mix(std::uint64_t hash, std::uint64_t value) noexcept {
    hash ^= value + 0x9E3779B97F4A7C15ull + (hash << 6u) + (hash >> 2u);
    return hash;
}

std::uint64_t texture_key(const GeGpuDrawDescriptor &draw) noexcept {
    if (draw.texture_cache_key_hint != 0u) return draw.texture_cache_key_hint;
    std::uint64_t key = 0xCBF29CE484222325ull;
    const std::uint32_t levels = draw.texture_level_addresses[0] != 0u && draw.texture_mipmap_enabled
        ? std::min<std::uint32_t>(8u, draw.texture_max_level + 1u) : 1u;
    key = hash_mix(key, levels);
    for (std::uint32_t level = 0u; level < levels; ++level) {
        key = hash_mix(key, draw.texture_level_addresses[level] != 0u
            ? draw.texture_level_addresses[level] : draw.texture_address);
        key = hash_mix(key, draw.texture_level_buffer_widths[level] != 0u
            ? draw.texture_level_buffer_widths[level] : draw.texture_buffer_width);
        key = hash_mix(key, draw.texture_level_widths[level] != 0u
            ? draw.texture_level_widths[level] : draw.texture_width);
        key = hash_mix(key, draw.texture_level_heights[level] != 0u
            ? draw.texture_level_heights[level] : draw.texture_height);
    }
    key = hash_mix(key, draw.texture_format);
    key = hash_mix(key, draw.clut_address);
    key = hash_mix(key, draw.clut_format);
    key = hash_mix(key, draw.clut_shift);
    key = hash_mix(key, draw.clut_mask);
    key = hash_mix(key, draw.clut_start);
    key = hash_mix(key, draw.clut_checksum);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_swizzled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_min_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mag_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_enabled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_linear));
    key = hash_mix(key, draw.texture_max_level);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_u));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_v));
    return key;
}

void release_context(GLState &s) noexcept {
#if defined(_WIN32)
    wglMakeCurrent(nullptr, nullptr);
#else
    if (s.hidden_window != nullptr) SDL_GL_MakeCurrent(s.hidden_window, nullptr);
#endif
    s.context_thread = {};
}

bool make_current(GLState &s) noexcept {
    if (s.context_thread == std::this_thread::get_id()) return s.context_ready;
#if defined(_WIN32)
    if (s.hidden_dc == nullptr || s.context == nullptr) return false;
    if (!wglMakeCurrent(s.hidden_dc, s.context)) return false;
#else
    if (s.hidden_window == nullptr || s.context == nullptr) return false;
    if (SDL_GL_MakeCurrent(s.hidden_window, s.context) != 0) return false;
#endif
    s.context_thread = std::this_thread::get_id();
    return true;
}

void *gl_get_proc(const char *name) {
#if defined(_WIN32)
    void *proc = reinterpret_cast<void *>(wglGetProcAddress(name));
    if (proc == nullptr || proc == reinterpret_cast<void *>(1) || proc == reinterpret_cast<void *>(2) ||
        proc == reinterpret_cast<void *>(3) || proc == reinterpret_cast<void *>(static_cast<intptr_t>(-1))) {
        const HMODULE module = GetModuleHandleA("opengl32.dll");
        proc = module != nullptr ? reinterpret_cast<void *>(GetProcAddress(module, name)) : nullptr;
    }
    return proc;
#else
    return SDL_GL_GetProcAddress(name);
#endif
}

void destroy_image(GpuImage &image) noexcept {
    if (image.texture != 0u) gl::glDeleteTextures(1, &image.texture);
    image = {};
}

// Decode runs off the GL thread. Delete the name on the next current frame.
void retire_texture(GLState &s, GLuint name) noexcept {
    if (name != 0u) s.retired_textures.push_back(name);
}

void flush_retired_textures(GLState &s) noexcept {
    if (s.retired_textures.empty()) return;
    gl::glDeleteTextures(static_cast<GLsizei>(s.retired_textures.size()), s.retired_textures.data());
    s.retired_textures.clear();
}

void destroy_target(Target &target) noexcept {
    destroy_image(target.color);
    destroy_image(target.snapshot);
    if (target.depth != 0u) gl::glDeleteRenderbuffers(1, &target.depth);
    if (target.fbo != 0u) gl::glDeleteFramebuffers(1, &target.fbo);
    target.depth = 0u;
    target.fbo = 0u;
    target.created = false;
}

void destroy_present_target(GLState &s) noexcept {
    if (s.present_color != 0u) gl::glDeleteTextures(1, &s.present_color);
    if (s.present_fbo != 0u) gl::glDeleteFramebuffers(1, &s.present_fbo);
    s.present_color = 0u;
    s.present_fbo = 0u;
    s.present_width = 0u;
    s.present_height = 0u;
}

void destroy_backend(GLState &s) noexcept {
    if (s.context_ready && make_current(s)) {
        flush_retired_textures(s);
        destroy_present_target(s);
        for (auto &entry : s.targets) destroy_target(entry.second);
        for (auto &entry : s.textures) destroy_image(entry.second.gpu);
        s.targets.clear();
        s.textures.clear();
        if (!s.samplers.empty()) {
            std::vector<GLuint> names;
            names.reserve(s.samplers.size());
            for (const auto &entry : s.samplers) names.push_back(entry.second);
            gl::glDeleteSamplers(static_cast<GLsizei>(names.size()), names.data());
            s.samplers.clear();
        }
        if (s.white != 0u) gl::glDeleteTextures(1, &s.white);
        if (s.ge_program != 0u) gl::glDeleteProgram(s.ge_program);
        if (s.vao != 0u) gl::glDeleteVertexArrays(1, &s.vao);
        if (s.vbo != 0u || s.ibo != 0u || s.ubo != 0u) {
            GLuint buffers[3]{s.vbo, s.ibo, s.ubo};
            gl::glDeleteBuffers(3, buffers);
        }
        s.white = 0u;
        s.ge_program = 0u;
        s.vao = 0u;
        s.vbo = 0u;
        s.ibo = 0u;
        s.ubo = 0u;
    }
    release_context(s);
#if defined(_WIN32)
    if (s.context != nullptr) wglDeleteContext(s.context);
    if (s.hidden_dc != nullptr && s.hidden_window != nullptr) ReleaseDC(s.hidden_window, s.hidden_dc);
    if (s.hidden_window != nullptr) DestroyWindow(s.hidden_window);
    s.context = nullptr;
    s.hidden_dc = nullptr;
    s.hidden_window = nullptr;
#else
    if (s.context != nullptr) SDL_GL_DeleteContext(s.context);
    if (s.hidden_window != nullptr) SDL_DestroyWindow(s.hidden_window);
    s.context = nullptr;
    s.hidden_window = nullptr;
#endif
    s.context_ready = false;
    s.enabled = false;
    s.current_target = nullptr;
    s.vertices.clear();
    s.indices.clear();
    s.batches.clear();
}

GLuint compile_shader(GLenum type, const char *source, std::string &error) {
    const GLuint shader = gl::glCreateShader(type);
    if (shader == 0u) {
        error = "glCreateShader failed";
        return 0u;
    }
    gl::glShaderSource(shader, 1, &source, nullptr);
    gl::glCompileShader(shader);
    GLint ok = 0;
    gl::glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        GLint length = 0;
        gl::glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &length);
        std::string log(static_cast<std::size_t>(std::max(length, 1)), '\0');
        gl::glGetShaderInfoLog(shader, length, nullptr, log.data());
        error = log;
        gl::glDeleteShader(shader);
        return 0u;
    }
    return shader;
}

GLuint link_program(GLuint vertex, GLuint fragment, std::string &error) {
    const GLuint program = gl::glCreateProgram();
    gl::glAttachShader(program, vertex);
    gl::glAttachShader(program, fragment);
    gl::glLinkProgram(program);
    gl::glDeleteShader(vertex);
    gl::glDeleteShader(fragment);
    GLint ok = 0;
    gl::glGetProgramiv(program, GL_LINK_STATUS, &ok);
    if (!ok) {
        GLint length = 0;
        gl::glGetProgramiv(program, GL_INFO_LOG_LENGTH, &length);
        std::string log(static_cast<std::size_t>(std::max(length, 1)), '\0');
        gl::glGetProgramInfoLog(program, length, nullptr, log.data());
        error = log;
        gl::glDeleteProgram(program);
        return 0u;
    }
    return program;
}

bool create_context(GLState &s, std::string &error) {
#if defined(_WIN32)
    WNDCLASSW window_class{};
    window_class.style = CS_OWNDC;
    window_class.lpfnWndProc = DefWindowProcW;
    window_class.hInstance = GetModuleHandleW(nullptr);
    window_class.lpszClassName = L"LCSNativeGL";
    RegisterClassW(&window_class);
    s.hidden_window = CreateWindowExW(0, window_class.lpszClassName, L"LCSNativeGL", WS_POPUP,
                                      0, 0, 64, 64, nullptr, nullptr, window_class.hInstance, nullptr);
    if (s.hidden_window == nullptr) {
        error = "OpenGL hidden window failed";
        return false;
    }
    s.hidden_dc = GetDC(s.hidden_window);
    if (s.hidden_dc == nullptr) {
        error = "OpenGL GetDC failed";
        return false;
    }
    PIXELFORMATDESCRIPTOR descriptor{};
    descriptor.nSize = sizeof(descriptor);
    descriptor.nVersion = 1;
    descriptor.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    descriptor.iPixelType = PFD_TYPE_RGBA;
    descriptor.cColorBits = 32;
    descriptor.cDepthBits = 24;
    descriptor.iLayerType = PFD_MAIN_PLANE;
    const int format = ChoosePixelFormat(s.hidden_dc, &descriptor);
    if (format == 0 || !SetPixelFormat(s.hidden_dc, format, &descriptor)) {
        error = "OpenGL pixel format failed";
        return false;
    }
    HGLRC legacy = wglCreateContext(s.hidden_dc);
    if (legacy == nullptr || !wglMakeCurrent(s.hidden_dc, legacy)) {
        if (legacy != nullptr) wglDeleteContext(legacy);
        error = "OpenGL legacy context failed";
        return false;
    }
    // Wine often refuses a core profile and leaves a 3.3+ compatibility context.
    using CreateAttribs = HGLRC(WINAPI *)(HDC, HGLRC, const int *);
    auto create_attribs = reinterpret_cast<CreateAttribs>(wglGetProcAddress("wglCreateContextAttribsARB"));
    HGLRC modern = nullptr;
    if (create_attribs != nullptr) {
        const int core_attribs[] = {0x2091, 3, 0x2092, 3, 0x9126, 0x00000001, 0};
        modern = create_attribs(s.hidden_dc, nullptr, core_attribs);
        if (modern == nullptr) {
            const int compat_attribs[] = {0x2091, 3, 0x2092, 3, 0x9126, 0x00000002, 0};
            modern = create_attribs(s.hidden_dc, nullptr, compat_attribs);
        }
    }
    auto version_at_least_3_3 = []() {
        using GetString = const unsigned char *(WINAPI *)(unsigned int);
        const HMODULE module = GetModuleHandleA("opengl32.dll");
        auto get_string = module != nullptr
            ? reinterpret_cast<GetString>(GetProcAddress(module, "glGetString")) : nullptr;
        if (get_string == nullptr) return false;
        const char *version = reinterpret_cast<const char *>(get_string(0x1F02u));
        if (version == nullptr || version[0] < '1' || version[0] > '9') return false;
        const int major = version[0] - '0';
        const int minor = version[1] == '.' && version[2] >= '0' && version[2] <= '9' ? version[2] - '0' : 0;
        return major > 3 || (major == 3 && minor >= 3);
    };
    if (modern != nullptr && wglMakeCurrent(s.hidden_dc, modern)) {
        wglDeleteContext(legacy);
        s.context = modern;
    } else if (wglMakeCurrent(s.hidden_dc, legacy) && version_at_least_3_3()) {
        if (modern != nullptr) wglDeleteContext(modern);
        std::cerr << "[gl] wglCreateContextAttribsARB failed, keeping legacy\n";
        s.context = legacy;
    } else {
        if (modern != nullptr) wglDeleteContext(modern);
        wglMakeCurrent(nullptr, nullptr);
        wglDeleteContext(legacy);
        error = "OpenGL 3.3 context failed";
        return false;
    }
#else
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    s.hidden_window = SDL_CreateWindow("LCSNativeGL", 0, 0, 64, 64, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    if (s.hidden_window == nullptr) {
        error = std::string("OpenGL window failed: ") + SDL_GetError();
        return false;
    }
    s.context = SDL_GL_CreateContext(s.hidden_window);
    if (s.context == nullptr) {
        error = std::string("OpenGL context failed: ") + SDL_GetError();
        return false;
    }
#endif
    s.context_thread = std::this_thread::get_id();
    return true;
}

bool init_device(GLState &s, std::string &error) {
    if (!gl::load_gl(&gl_get_proc, error)) return false;
    GLint major = 0;
    GLint minor = 0;
    gl::glGetIntegerv(GL_MAJOR_VERSION, &major);
    gl::glGetIntegerv(GL_MINOR_VERSION, &minor);
    const char *version = reinterpret_cast<const char *>(gl::glGetString(GL_VERSION));
    const char *renderer = reinterpret_cast<const char *>(gl::glGetString(GL_RENDERER));
    s.version = version != nullptr ? version : "unknown";
    std::cerr << "[gl] " << s.version << " / " << (renderer != nullptr ? renderer : "?") << "\n";
    if (major < 3 || (major == 3 && minor < 3)) {
        error = "OpenGL 3.3 is required, context is " + s.version;
        return false;
    }
    GLfloat anisotropy = 1.0f;
    gl::glGetError();
    gl::glGetFloatv(kMaxAnisotropy, &anisotropy);
    if (gl::glGetError() == 0u && anisotropy > 1.0f) s.max_anisotropy = anisotropy;

    const GLuint vertex = compile_shader(GL_VERTEX_SHADER, kGLGeVertexShader, error);
    if (vertex == 0u) return false;
    const GLuint fragment = compile_shader(GL_FRAGMENT_SHADER, kGLGeFragmentShader, error);
    if (fragment == 0u) {
        gl::glDeleteShader(vertex);
        return false;
    }
    s.ge_program = link_program(vertex, fragment, error);
    if (s.ge_program == 0u) return false;
    const GLuint block = gl::glGetUniformBlockIndex(s.ge_program, "DrawUniforms");
    if (block != 0xFFFFFFFFu) gl::glUniformBlockBinding(s.ge_program, block, 0u);
    s.present_tex_loc = gl::glGetUniformLocation(s.ge_program, "sourceTexture");

    gl::glGenVertexArrays(1, &s.vao);
    gl::glGenBuffers(1, &s.vbo);
    gl::glGenBuffers(1, &s.ibo);
    gl::glGenBuffers(1, &s.ubo);
    gl::glBindVertexArray(s.vao);
    gl::glBindBuffer(GL_ARRAY_BUFFER, s.vbo);
    gl::glBufferData(GL_ARRAY_BUFFER, static_cast<GLsizeiptr>(kGeometryUploadCapacity), nullptr, GL_DYNAMIC_DRAW);
    gl::glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, s.ibo);
    gl::glBufferData(GL_ELEMENT_ARRAY_BUFFER, static_cast<GLsizeiptr>(kGeometryUploadCapacity), nullptr,
                     GL_DYNAMIC_DRAW);
    const GLsizei stride = sizeof(UploadVertex);
    gl::glEnableVertexAttribArray(0u);
    gl::glVertexAttribPointer(0u, 4, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<void *>(0));
    gl::glEnableVertexAttribArray(1u);
    gl::glVertexAttribPointer(1u, 4, GL_UNSIGNED_BYTE, GL_TRUE, stride, reinterpret_cast<void *>(16));
    gl::glEnableVertexAttribArray(2u);
    gl::glVertexAttribPointer(2u, 2, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<void *>(20));
    gl::glEnableVertexAttribArray(3u);
    gl::glVertexAttribPointer(3u, 1, GL_FLOAT, GL_FALSE, stride, reinterpret_cast<void *>(offsetof(UploadVertex, q)));
    gl::glEnableVertexAttribArray(4u);
    gl::glVertexAttribPointer(4u, 1, GL_FLOAT, GL_FALSE, stride,
                              reinterpret_cast<void *>(offsetof(UploadVertex, fog_factor)));
    gl::glBindBuffer(GL_UNIFORM_BUFFER, s.ubo);
    gl::glBufferData(GL_UNIFORM_BUFFER, sizeof(DrawUniforms), nullptr, GL_DYNAMIC_DRAW);
    gl::glBindBufferBase(GL_UNIFORM_BUFFER, 0u, s.ubo);
    gl::glBindVertexArray(0u);

    const std::uint8_t white[4]{255u, 255u, 255u, 255u};
    gl::glGenTextures(1, &s.white);
    gl::glBindTexture(GL_TEXTURE_2D, s.white);
    gl::glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 1, 0, kRgba, GL_UNSIGNED_BYTE, white);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl::glPixelStorei(kPackAlignment, 1);
    gl::glPixelStorei(kUnpackAlignment, 1);
    s.context_ready = true;
    s.report.device_created = true;
    s.report.shader_modules_created = true;
    s.report.graphics_pipeline_created = true;
    return true;
}

Target *find_target(GLState &s, std::uint32_t address) {
    address &= 0x001FFFF0u;
    const auto found = s.targets.find(address);
    return found == s.targets.end() ? nullptr : &found->second;
}

bool ensure_target(GLState &s, std::uint32_t address, std::string &error) {
    address &= 0x001FFFF0u;
    Target *existing = find_target(s, address);
    if (existing != nullptr && existing->created) return true;
    Target fresh{};
    Target &target = existing != nullptr ? *existing : fresh;
    target.address = address;
    gl::glGenTextures(1, &target.color.texture);
    gl::glBindTexture(GL_TEXTURE_2D, target.color.texture);
    gl::glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, static_cast<GLsizei>(s.target_width),
                     static_cast<GLsizei>(s.target_height), 0, kRgba, GL_UNSIGNED_BYTE, nullptr);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    target.color.width = s.target_width;
    target.color.height = s.target_height;
    gl::glGenRenderbuffers(1, &target.depth);
    gl::glBindRenderbuffer(GL_RENDERBUFFER, target.depth);
    gl::glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, static_cast<GLsizei>(s.target_width),
                              static_cast<GLsizei>(s.target_height));
    gl::glGenFramebuffers(1, &target.fbo);
    gl::glBindFramebuffer(GL_FRAMEBUFFER, target.fbo);
    gl::glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, target.color.texture, 0);
    gl::glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, target.depth);
    if (gl::glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        error = "OpenGL framebuffer is incomplete";
        destroy_target(target);
        return false;
    }
    target.created = true;
    if (existing == nullptr) s.targets.emplace(address, std::move(fresh));
    ++s.report.framebuffer_targets_observed;
    ++s.report.native_framebuffer_targets;
    s.report.framebuffer_created = true;
    s.report.depth_image_created = true;
    s.report.offscreen_image_created = true;
    s.current_target = nullptr;
    return true;
}

void note_logical_size(GLState &s, std::uint32_t address, std::uint32_t width, std::uint32_t height) {
    Target *target = find_target(s, address);
    if (target == nullptr) return;
    if (width != 0u) target->logical_width = width;
    if (height != 0u) target->logical_height = height;
}

void remember_target(GLState &s, std::uint32_t address, std::uint32_t width, std::uint32_t height) {
    address &= 0x001FFFF0u;
    if (find_target(s, address) == nullptr) {
        Target created{};
        created.address = address;
        s.targets.emplace(address, std::move(created));
    }
    note_logical_size(s, address, width, height);
}

UploadVertex make_upload_vertex(const GeGpuVertex &source) noexcept {
    return {source.x, source.y, source.z, source.w, source.rgba, source.u, source.v, source.fog_factor, source.q};
}

float expand5(std::uint32_t value) noexcept {
    value &= 31u;
    const std::uint32_t expanded = (value << 3u) | (value >> 2u);
    return static_cast<float>(expanded) * (1.0f / 255.0f);
}

UploadVertex decode_packed(const Packed0115 &packed) noexcept {
    UploadVertex vertex{};
    vertex.x = static_cast<float>(packed.x) * (1.0f / 32768.0f);
    vertex.y = static_cast<float>(packed.y) * (1.0f / 32768.0f);
    vertex.z = static_cast<float>(packed.z) * (1.0f / 32768.0f);
    vertex.w = 1.0f;
    vertex.u = static_cast<float>(packed.u) * (1.0f / 128.0f);
    vertex.v = static_cast<float>(packed.v) * (1.0f / 128.0f);
    vertex.q = 1.0f;
    const std::uint32_t r = static_cast<std::uint32_t>(std::lround(expand5(packed.color) * 255.0f));
    const std::uint32_t g = static_cast<std::uint32_t>(std::lround(expand5(packed.color >> 5u) * 255.0f));
    const std::uint32_t b = static_cast<std::uint32_t>(std::lround(expand5(packed.color >> 10u) * 255.0f));
    const std::uint32_t a = (packed.color & 0x8000u) != 0u ? 255u : 0u;
    vertex.rgba = r | (g << 8u) | (b << 16u) | (a << 24u);
    return vertex;
}

std::array<float, 4> scaled(const std::array<float, 4> &a, float sa, const std::array<float, 4> &b, float sb) noexcept {
    return {a[0] * sa + b[0] * sb, a[1] * sa + b[1] * sb, a[2] * sa + b[2] * sb, a[3] * sa + b[3] * sb};
}

DrawUniforms make_uniforms(const Batch &batch, std::uint32_t logical_width, std::uint32_t logical_height,
                           bool sampled) noexcept {
    DrawUniforms constants{};
    logical_width = std::max<std::uint32_t>(1u, logical_width);
    logical_height = std::max<std::uint32_t>(1u, logical_height);
    if (!batch.hardware_transform) {
        constants.uv[0] = 2.0f / static_cast<float>(logical_width);
        constants.uv[1] = 2.0f / static_cast<float>(logical_height);
        constants.uv[2] = 1.0f / 65535.0f;
        constants.control[0] = 2u;
    } else {
        const GeGpuHardwareTransform &hw = batch.transform;
        const auto row = [&](std::size_t r) {
            return std::array<float, 4>{hw.model_to_clip[r], hw.model_to_clip[4u + r],
                                        hw.model_to_clip[8u + r], hw.model_to_clip[12u + r]};
        };
        const auto clip_x = row(0u);
        const auto clip_y = row(1u);
        const auto clip_z = row(2u);
        const auto clip_w = row(3u);
        const float x_a = hw.viewport_scale_x * (2.0f / static_cast<float>(logical_width));
        const float x_b = (hw.viewport_center_x - hw.viewport_offset_x) * (2.0f / static_cast<float>(logical_width)) - 1.0f;
        const float y_a = hw.viewport_scale_y * (2.0f / static_cast<float>(logical_height));
        const float y_b = (hw.viewport_center_y - hw.viewport_offset_y) * (2.0f / static_cast<float>(logical_height)) - 1.0f;
        constexpr float inv_depth = 1.0f / 65535.0f;
        const auto row_x = scaled(clip_x, x_a, clip_w, x_b);
        const auto row_y = scaled(clip_y, -y_a, clip_w, -y_b);
        const auto row_z = scaled(clip_z, hw.viewport_scale_z * inv_depth, clip_w, hw.viewport_center_z * inv_depth);
        std::copy(row_x.begin(), row_x.end(), constants.row0);
        std::copy(row_y.begin(), row_y.end(), constants.row1);
        std::copy(row_z.begin(), row_z.end(), constants.row2);
        std::copy(clip_w.begin(), clip_w.end(), constants.row3);
        std::copy(hw.model_to_view_z.begin(), hw.model_to_view_z.end(), constants.view_z);
        constants.uv[0] = hw.uv_scale_u;
        constants.uv[1] = hw.uv_scale_v;
        constants.uv[2] = hw.uv_offset_u;
        constants.uv[3] = hw.uv_offset_v;
        constants.fog[0] = hw.fog_end;
        constants.fog[1] = hw.fog_slope;
        constants.control[0] = 1u;
        constants.control[1] = hw.depth_clip_enabled ? 1u : 0u;
        constants.control[2] = hw.vertex_color_affine ? 1u : 0u;
        std::copy(hw.vertex_color_mul.begin(), hw.vertex_color_mul.end(), constants.color_mul);
        std::copy(hw.vertex_color_add.begin(), hw.vertex_color_add.end(), constants.color_add);
    }
    const GeGpuDrawDescriptor &draw = batch.draw;
    constants.pixel0[0] = static_cast<std::uint32_t>(draw.alpha_test_enabled ? 1u : 0u) |
                          ((draw.alpha_function & 7u) << 8u) | ((draw.alpha_reference & 0xFFu) << 16u) |
                          ((draw.alpha_mask & 0xFFu) << 24u);
    constants.pixel0[1] = (draw.texture_function & 0xFFu) |
                          (static_cast<std::uint32_t>(draw.texture_use_alpha ? 1u : 0u) << 8u) |
                          (static_cast<std::uint32_t>(draw.texture_double_color ? 1u : 0u) << 16u) |
                          (static_cast<std::uint32_t>(sampled ? 1u : 0u) << 24u);
    constants.pixel0[2] = draw.texture_env & 0x00FFFFFFu;
    constants.pixel0[3] = (draw.fog_color & 0x00FFFFFFu) |
                          (static_cast<std::uint32_t>(draw.fog_enabled ? 0xFFu : 0u) << 24u);
    constants.pixel1[0] = draw.framebuffer_format & 3u;
    return constants;
}

std::size_t blend_variant(const GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.blend_enabled || draw.clear_mode) return 0u;
    const std::uint32_t eq = draw.blend_equation & 7u;
    const std::uint32_t src = draw.blend_source_factor & 0xFu;
    const std::uint32_t dst = draw.blend_dest_factor & 0xFu;
    if (eq == 0u && src == 2u && dst == 3u) return 1u;
    if (eq == 0u && src == 10u && dst == 10u) {
        const std::uint32_t fs = draw.blend_fix_source & 0x00FFFFFFu;
        const std::uint32_t fd = draw.blend_fix_dest & 0x00FFFFFFu;
        if (fs == 0x00FFFFFFu && fd == 0u) return 2u;
        if (fs == 0x00FFFFFFu && fd == 0x00FFFFFFu) return 3u;
        bool complements = true;
        for (std::uint32_t shift = 0u; shift < 24u; shift += 8u)
            complements &= (((fs >> shift) & 0xFFu) + ((fd >> shift) & 0xFFu)) == 0xFFu;
        if (complements) return 4u;
    }
    if (eq == 0u && src == 2u && dst == 10u && (draw.blend_fix_dest & 0x00FFFFFFu) == 0x00FFFFFFu) return 5u;
    return 0u;
}

bool channel_written(std::uint32_t mask, std::uint32_t channel) noexcept {
    return ((mask >> (channel * 8u)) & 0xFFu) != 0xFFu;
}

GLenum depth_compare(std::uint32_t function) noexcept {
    switch (function & 7u) {
    case 0u: return 0x0200u;
    case 1u: return 0x0207u;
    case 2u: return 0x0202u;
    case 3u: return 0x0205u;
    case 4u: return 0x0201u;
    case 5u: return 0x0203u;
    case 6u: return 0x0204u;
    case 7u: return 0x0206u;
    }
    return 0x0207u;
}

float sampler_lod_bias(const GeGpuDrawDescriptor &draw) noexcept {
    const float bias = static_cast<float>(draw.texture_level_offset16) / 16.0f + rendering_texture_lod_bias();
    return std::clamp(bias, -16.0f, 16.0f);
}

std::uint64_t sampler_key(const GeGpuDrawDescriptor &draw, bool mip) noexcept {
    const std::uint32_t anisotropy =
        std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    std::uint64_t key = draw.texture_min_linear ? 1u : 0u;
    key = hash_mix(key, draw.texture_mag_linear ? 1u : 0u);
    key = hash_mix(key, mip ? 1u : 0u);
    key = hash_mix(key, (draw.texture_mipmap_enabled && draw.texture_mipmap_linear) ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_u ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_v ? 1u : 0u);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, anisotropy);
    return key;
}

GLuint sampler_for(GLState &s, const GeGpuDrawDescriptor &draw, bool mip) {
    const std::uint64_t key = sampler_key(draw, mip);
    if (const auto found = s.samplers.find(key); found != s.samplers.end()) return found->second;
    GLuint sampler = 0u;
    gl::glGenSamplers(1, &sampler);
    const bool mip_linear = mip && draw.texture_mipmap_linear;
    GLenum min_filter = draw.texture_min_linear ? GL_LINEAR : GL_NEAREST;
    if (mip) {
        if (draw.texture_min_linear && mip_linear) min_filter = kLinearMipLinear;
        else if (draw.texture_min_linear) min_filter = kLinearMipNearest;
        else if (mip_linear) min_filter = kNearestMipLinear;
        else min_filter = kNearestMipNearest;
    }
    gl::glSamplerParameteri(sampler, GL_TEXTURE_MIN_FILTER, static_cast<GLint>(min_filter));
    gl::glSamplerParameteri(sampler, GL_TEXTURE_MAG_FILTER, draw.texture_mag_linear ? GL_LINEAR : GL_NEAREST);
    gl::glSamplerParameteri(sampler, GL_TEXTURE_WRAP_S, draw.texture_clamp_u ? GL_CLAMP_TO_EDGE : GL_REPEAT);
    gl::glSamplerParameteri(sampler, GL_TEXTURE_WRAP_T, draw.texture_clamp_v ? GL_CLAMP_TO_EDGE : GL_REPEAT);
    gl::glSamplerParameterf(sampler, kTextureLodBias, sampler_lod_bias(draw));
    float min_lod = 0.0f;
    float max_lod = static_cast<float>(std::max<std::uint32_t>(1u, draw.texture_max_level + 1u));
    if (!mip) max_lod = 0.0f;
    if (draw.texture_level_mode == 1u) {
        min_lod = static_cast<float>(draw.texture_selected_level);
        max_lod = min_lod;
    }
    gl::glSamplerParameterf(sampler, kTextureMinLod, min_lod);
    gl::glSamplerParameterf(sampler, kTextureMaxLod, max_lod);
    const std::uint32_t anisotropy =
        std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    if (s.max_anisotropy > 1.0f && anisotropy > 1u && mip)
        gl::glSamplerParameterf(sampler, kTextureAnisotropy,
                                std::min(static_cast<float>(anisotropy), s.max_anisotropy));
    s.samplers.emplace(key, sampler);
    ++s.report.texture_samplers_created;
    return sampler;
}

void evict_stale_textures(GLState &s) {
    const std::uint32_t limit = std::max(64u, lcs_render_configuration().rendering.texture_cache_entries);
    if (s.textures.size() <= limit) return;
    std::vector<std::pair<std::uint64_t, std::uint64_t>> stale;
    stale.reserve(s.textures.size());
    for (const auto &entry : s.textures) {
        if (entry.second.dirty || entry.second.last_used_epoch >= s.frame_epoch) continue;
        stale.emplace_back(entry.second.last_used_epoch, entry.first);
    }
    std::sort(stale.begin(), stale.end());
    for (const auto &item : stale) {
        if (s.textures.size() <= limit) break;
        const auto found = s.textures.find(item.second);
        if (found == s.textures.end()) continue;
        retire_texture(s, found->second.gpu.texture);
        found->second.gpu = {};
        s.textures.erase(found);
    }
}

bool upload_texture(GLState &s, Texture &texture, std::string &error) {
    if (!texture.dirty) return true;
    const std::uint32_t width = texture.gpu.width;
    const std::uint32_t height = texture.gpu.height;
    if (width == 0u || height == 0u || texture.rgba8.empty() || texture.mip_levels == 0u) {
        error = "OpenGL texture upload is empty";
        return false;
    }
    if (texture.gpu.texture == 0u) gl::glGenTextures(1, &texture.gpu.texture);
    gl::glBindTexture(GL_TEXTURE_2D, texture.gpu.texture);
    gl::glTexParameteri(GL_TEXTURE_2D, kTextureMaxLevel, static_cast<GLint>(texture.mip_levels - 1u));
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    std::uint32_t mip_width = width;
    std::uint32_t mip_height = height;
    std::size_t offset = 0u;
    for (std::uint32_t level = 0u; level < texture.mip_levels; ++level) {
        const std::size_t level_bytes = static_cast<std::size_t>(mip_width) * mip_height * 4u;
        if (offset + level_bytes > texture.rgba8.size()) break;
        gl::glTexImage2D(GL_TEXTURE_2D, static_cast<GLint>(level), GL_RGBA8, static_cast<GLsizei>(mip_width),
                         static_cast<GLsizei>(mip_height), 0, kRgba, GL_UNSIGNED_BYTE,
                         texture.rgba8.data() + offset);
        offset += level_bytes;
        mip_width = std::max(1u, mip_width >> 1u);
        mip_height = std::max(1u, mip_height >> 1u);
    }
    texture.dirty = false;
    ++s.report.texture_image_uploads;
    s.report.texture_image_upload_bytes += texture.rgba8.size();
    s.report.uploaded_mip_levels += texture.mip_levels;
    return true;
}

bool prepare_texture(GLState &s, const GeGpuDrawDescriptor &draw, std::uint32_t width, std::uint32_t height,
                     std::uint32_t mips, std::vector<std::byte> rgba) {
    if (width == 0u) width = draw.texture_width;
    if (height == 0u) height = draw.texture_height;
    if (width == 0u || height == 0u || rgba.empty() || mips == 0u) return false;
    evict_stale_textures(s);
    const std::uint64_t key = texture_key(draw);
    Texture &texture = s.textures[key];
    if (texture.gpu.texture != 0u && (texture.gpu.width != width || texture.gpu.height != height ||
                                       texture.gpu.mips != mips)) {
        retire_texture(s, texture.gpu.texture);
        texture.gpu = {};
    }
    texture.descriptor = draw;
    texture.rgba8 = std::move(rgba);
    texture.mip_levels = mips;
    texture.gpu.width = width;
    texture.gpu.height = height;
    texture.gpu.mips = mips;
    texture.dirty = true;
    texture.signature_epoch = s.frame_epoch;
    texture.last_used_epoch = s.frame_epoch;
    s.last_texture_rgba = texture.rgba8;
    ++s.report.decoded_texture_uploads;
    s.report.decoded_texture_bytes += s.last_texture_rgba.size();
    s.report.unique_texture_keys = s.textures.size();
    return true;
}

bool texture_ready(GLState &s, const GeGpuDrawDescriptor &draw) noexcept {
    if (!s.enabled || !draw.texture_enabled) return false;
    if (find_target(s, draw.texture_address) != nullptr) return true;
    const auto found = s.textures.find(texture_key(draw));
    if (found == s.textures.end()) return false;
    found->second.last_used_epoch = s.frame_epoch;
    return !found->second.dirty || !found->second.rgba8.empty();
}

bool begin_target(GLState &s, Target &target) {
    const bool first_ever = target.last_render_epoch == 0u;
    const bool first_this_frame = target.last_render_epoch != s.frame_epoch;
    if (s.current_target != &target) {
        gl::glBindFramebuffer(GL_FRAMEBUFFER, target.fbo);
        gl::glViewport(0, 0, static_cast<GLsizei>(s.target_width), static_cast<GLsizei>(s.target_height));
        s.current_target = &target;
    }
    if (!first_ever && !first_this_frame) return true;
    gl::glDisable(GL_SCISSOR_TEST);
    gl::glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    gl::glDepthMask(GL_TRUE);
    gl::glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gl::glClearDepth(0.0);
    GLbitfield bits = 0u;
    if (first_ever || (first_this_frame && target.address == s.display_framebuffer)) bits |= GL_COLOR_BUFFER_BIT;
    if (first_this_frame) bits |= GL_DEPTH_BUFFER_BIT;
    if (bits != 0u) gl::glClear(bits);
    target.last_render_epoch = s.frame_epoch;
    return true;
}

bool snapshot_target(GLState &s, Target &target) {
    if (target.color.texture == 0u) return false;
    if (target.snapshot.texture == 0u) {
        gl::glGenTextures(1, &target.snapshot.texture);
        gl::glBindTexture(GL_TEXTURE_2D, target.snapshot.texture);
        gl::glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, static_cast<GLsizei>(s.target_width),
                         static_cast<GLsizei>(s.target_height), 0, kRgba, GL_UNSIGNED_BYTE, nullptr);
        gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        target.snapshot.width = s.target_width;
        target.snapshot.height = s.target_height;
    }
    if (s.current_target != &target) {
        gl::glBindFramebuffer(GL_FRAMEBUFFER, target.fbo);
        s.current_target = &target;
    }
    gl::glBindTexture(GL_TEXTURE_2D, target.snapshot.texture);
    gl::glCopyTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 0, 0, static_cast<GLsizei>(s.target_width),
                            static_cast<GLsizei>(s.target_height));
    return target.snapshot.texture != 0u;
}

void apply_fixed_state(const GeGpuDrawDescriptor &draw, bool cull, bool ccw) {
    const std::size_t blend = blend_variant(draw);
    if (blend == 0u || blend == 2u) {
        gl::glDisable(GL_BLEND);
    } else {
        gl::glEnable(GL_BLEND);
        GLenum src = 1u;
        GLenum dst = 0u;
        GLenum src_a = 1u;
        GLenum dst_a = 0u;
        if (blend == 1u) {
            src = kSrcAlpha;
            dst = kOneMinusSrcAlpha;
            dst_a = kOneMinusSrcAlpha;
        } else if (blend == 3u) {
            dst = 1u;
            dst_a = 1u;
        } else if (blend == 4u) {
            src = kConstantColor;
            dst = 0x8002u;
            const std::uint32_t fix = draw.blend_fix_source & 0x00FFFFFFu;
            gl::glBlendColor(static_cast<float>(fix & 0xFFu) / 255.0f,
                             static_cast<float>((fix >> 8u) & 0xFFu) / 255.0f,
                             static_cast<float>((fix >> 16u) & 0xFFu) / 255.0f, 1.0f);
        } else if (blend == 5u) {
            src = kSrcAlpha;
            dst = 1u;
            dst_a = 1u;
        }
        gl::glBlendFuncSeparate(src, dst, src_a, dst_a);
    }
    gl::glColorMask(channel_written(draw.color_write_mask, 0u) ? GL_TRUE : GL_FALSE,
                    channel_written(draw.color_write_mask, 1u) ? GL_TRUE : GL_FALSE,
                    channel_written(draw.color_write_mask, 2u) ? GL_TRUE : GL_FALSE,
                    channel_written(draw.color_write_mask, 3u) ? GL_TRUE : GL_FALSE);
    if (draw.depth_test_enabled) {
        gl::glEnable(GL_DEPTH_TEST);
        gl::glDepthFunc(depth_compare(draw.depth_function));
    } else {
        gl::glDisable(GL_DEPTH_TEST);
    }
    gl::glDepthMask(draw.depth_write_enabled ? GL_TRUE : GL_FALSE);
    if (cull) {
        gl::glEnable(GL_CULL_FACE);
        gl::glCullFace(kBack);
        // D3D's clockwise test is on a Y-down target. GL's Y-up target reverses it.
        gl::glFrontFace(ccw ? kCcw : kCw);
    } else {
        gl::glDisable(GL_CULL_FACE);
    }
}

std::int32_t scale_coord(std::int32_t value, std::uint32_t logical, std::uint32_t target_size) noexcept {
    return static_cast<std::int32_t>(std::clamp<std::int64_t>(
        static_cast<std::int64_t>(value) * target_size / std::max<std::uint32_t>(1u, logical), 0, target_size));
}

bool ensure_present_target(GLState &s, std::uint32_t width, std::uint32_t height) {
    if (width == 0u || height == 0u) return false;
    if (s.present_fbo != 0u && s.present_width == width && s.present_height == height) return true;
    destroy_present_target(s);
    gl::glGenTextures(1, &s.present_color);
    gl::glBindTexture(GL_TEXTURE_2D, s.present_color);
    gl::glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, static_cast<GLsizei>(width), static_cast<GLsizei>(height), 0,
                     kRgba, GL_UNSIGNED_BYTE, nullptr);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    gl::glGenFramebuffers(1, &s.present_fbo);
    gl::glBindFramebuffer(GL_FRAMEBUFFER, s.present_fbo);
    gl::glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, s.present_color, 0);
    const bool complete = gl::glCheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE;
    s.current_target = nullptr;
    if (!complete) {
        destroy_present_target(s);
        return false;
    }
    s.present_width = width;
    s.present_height = height;
    return true;
}

void copy_top_down(std::vector<std::byte> &dst, const std::vector<std::byte> &src, std::uint32_t width,
                   std::uint32_t height) {
    const std::size_t stride = static_cast<std::size_t>(width) * 4u;
    for (std::uint32_t y = 0u; y < height; ++y) {
        std::memcpy(dst.data() + static_cast<std::size_t>(height - 1u - y) * stride,
                    src.data() + static_cast<std::size_t>(y) * stride, stride);
    }
}

bool read_bound_rgba(GLState &s, std::uint32_t width, std::uint32_t height) {
    const std::size_t bytes = static_cast<std::size_t>(width) * height * 4u;
    s.readback_raw.resize(bytes);
    s.frame_rgba.resize(bytes);
    gl::glReadPixels(0, 0, static_cast<GLsizei>(width), static_cast<GLsizei>(height), kRgba, GL_UNSIGNED_BYTE,
                     s.readback_raw.data());
    copy_top_down(s.frame_rgba, s.readback_raw, width, height);
    s.readback_width = width;
    s.readback_height = height;
    s.current_target = nullptr;
    return true;
}

bool read_display(GLState &s, Target &display) {
    // The CPU image is the window. The internal target stays on the GPU.
    const DisplaySurfaceDimensions window = resolve_window_dimensions();
    const std::uint32_t window_width = std::clamp(window.width, 1u, 16384u);
    const std::uint32_t window_height = std::clamp(window.height, 1u, 16384u);
    if (ensure_present_target(s, window_width, window_height)) {
        // A blit is clipped by scissor.
        gl::glDisable(GL_SCISSOR_TEST);
        gl::glBindFramebuffer(kReadFramebuffer, display.fbo);
        gl::glBindFramebuffer(kDrawFramebuffer, s.present_fbo);
        const bool linear =
            lcs_render_configuration().display.upscale_filter == DisplayUpscaleFilter::Bilinear;
        // A stale error must not select the full-target read.
        for (int drained = 0; drained < 8 && gl::glGetError() != 0u; ++drained) {}
        gl::glBlitFramebuffer(0, 0, static_cast<GLint>(s.target_width), static_cast<GLint>(s.target_height), 0, 0,
                              static_cast<GLint>(s.present_width), static_cast<GLint>(s.present_height),
                              GL_COLOR_BUFFER_BIT, linear ? GL_LINEAR : GL_NEAREST);
        if (gl::glGetError() == 0u) {
            gl::glBindFramebuffer(kReadFramebuffer, s.present_fbo);
            return read_bound_rgba(s, s.present_width, s.present_height);
        }
    }
    gl::glBindFramebuffer(GL_FRAMEBUFFER, display.fbo);
    return read_bound_rgba(s, s.target_width, s.target_height);
}

void replay_batches(GLState &s) {
    std::string error;
    const std::size_t vertex_bytes = s.vertices.size() * sizeof(UploadVertex);
    const std::size_t index_bytes = s.indices.size() * sizeof(std::uint32_t);
    // The element binding is VAO state. Unbinding the VAO leaves that target at 0.
    gl::glBindVertexArray(s.vao);
    gl::glBindBuffer(GL_ARRAY_BUFFER, s.vbo);
    if (!s.vertices.empty())
        gl::glBufferSubData(GL_ARRAY_BUFFER, 0, static_cast<GLsizeiptr>(vertex_bytes), s.vertices.data());
    if (!s.indices.empty())
        gl::glBufferSubData(GL_ELEMENT_ARRAY_BUFFER, 0, static_cast<GLsizeiptr>(index_bytes), s.indices.data());
    gl::glUseProgram(s.ge_program);
    if (s.present_tex_loc >= 0) gl::glUniform1i(s.present_tex_loc, 0);
    gl::glActiveTexture(GL_TEXTURE0);
    for (auto &entry : s.textures) {
        if (!upload_texture(s, entry.second, error) && !error.empty())
            runtime_log_error("opengl texture upload", error);
    }
    for (const Batch &batch : s.batches) {
        if (!ensure_target(s, batch.draw.framebuffer_address, error)) continue;
        Target *target = find_target(s, batch.draw.framebuffer_address);
        if (target == nullptr || !begin_target(s, *target)) continue;
        const bool strip = batch.hardware_transform && batch.transform.primitive == 4u;
        const bool cull = batch.hardware_transform && batch.transform.cull_enabled;
        const bool ccw = cull && batch.transform.accept_counter_clockwise;
        apply_fixed_state(batch.draw, cull, ccw);
        const std::int32_t left = scale_coord(batch.draw.scissor_x0, target->logical_width, s.target_width);
        const std::int32_t top = scale_coord(batch.draw.scissor_y0, target->logical_height, s.target_height);
        const std::int32_t right = scale_coord(batch.draw.scissor_x1 + 1, target->logical_width, s.target_width);
        const std::int32_t bottom = scale_coord(batch.draw.scissor_y1 + 1, target->logical_height, s.target_height);
        if (right <= left || bottom <= top) continue;
        const std::int32_t scissor_height = bottom - top;
        gl::glEnable(GL_SCISSOR_TEST);
        gl::glScissor(left, static_cast<GLint>(s.target_height) - (top + scissor_height), right - left, scissor_height);

        GLuint texture = s.white;
        bool sampled = false;
        std::uint32_t mips = 1u;
        if (batch.draw.texture_enabled) {
            if (batch.framebuffer_feedback && batch.feedback_address == target->address) {
                if (snapshot_target(s, *target)) {
                    texture = target->snapshot.texture;
                    sampled = true;
                    ++s.report.vram_feedback_refreshes;
                    ++s.report.gpu_feedback_draws;
                }
            } else if (batch.framebuffer_feedback) {
                if (Target *feedback = find_target(s, batch.feedback_address);
                    feedback != nullptr && feedback->color.texture != 0u) {
                    texture = feedback->color.texture;
                    sampled = true;
                    ++s.report.vram_feedback_refreshes;
                    ++s.report.gpu_feedback_draws;
                }
            } else if (const auto found = s.textures.find(texture_key(batch.draw));
                       found != s.textures.end() && found->second.gpu.texture != 0u && !found->second.dirty) {
                texture = found->second.gpu.texture;
                mips = found->second.mip_levels;
                sampled = true;
            }
        }
        gl::glBindTexture(GL_TEXTURE_2D, texture);
        gl::glBindSampler(0u, sampler_for(s, batch.draw, sampled && mips > 1u));
        DrawUniforms uniforms = make_uniforms(batch, target->logical_width, target->logical_height, sampled);
        if (sampled && batch.framebuffer_feedback) uniforms.pixel1[1] = 1u;
        gl::glBufferSubData(GL_UNIFORM_BUFFER, 0, sizeof(uniforms), &uniforms);
        const GLenum mode = strip ? GL_TRIANGLE_STRIP : GL_TRIANGLES;
        if (batch.indexed) {
            gl::glDrawElementsBaseVertex(
                mode, static_cast<GLsizei>(batch.index_count), GL_UNSIGNED_INT,
                reinterpret_cast<void *>(static_cast<std::uintptr_t>(batch.first_index * sizeof(std::uint32_t))),
                static_cast<GLint>(batch.first_vertex));
        } else {
            gl::glDrawArrays(mode, static_cast<GLint>(batch.first_vertex), static_cast<GLsizei>(batch.vertex_count));
        }
        if (batch.draw.depth_test_enabled) s.report.depth_tested_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.alpha_test_enabled) s.report.alpha_tested_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.fog_enabled) s.report.fogged_game_draw_calls += batch.logical_draw_count;
    }
    gl::glBindSampler(0u, 0u);
    gl::glBindVertexArray(0u);
}

}  // namespace

bool initialize_ge_gpu_backend(std::string &error) {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    destroy_backend(s);
    s.report = {};
    s.vertices.clear();
    s.indices.clear();
    s.batches.clear();
    s.frame_rgba.clear();
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    const bool requested = rendering.backend == RenderingBackend::OpenGL;
    s.report.requested = requested ? GeGpuBackendKind::OpenGL : GeGpuBackendKind::Software;
    s.report.active = GeGpuBackendKind::Software;
    if (!requested) {
        s.report.message = "This build's GE is OpenGL. The selected backend stays on the software rasterizer";
        error.clear();
        return true;
    }
    if (!rendering.dx12_ge_color) {
        s.report.message = "OpenGL GE is built, but NativeGE=false, so the software rasterizer stays active";
        error.clear();
        return true;
    }
    InternalResolutionDimensions dim = resolve_internal_resolution(rendering);
    s.target_width = std::clamp(dim.width, 480u, 16384u);
    s.target_height = std::clamp(dim.height, 272u, 16384u);
    if (!create_context(s, error) || !init_device(s, error)) {
        const std::string native_error = error;
        runtime_log_error("opengl ge initialize", native_error);
        destroy_backend(s);
        s.report.requested = GeGpuBackendKind::OpenGL;
        s.report.active = GeGpuBackendKind::Software;
        s.report.message = "OpenGL GE failed; using the software GE: " + native_error;
        const char *strict_ge = std::getenv("PSPRECOMP_GE_STRICT");
        const char *strict = (strict_ge != nullptr && *strict_ge != '\0') ? strict_ge
                                                                          : std::getenv("PSPRECOMP_DX12_GE_STRICT");
        const bool strict_mode = strict != nullptr && *strict != '\0' && *strict != '0';
        error = native_error;
        return !strict_mode;
    }
    release_context(s);
    s.enabled = true;
    s.report.active = GeGpuBackendKind::OpenGL;
    s.report.loader_opened = true;
    s.report.offscreen_width = s.target_width;
    s.report.offscreen_height = s.target_height;
    s.report.message = "OpenGL 3.3 GE backend active (" + s.version + ")";
    error.clear();
    std::cerr << "[gl] " << s.report.message << " " << s.target_width << "x" << s.target_height << "\n";
    return true;
}

void shutdown_ge_gpu_backend() noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    destroy_backend(s);
    s.report = {};
}

bool ge_gpu_backend_active() noexcept { return state().enabled; }
bool ge_gpu_backend_transfer_ready() noexcept { return state().enabled; }
bool ge_gpu_backend_graphics_ready() noexcept { return state().enabled && state().context_ready; }

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled) return;
    ++s.report.draw_calls;
    s.report.vertices += draw.vertex_count;
    if (draw.texture_enabled) ++s.report.textured_draw_calls;
    const std::uint32_t target = draw.framebuffer_address & 0x001FFFF0u;
    // GL objects are created later, on the frame worker that owns the context.
    if (draw.framebuffer_stride != 0u || target == s.display_framebuffer) {
        const std::uint32_t logical_width = target == s.display_framebuffer
            ? s.display_logical_width
            : std::max<std::uint32_t>(1u, draw.framebuffer_stride != 0u
                  ? draw.framebuffer_stride
                  : static_cast<std::uint32_t>(std::max(1, draw.scissor_x1 + 1)));
        const std::uint32_t logical_height = target == s.display_framebuffer
            ? s.display_logical_height
            : static_cast<std::uint32_t>(std::max(1, draw.scissor_y1 + 1));
        remember_target(s, target, logical_width, logical_height);
    }
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &, const std::array<float, 16> &,
                                   const std::array<float, 6> &, const std::array<float, 3> &,
                                   const GeGpuDrawDescriptor &, std::uint32_t) noexcept {}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex> vertices) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled) return false;
    ++s.report.staged_draw_calls;
    s.report.staged_vertices += vertices.size();
    s.report.staged_bytes += vertices.size_bytes();
    return true;
}

bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled || !draw.texture_enabled || draw.texture_format > 10u || draw.texture_width == 0u ||
        draw.texture_height == 0u)
        return false;
    if (find_target(s, draw.texture_address) != nullptr) {
        ++s.report.texture_cache_hits;
        return false;
    }
    ++s.report.texture_decode_requests;
    const auto found = s.textures.find(texture_key(draw));
    if (found == s.textures.end()) return true;
    found->second.signature_epoch = s.frame_epoch;
    found->second.last_used_epoch = s.frame_epoch;
    if (draw.texture_content_signature != 0u &&
        found->second.descriptor.texture_content_signature != draw.texture_content_signature)
        return true;
    ++s.report.texture_cache_hits;
    return false;
}

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled) {
        draw.texture_cache_key_hint = 0u;
        draw.texture_image_key_hint = 0u;
        return;
    }
    const std::uint64_t key = texture_key(draw);
    draw.texture_cache_key_hint = key;
    draw.texture_image_key_hint = key;
}

bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled || !draw.texture_enabled || draw.texture_width == 0u || draw.texture_height == 0u) return false;
    if (find_target(s, draw.texture_address) != nullptr) return false;
    const auto found = s.textures.find(texture_key(draw));
    return found == s.textures.end() || found->second.signature_epoch != s.frame_epoch;
}

bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &draw) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return s.enabled && draw.texture_enabled && find_target(s, draw.texture_address) != nullptr;
}

GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &draw) noexcept {
    GeGpuWidescreenHud hud{};
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled) return hud;
    const LcsConfiguration &config = lcs_render_configuration();
    if (!config.initialized || !config.widescreen.enabled) return hud;
    const float shrink = widescreen_render_stretch();
    if (!std::isfinite(shrink) || shrink <= 0.0f || std::abs(shrink - 1.0f) < 1.0e-5f) return hud;
    std::uint32_t logical_width = kReferenceWidth;
    if (const Target *target = find_target(s, draw.framebuffer_address))
        logical_width = std::max<std::uint32_t>(1u, target->logical_width);
    hud.shrink = shrink;
    hud.display_scale_x = static_cast<float>(kReferenceWidth) / static_cast<float>(logical_width);
    hud.source_center = static_cast<float>(logical_width) * 0.5f;
    return hud;
}

void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }

bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return texture_ready(s, draw);
}

bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height, std::span<const std::byte> rgba) noexcept {
    if (rgba.empty()) return false;
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return prepare_texture(s, draw, width, height, 1u, std::vector<std::byte>(rgba.begin(), rgba.end()));
}

bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &draw,
                                                 std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    if (levels.empty() || levels.size() > 8u || levels.front().width == 0u || levels.front().height == 0u)
        return false;
    std::vector<std::byte> packed;
    const std::uint32_t width = levels.front().width;
    const std::uint32_t height = levels.front().height;
    for (const GeGpuDecodedMipLevel &level : levels) {
        const std::size_t bytes = static_cast<std::size_t>(level.width) * level.height * 4u;
        if (level.rgba8.size() != bytes) return false;
        packed.insert(packed.end(), level.rgba8.begin(), level.rgba8.end());
    }
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return prepare_texture(s, draw, width, height, static_cast<std::uint32_t>(levels.size()), std::move(packed));
}

bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                                        std::uint32_t height, std::uint32_t mip_levels,
                                                        std::vector<std::byte> packed) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return prepare_texture(s, draw, width, height, mip_levels, std::move(packed));
}

bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte> destination) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (s.last_texture_rgba.empty() || destination.size() < s.last_texture_rgba.size()) return false;
    std::memcpy(destination.data(), s.last_texture_rgba.data(), s.last_texture_rgba.size());
    return true;
}

void ge_gpu_backend_accumulate_color_triangles(const GeGpuDrawDescriptor &draw,
                                               std::span<const GeGpuVertex> triangle_vertices) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled || triangle_vertices.empty() || triangle_vertices.size() % 3u != 0u) return;
    const std::size_t used = s.vertices.size() * sizeof(UploadVertex) + s.indices.size() * sizeof(std::uint32_t);
    if (used + triangle_vertices.size() * sizeof(UploadVertex) > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return;
    }
    const bool sampled = texture_ready(s, draw);
    const std::uint32_t first = static_cast<std::uint32_t>(s.vertices.size());
    for (const GeGpuVertex &source : triangle_vertices) {
        UploadVertex vertex = make_upload_vertex(source);
        if (sampled && draw.texture_width != 0u && draw.texture_height != 0u) {
            vertex.u /= static_cast<float>(draw.texture_width);
            vertex.v /= static_cast<float>(draw.texture_height);
        }
        s.vertices.push_back(vertex);
    }
    Batch batch{};
    batch.draw = draw;
    batch.first_vertex = first;
    batch.vertex_count = static_cast<std::uint32_t>(triangle_vertices.size());
    batch.feedback_address = draw.texture_address & 0x001FFFF0u;
    batch.framebuffer_feedback = draw.texture_enabled && find_target(s, batch.feedback_address) != nullptr;
    s.batches.push_back(batch);
    ++s.report.game_draw_calls;
    s.report.game_triangles += triangle_vertices.size() / 3u;
    s.report.game_vertices += triangle_vertices.size();
    if (draw.texture_enabled && sampled) ++s.report.textured_game_draw_calls;
    else if (draw.texture_enabled) ++s.report.game_textured_draws_without_texture;
}

void ge_gpu_backend_accumulate_hardware_triangles(const GeGpuDrawDescriptor &draw,
                                                  const GeGpuHardwareTransform &transform,
                                                  std::span<const GeGpuVertex> vertices,
                                                  std::span<const std::uint32_t> triangle_indices) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled || vertices.empty()) return;
    const bool indexed = !triangle_indices.empty();
    const std::size_t emitted = indexed ? triangle_indices.size() : vertices.size();
    if (emitted == 0u || (transform.primitive == 4u ? emitted < 3u : (emitted % 3u) != 0u)) return;
    const std::size_t append = indexed ? vertices.size() : emitted;
    const std::size_t extra_indices = indexed ? triangle_indices.size() : 0u;
    const std::size_t used = s.vertices.size() * sizeof(UploadVertex) + s.indices.size() * sizeof(std::uint32_t);
    if (used + append * sizeof(UploadVertex) + extra_indices * sizeof(std::uint32_t) > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return;
    }
    const std::uint32_t first_vertex = static_cast<std::uint32_t>(s.vertices.size());
    const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());
    if (indexed) {
        for (const GeGpuVertex &source : vertices) s.vertices.push_back(make_upload_vertex(source));
        for (std::uint32_t index : triangle_indices) {
            if (index >= vertices.size()) {
                s.vertices.resize(first_vertex);
                ++s.report.game_vertex_overflows;
                return;
            }
            s.indices.push_back(index);
        }
    } else {
        for (const GeGpuVertex &source : vertices) s.vertices.push_back(make_upload_vertex(source));
    }
    const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
    Batch batch{};
    batch.draw = draw;
    batch.first_vertex = first_vertex;
    batch.vertex_count = static_cast<std::uint32_t>(append);
    batch.first_index = first_index;
    batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
    batch.indexed = indexed;
    batch.logical_draw_count = logical;
    batch.hardware_transform = true;
    batch.transform = transform;
    batch.feedback_address = draw.texture_address & 0x001FFFF0u;
    batch.framebuffer_feedback = draw.texture_enabled && find_target(s, batch.feedback_address) != nullptr;
    s.batches.push_back(batch);
    s.report.game_draw_calls += logical;
    s.report.game_triangles += transform.primitive == 4u ? (emitted > 2u ? emitted - 2u : 0u) : emitted / 3u;
    s.report.game_vertices += emitted;
    s.report.hw_transform_draw_calls += logical;
    s.report.hw_transform_vertices += vertices.size();
    const bool sampled = texture_ready(s, draw);
    if (draw.texture_enabled && sampled) s.report.textured_game_draw_calls += logical;
    else if (draw.texture_enabled) s.report.game_textured_draws_without_texture += logical;
}

bool ge_gpu_backend_accumulate_hardware_packed_0115(const GeGpuDrawDescriptor &draw,
                                                    const GeGpuHardwareTransform &transform,
                                                    std::span<const std::byte> packed_vertices,
                                                    std::uint32_t vertex_count,
                                                    std::span<const std::uint32_t> triangle_indices) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (!s.enabled || vertex_count == 0u ||
        packed_vertices.size() != static_cast<std::size_t>(vertex_count) * sizeof(Packed0115))
        return false;
    std::vector<GeGpuVertex> decoded(vertex_count);
    for (std::uint32_t index = 0u; index < vertex_count; ++index) {
        Packed0115 packed{};
        std::memcpy(&packed, packed_vertices.data() + static_cast<std::size_t>(index) * sizeof(Packed0115),
                    sizeof(Packed0115));
        const UploadVertex upload = decode_packed(packed);
        GeGpuVertex vertex{};
        vertex.x = upload.x;
        vertex.y = upload.y;
        vertex.z = upload.z;
        vertex.w = upload.w;
        vertex.rgba = upload.rgba;
        vertex.u = upload.u;
        vertex.v = upload.v;
        vertex.q = upload.q;
        vertex.fog_factor = upload.fog_factor;
        decoded[index] = vertex;
    }
    s.mutex.unlock();
    ge_gpu_backend_accumulate_hardware_triangles(draw, transform, decoded, triangle_indices);
    s.mutex.lock();
    return true;
}

void ge_gpu_backend_set_native_window(void *) noexcept {}

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address, std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    s.display_framebuffer = address & 0x001FFFF0u;
    s.display_logical_width = logical_width != 0u ? logical_width : kReferenceWidth;
    s.display_logical_height = logical_height != 0u ? logical_height : kReferenceHeight;
    if (!s.enabled) return;
    remember_target(s, s.display_framebuffer, s.display_logical_width, s.display_logical_height);
}

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    const GLState &s = state();
    width = s.display_logical_width;
    height = s.display_logical_height;
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    const bool publish = ge_finish_shows_this_frame();
    if (!s.enabled || !s.context_ready || !make_current(s)) {
        s.vertices.clear();
        s.indices.clear();
        s.batches.clear();
        ++s.frame_epoch;
        return false;
    }
    flush_retired_textures(s);
    const bool had_batches = !s.batches.empty();
    if (had_batches) replay_batches(s);
    bool shown = false;
    if (publish) {
        if (Target *display = find_target(s, s.display_framebuffer);
            display != nullptr && display->color.texture != 0u &&
            (had_batches || display->last_render_epoch != 0u)) {
            shown = read_display(s, *display);
            s.report.presented_framebuffer_target = s.display_framebuffer;
            s.report.offscreen_width = s.readback_width;
            s.report.offscreen_height = s.readback_height;
            s.report.game_frame_readback_bytes = s.frame_rgba.size();
        }
        ++s.report.game_frames;
        s.report.game_frame_vblank = vblank;
    }
    s.vertices.clear();
    s.indices.clear();
    s.batches.clear();
    s.current_target = nullptr;
    ++s.frame_epoch;
    release_context(s);
    return shown;
}

bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    if (s.frame_rgba.empty() || destination.size() < s.frame_rgba.size()) return false;
    std::memcpy(destination.data(), s.frame_rgba.data(), s.frame_rgba.size());
    return true;
}

bool ge_gpu_backend_presents_directly() noexcept { return false; }

std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    const GLState &s = state();
    return s.enabled ? s.display_framebuffer : 0u;
}

std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }

std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    const GLState &s = state();
    return s.frame_rgba.empty() ? std::span<const std::byte>{}
                                : std::span<const std::byte>(s.frame_rgba.data(), s.frame_rgba.size());
}

bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    return ge_gpu_backend_copy_game_frame_rgba(destination);
}

void ge_gpu_backend_mark_window_presented() noexcept {
    state().report.gpu_frame_presented_to_window = true;
}

GeGpuBackendReport ge_gpu_backend_report() {
    GLState &s = state();
    std::lock_guard<std::recursive_mutex> lock(s.mutex);
    return s.report;
}

}  // namespace lcs

#endif
