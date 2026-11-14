#pragma once

namespace lcs {

inline const char *kGLGeVertexShader = R"GLSL(
#version 330 core
layout(location = 0) in vec4 inPosition;
layout(location = 1) in vec4 inColor;
layout(location = 2) in vec2 inUv;
layout(location = 3) in float inQ;
layout(location = 4) in float inFog;

out vec4 vColor;
out vec2 vUv;
out float vQ;
out float vFog;

layout(std140) uniform DrawUniforms {
    vec4 row0;
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 viewZ;
    vec4 uvScaleOffset;
    vec4 fogParameters;
    uvec4 control;
    vec4 colorMul;
    vec4 colorAdd;
    uvec4 pixel0;
    uvec4 pixel1;
};

void main() {
    vec4 position;
    vec2 uv;
    float fog;
    if (control.x == 1u) {
        vec4 p = inPosition;
        float clipW = dot(row3, p);
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        float clipZ = dot(row2, p);
        if (control.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
        position = vec4(dot(row0, p), dot(row1, p), clipZ, clipW);
        uv = inUv * uvScaleOffset.xy + uvScaleOffset.zw;
        float viewZ = dot(viewZ, p);
        fog = clamp((viewZ + fogParameters.x) * fogParameters.y, 0.0, 1.0);
    } else if (control.x == 2u) {
        float clipW = inPosition.w;
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        position = vec4(
            (inPosition.x * uvScaleOffset.x - 1.0) * clipW,
            (1.0 - inPosition.y * uvScaleOffset.y) * clipW,
            clamp(inPosition.z * uvScaleOffset.z, 0.0, 1.0) * clipW,
            clipW);
        uv = inUv;
        fog = inFog;
    } else {
        position = inPosition;
        uv = inUv;
        fog = inFog;
    }
    vec4 color = inColor;
    if (control.z != 0u) {
        vec4 lit = clamp(color * colorMul + colorAdd, 0.0, 1.0);
        color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    // Uniforms use Vulkan clip Z, [0, w]. GL clips to [-w, w].
    position.z = position.z * 2.0 - position.w;
    gl_Position = position;
    vColor = color;
    vUv = uv;
    vQ = inQ;
    vFog = fog;
}
)GLSL";

inline const char *kGLGeFragmentShader = R"GLSL(
#version 330 core
in vec4 vColor;
in vec2 vUv;
in float vQ;
in float vFog;
out vec4 outColor;

layout(std140) uniform DrawUniforms {
    vec4 row0;
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 viewZ;
    vec4 uvScaleOffset;
    vec4 fogParameters;
    uvec4 control;
    vec4 colorMul;
    vec4 colorAdd;
    uvec4 pixel0;
    uvec4 pixel1;
};

uniform sampler2D sourceTexture;

bool alphaPass(uint fn, uint lhs, uint rhs) {
    if (fn == 0u) return false;
    if (fn == 1u) return true;
    if (fn == 2u) return lhs == rhs;
    if (fn == 3u) return lhs != rhs;
    if (fn == 4u) return lhs < rhs;
    if (fn == 5u) return lhs <= rhs;
    if (fn == 6u) return lhs > rhs;
    if (fn == 7u) return lhs >= rhs;
    return true;
}
vec4 applyTextureFunction(vec4 vertex, vec4 texel, uvec4 control, uvec4 envBytes) {
    uint fn = control.x & 7u;
    bool useAlpha = control.y != 0u;
    bool doubleColor = control.z != 0u;
    vec4 result = vertex;
    vec3 env = vec3(envBytes.xyz) / 255.0;
    if (fn == 0u) {
        result.rgb = vertex.rgb * texel.rgb;
        result.a = useAlpha ? vertex.a * texel.a : vertex.a;
    } else if (fn == 1u) {
        float a = useAlpha ? texel.a : 1.0;
        result.rgb = mix(vertex.rgb, texel.rgb, a);
        result.a = vertex.a;
    } else if (fn == 2u) {
        result.rgb = mix(vertex.rgb, env, texel.rgb);
        result.a = useAlpha ? vertex.a * texel.a : vertex.a;
    } else if (fn == 3u) {
        result = texel;
        if (!useAlpha) result.a = vertex.a;
    } else if (fn == 4u) {
        result.rgb = clamp(vertex.rgb + texel.rgb, 0.0, 1.0);
        result.a = useAlpha ? vertex.a * texel.a : vertex.a;
    }
    if (doubleColor) result.rgb = clamp(result.rgb * 2.0, 0.0, 1.0);
    return result;
}
float quantize(float value, float levels) {
    return floor(clamp(value, 0.0, 1.0) * levels + 0.5) / levels;
}
vec4 quantizeFramebuffer(vec4 color, uint format) {
    color = clamp(color, 0.0, 1.0);
    uint kind = format & 3u;
    if (kind == 0u) {
        color.r = quantize(color.r, 31.0);
        color.g = quantize(color.g, 63.0);
        color.b = quantize(color.b, 31.0);
        color.a = 1.0;
    } else if (kind == 1u) {
        color.r = quantize(color.r, 31.0);
        color.g = quantize(color.g, 31.0);
        color.b = quantize(color.b, 31.0);
        color.a = color.a >= 0.5 ? 1.0 : 0.0;
    } else if (kind == 2u) {
        color.r = quantize(color.r, 15.0);
        color.g = quantize(color.g, 15.0);
        color.b = quantize(color.b, 15.0);
        color.a = quantize(color.a, 15.0);
    }
    return color;
}
void main() {
    uvec4 textureControl = uvec4(pixel0.y & 0xFFu, (pixel0.y >> 8u) & 0xFFu, (pixel0.y >> 16u) & 0xFFu, (pixel0.y >> 24u) & 0xFFu);
    uvec4 textureEnv = uvec4(pixel0.z & 0xFFu, (pixel0.z >> 8u) & 0xFFu, (pixel0.z >> 16u) & 0xFFu, 0u);
    uvec4 fogControl = uvec4(pixel0.w & 0xFFu, (pixel0.w >> 8u) & 0xFFu, (pixel0.w >> 16u) & 0xFFu, (pixel0.w >> 24u) & 0xFFu);
    uvec4 alphaControl = uvec4(pixel0.x & 0xFFu, (pixel0.x >> 8u) & 0xFFu, (pixel0.x >> 16u) & 0xFFu, (pixel0.x >> 24u) & 0xFFu);
    vec4 color = clamp(vColor, 0.0, 1.0);
    if (textureControl.w != 0u) {
        float q = abs(vQ) < 1.0e-20 ? 1.0 : vQ;
        vec2 uv = vUv / q;
        // FBO copies are bottom-up. PSP v=0 is the top row.
        if (pixel1.y != 0u) uv.y = 1.0 - uv.y;
        vec4 texel = texture(sourceTexture, uv);
        color = applyTextureFunction(color, texel, textureControl, textureEnv);
    }
    if (fogControl.w != 0u) {
        vec3 fog = vec3(fogControl.xyz) / 255.0;
        color.rgb = mix(fog, color.rgb, clamp(vFog, 0.0, 1.0));
    }
    if (alphaControl.x != 0u) {
        uint a = uint(floor(clamp(color.a, 0.0, 1.0) * 255.0 + 0.5));
        uint mask = alphaControl.w;
        if (!alphaPass(alphaControl.y, a & mask, alphaControl.z & mask)) discard;
    }
    outColor = quantizeFramebuffer(color, pixel1.x);
}
)GLSL";

inline const char *kGLPresentVertexShader = R"GLSL(
#version 330 core
layout(location = 0) in vec2 inPos;
layout(location = 1) in vec2 inUv;
out vec2 vUv;
void main() {
    vUv = inUv;
    gl_Position = vec4(inPos, 0.0, 1.0);
}
)GLSL";

inline const char *kGLPresentFragmentShader = R"GLSL(
#version 330 core
in vec2 vUv;
out vec4 outColor;
uniform sampler2D presentTexture;
void main() {
    outColor = texture(presentTexture, vUv);
}
)GLSL";

}
