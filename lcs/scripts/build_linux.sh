#!/usr/bin/env bash
# Native Linux build.
#   build_linux.sh            Vulkan GE -> out/lcs-linux
#   build_linux.sh vulkan     Vulkan GE -> out/lcs-linux
#   build_linux.sh opengl     OpenGL 3.3 GE -> out/lcs-linux-opengl
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)

usage() {
    echo "Usage: $0 [vulkan|opengl]" >&2
    echo "  vulkan  Vulkan GE (default), output out/lcs-linux" >&2
    echo "  opengl  OpenGL 3.3 GE, output out/lcs-linux-opengl" >&2
}

backend="vulkan"
if [[ $# -gt 1 ]]; then
    usage
    exit 1
fi
if [[ $# -eq 1 ]]; then
    case "${1,,}" in
        vulkan|vk|default) backend="vulkan" ;;
        opengl|gl|gl3|gl33) backend="opengl" ;;
        -h|--help|help) usage; exit 0 ;;
        *) echo "Unknown backend: $1" >&2; usage; exit 1 ;;
    esac
fi

if [[ "$backend" == "opengl" ]]; then
    build="$repo/out/lcs-linux-opengl"
    flag="ON"
else
    build="$repo/out/lcs-linux"
    flag="OFF"
fi
cmake -S "$repo" -B "$build" -G Ninja -DCMAKE_BUILD_TYPE=Release -DLCS_OPENGL_GE_BACKEND="$flag"
ninja -C "$build" LCSNative
