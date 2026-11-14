#!/usr/bin/env bash
set -euo pipefail

script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/.." && pwd)

backend=""
if [[ $# -gt 0 ]]; then
	case "${1,,}" in
		opengl|gl|gl3|gl33) backend="opengl"; shift ;;
		dx12|directx12|d3d12) backend="dx12"; shift ;;
	esac
fi

exe_dir="$repo/out/lcs-windows/lcs"
build_hint="docker/build_windows_on_linux.sh"
# One exe contains DirectX 12 and OpenGL. The argument overrides Rendering.Backend for this run.
case "$backend" in
	opengl)
		export LCS_GE_BACKEND=opengl
		;;
	dx12)
		export LCS_GE_BACKEND=directx12
		;;
esac
exe="$exe_dir/LCSNative.exe"
config="$repo/lcs/config/LCSNative.ini"

if [[ ! -f "$exe" ]]; then
	echo "LCSNative.exe not found at $exe" >&2
	echo "Build it first: $build_hint" >&2
	exit 1
fi
if [[ ! -f "$exe_dir/game/EBOOT.ELF" ]]; then
	echo "Game root $exe_dir/game has no EBOOT.ELF" >&2
	exit 1
fi
# winepath starts the Wine server. A server started with DISPLAY set stays on
# X11, and the game window then never maps.
if [[ -z "${PSPRECOMP_CONFIG:-}" ]]; then
	if [[ ! -f "$config" ]]; then
		echo "Config not found at $config" >&2
		exit 1
	fi
	PSPRECOMP_CONFIG="Z:${config//\//\\}"
elif [[ "$PSPRECOMP_CONFIG" == /* ]]; then
	PSPRECOMP_CONFIG="Z:${PSPRECOMP_CONFIG//\//\\}"
fi

if server_pid=$(pgrep -x wineserver | head -1); [[ -n "${server_pid:-}" ]]; then
	if tr '\0' '\n' < "/proc/${server_pid}/environ" | grep -q '^DISPLAY='; then
		echo "Stopping the existing Wine server so the window opens on Wayland." >&2
		wineserver -k || true
		for _ in 1 2 3 4 5 6 7 8 9 10; do
			pgrep -x wineserver >/dev/null || break
			sleep 0.2
		done
	fi
fi

cd "$exe_dir"
echo "Running: wine $exe $*"
echo "Launching. The window is titled \"LCSNative - GTA: Liberty City Stories\"."
# vkd3d packs this root signature into 264 bytes; Vulkan push constants stop at 256.
case ",${VKD3D_CONFIG:-}," in
	*,virtual_heaps,*) ;;
	*)
		if [[ -n "${VKD3D_CONFIG:-}" ]]; then
			VKD3D_CONFIG="${VKD3D_CONFIG},virtual_heaps"
		else
			VKD3D_CONFIG=virtual_heaps
		fi
		;;
esac
# DISPLAY set makes Wine present through XWayland, which aborts in XCB.
if [[ -n "${LCS_GE_BACKEND:-}" ]]; then
	exec env -u DISPLAY VKD3D_CONFIG="$VKD3D_CONFIG" PSPRECOMP_CONFIG="$PSPRECOMP_CONFIG" \
		LCS_GE_BACKEND="$LCS_GE_BACKEND" wine "$exe" "$@"
fi
exec env -u DISPLAY VKD3D_CONFIG="$VKD3D_CONFIG" PSPRECOMP_CONFIG="$PSPRECOMP_CONFIG" wine "$exe" "$@"
