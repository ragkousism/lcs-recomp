#!/usr/bin/env bash
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
lcs_dir=$(cd "$script_dir/.." && pwd)

backend=""
if [[ $# -gt 0 && "$1" != -* ]]; then
    case "${1,,}" in
        opengl|gl|gl3|gl33) backend="opengl"; shift ;;
        vulkan|vk) backend="vulkan"; shift ;;
        dx12|directx12|d3d12) backend="dx12"; shift ;;
    esac
fi

bin="$repo/out/lcs-linux/lcs/LCSNative"
build_hint="lcs/scripts/build_linux.sh"
case "$backend" in
    opengl)
        bin="$repo/out/lcs-linux-opengl/lcs/LCSNative"
        export LCS_GE_BACKEND=opengl
        build_hint="lcs/scripts/build_linux.sh opengl"
        ;;
    vulkan)
        export LCS_GE_BACKEND=vulkan
        ;;
    dx12)
        export LCS_GE_BACKEND=directx12
        ;;
esac

if [[ ! -x "$bin" ]]; then
    echo "LCSNative not found at $bin"
    echo "Build it first: $build_hint"
    exit 3
fi
game="$lcs_dir/game"
if [[ $# -gt 0 && "$1" != -* ]]; then
    game=$1
    shift
fi
if [[ ! -f "$game/EBOOT.ELF" ]]; then
    echo "Game root $game has no EBOOT.ELF"
    exit 4
fi
export PSPRECOMP_CONFIG="${PSPRECOMP_CONFIG:-$lcs_dir/config/LCSNative.ini}"
exec "$bin" --game "$game" "$@"
