#!/usr/bin/env bash
# Native Linux build. Vulkan and OpenGL are both in out/lcs-linux.
# Rendering.Backend in lcs/config/LCSNative.ini chooses. LCS_GE_BACKEND overrides one run.
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)

usage() {
    echo "Usage: $0" >&2
    echo "Builds Vulkan and OpenGL into out/lcs-linux." >&2
    echo "Set Rendering.Backend in lcs/config/LCSNative.ini." >&2
}

if [[ $# -gt 1 ]]; then
    usage
    exit 1
fi
if [[ $# -eq 1 ]]; then
    case "${1,,}" in
        vulkan|vk|opengl|gl|gl3|gl33|default)
            echo "Vulkan and OpenGL are both in this build. Set Rendering.Backend in lcs/config/LCSNative.ini." >&2
            ;;
        -h|--help|help) usage; exit 0 ;;
        *) echo "Unknown argument: $1" >&2; usage; exit 1 ;;
    esac
fi

build="$repo/out/lcs-linux"
cmake -S "$repo" -B "$build" -G Ninja -DCMAKE_BUILD_TYPE=Release
ninja -C "$build" LCSNative
