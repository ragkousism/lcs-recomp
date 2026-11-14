#include "gl_core.hpp"

#include <cstdint>
#include <string>

namespace lcs::gl {

PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
PFNGLBUFFERDATAPROC glBufferData = nullptr;
PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = nullptr;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = nullptr;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = nullptr;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = nullptr;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = nullptr;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = nullptr;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = nullptr;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = nullptr;
PFNGLGENTEXTURESPROC glGenTextures = nullptr;
PFNGLBINDTEXTUREPROC glBindTexture = nullptr;
PFNGLTEXIMAGE2DPROC glTexImage2D = nullptr;
PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = nullptr;
PFNGLTEXPARAMETERIPROC glTexParameteri = nullptr;
PFNGLDELETETEXTURESPROC glDeleteTextures = nullptr;
PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = nullptr;
PFNGLPIXELSTOREIPROC glPixelStorei = nullptr;
PFNGLREADPIXELSPROC glReadPixels = nullptr;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = nullptr;
PFNGLCREATESHADERPROC glCreateShader = nullptr;
PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
PFNGLDELETESHADERPROC glDeleteShader = nullptr;
PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
PFNGLATTACHSHADERPROC glAttachShader = nullptr;
PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = nullptr;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = nullptr;
PFNGLBINDBUFFERBASEPROC glBindBufferBase = nullptr;
PFNGLUNIFORM1IPROC glUniform1i = nullptr;
PFNGLDRAWELEMENTSPROC glDrawElements = nullptr;
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = nullptr;
PFNGLDRAWARRAYSPROC glDrawArrays = nullptr;
PFNGLGENSAMPLERSPROC glGenSamplers = nullptr;
PFNGLDELETESAMPLERSPROC glDeleteSamplers = nullptr;
PFNGLBINDSAMPLERPROC glBindSampler = nullptr;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = nullptr;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = nullptr;
PFNGLENABLEPROC glEnable = nullptr;
PFNGLDISABLEPROC glDisable = nullptr;
PFNGLVIEWPORTPROC glViewport = nullptr;
PFNGLSCISSORPROC glScissor = nullptr;
PFNGLCLEARPROC glClear = nullptr;
PFNGLCLEARCOLORPROC glClearColor = nullptr;
PFNGLCLEARDEPTHPROC glClearDepth = nullptr;
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
PFNGLBLENDCOLORPROC glBlendColor = nullptr;
PFNGLDEPTHFUNCPROC glDepthFunc = nullptr;
PFNGLDEPTHMASKPROC glDepthMask = nullptr;
PFNGLCOLORMASKPROC glColorMask = nullptr;
PFNGLCULLFACEPROC glCullFace = nullptr;
PFNGLFRONTFACEPROC glFrontFace = nullptr;
PFNGLGETERRORPROC glGetError = nullptr;
PFNGLGETINTEGERVPROC glGetIntegerv = nullptr;
PFNGLGETFLOATVPROC glGetFloatv = nullptr;
PFNGLGETSTRINGPROC glGetString = nullptr;

bool load_gl(GetProc get_proc, std::string &error) {
    if (get_proc == nullptr) {
        error = "OpenGL loader is missing";
        return false;
    }
#define L(name, dest)                                                                                        \
    do {                                                                                                     \
        void *raw = get_proc(name);                                                                          \
        if (raw == nullptr || raw == reinterpret_cast<void *>(1) || raw == reinterpret_cast<void *>(2) ||    \
            raw == reinterpret_cast<void *>(3) || raw == reinterpret_cast<void *>(static_cast<intptr_t>(-1))) { \
            error = std::string("OpenGL entry missing: ") + name;                                            \
            return false;                                                                                    \
        }                                                                                                    \
        dest = reinterpret_cast<decltype(dest)>(raw);                                                        \
    } while (0)
    L("glGenBuffers", glGenBuffers);
    L("glBindBuffer", glBindBuffer);
    L("glBufferData", glBufferData);
    L("glBufferSubData", glBufferSubData);
    L("glDeleteBuffers", glDeleteBuffers);
    L("glGenVertexArrays", glGenVertexArrays);
    L("glBindVertexArray", glBindVertexArray);
    L("glDeleteVertexArrays", glDeleteVertexArrays);
    L("glEnableVertexAttribArray", glEnableVertexAttribArray);
    L("glVertexAttribPointer", glVertexAttribPointer);
    L("glGenFramebuffers", glGenFramebuffers);
    L("glBindFramebuffer", glBindFramebuffer);
    L("glFramebufferTexture2D", glFramebufferTexture2D);
    L("glCheckFramebufferStatus", glCheckFramebufferStatus);
    L("glDeleteFramebuffers", glDeleteFramebuffers);
    L("glGenRenderbuffers", glGenRenderbuffers);
    L("glBindRenderbuffer", glBindRenderbuffer);
    L("glRenderbufferStorage", glRenderbufferStorage);
    L("glFramebufferRenderbuffer", glFramebufferRenderbuffer);
    L("glDeleteRenderbuffers", glDeleteRenderbuffers);
    L("glGenTextures", glGenTextures);
    L("glBindTexture", glBindTexture);
    L("glTexImage2D", glTexImage2D);
    L("glTexSubImage2D", glTexSubImage2D);
    L("glTexParameteri", glTexParameteri);
    L("glDeleteTextures", glDeleteTextures);
    L("glActiveTexture", glActiveTexture);
    L("glCopyTexSubImage2D", glCopyTexSubImage2D);
    L("glPixelStorei", glPixelStorei);
    L("glReadPixels", glReadPixels);
    L("glBlitFramebuffer", glBlitFramebuffer);
    L("glCreateShader", glCreateShader);
    L("glShaderSource", glShaderSource);
    L("glCompileShader", glCompileShader);
    L("glGetShaderiv", glGetShaderiv);
    L("glGetShaderInfoLog", glGetShaderInfoLog);
    L("glDeleteShader", glDeleteShader);
    L("glCreateProgram", glCreateProgram);
    L("glAttachShader", glAttachShader);
    L("glLinkProgram", glLinkProgram);
    L("glGetProgramiv", glGetProgramiv);
    L("glGetProgramInfoLog", glGetProgramInfoLog);
    L("glDeleteProgram", glDeleteProgram);
    L("glUseProgram", glUseProgram);
    L("glGetUniformLocation", glGetUniformLocation);
    L("glGetUniformBlockIndex", glGetUniformBlockIndex);
    L("glUniformBlockBinding", glUniformBlockBinding);
    L("glBindBufferBase", glBindBufferBase);
    L("glUniform1i", glUniform1i);
    L("glDrawElements", glDrawElements);
    L("glDrawElementsBaseVertex", glDrawElementsBaseVertex);
    L("glDrawArrays", glDrawArrays);
    L("glGenSamplers", glGenSamplers);
    L("glDeleteSamplers", glDeleteSamplers);
    L("glBindSampler", glBindSampler);
    L("glSamplerParameteri", glSamplerParameteri);
    L("glSamplerParameterf", glSamplerParameterf);
    L("glEnable", glEnable);
    L("glDisable", glDisable);
    L("glViewport", glViewport);
    L("glScissor", glScissor);
    L("glClear", glClear);
    L("glClearColor", glClearColor);
    L("glClearDepth", glClearDepth);
    L("glBlendFuncSeparate", glBlendFuncSeparate);
    L("glBlendColor", glBlendColor);
    L("glDepthFunc", glDepthFunc);
    L("glDepthMask", glDepthMask);
    L("glColorMask", glColorMask);
    L("glCullFace", glCullFace);
    L("glFrontFace", glFrontFace);
    L("glGetError", glGetError);
    L("glGetIntegerv", glGetIntegerv);
    L("glGetFloatv", glGetFloatv);
    L("glGetString", glGetString);
#undef L
    return true;
}

}  // namespace lcs::gl
