#version 450
layout(set = 0, binding = 0) uniform sampler2D image;
layout(push_constant) uniform PresentPush {
    uint opaque;
} push;
layout(location = 0) in vec2 uv;
layout(location = 0) out vec4 color;

void main() {
    vec4 texel = texture(image, uv);
    color = push.opaque != 0u ? vec4(texel.rgb, 1.0) : texel;
}
