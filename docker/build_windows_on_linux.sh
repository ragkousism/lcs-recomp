#!/usr/bin/env bash
set -euo pipefail

script_dir=$(cd "$(dirname "$0")" && pwd)
cd "$script_dir"

usage() {
	echo "Usage: $0 [dx12|opengl]" >&2
	echo "  dx12    DirectX12 backend (default)" >&2
	echo "  opengl  OpenGL 3.3 backend (for Bay Trail, no DX12/Vulkan)" >&2
}

backend="dx12"
if [[ $# -gt 1 ]]; then
	usage
	exit 1
fi
if [[ $# -eq 1 ]]; then
	case "${1,,}" in
		dx12|directx12|d3d12|default) backend="dx12" ;;
		opengl|gl|gl33|open-gl) backend="opengl" ;;
		-h|--help|help) usage; exit 0 ;;
		*) echo "Unknown backend: $1" >&2; usage; exit 1 ;;
	esac
fi

if [ ! -d "ccache-windows" ]; then
	mkdir "ccache-windows"
fi
export HOST_UID="$(id -u)"
export HOST_GID="$(id -g)"

if [[ "$backend" == "opengl" ]]; then
	export LCS_OPENGL_GE_BACKEND=ON
	export LCS_WINDOWS_OUT=lcs-windows-opengl
	echo "Building Windows with the OpenGL 3.3 GE into out/lcs-windows-opengl" >&2
else
	export LCS_OPENGL_GE_BACKEND=OFF
	export LCS_WINDOWS_OUT=lcs-windows
	echo "Building Windows with the DirectX 12 GE into out/lcs-windows" >&2
fi

if docker info >/dev/null 2>&1; then
	docker compose run --rm --build \
		-e LCS_OPENGL_GE_BACKEND -e LCS_WINDOWS_OUT build-windows
else
	sudo --preserve-env=HOST_UID,HOST_GID,LCS_OPENGL_GE_BACKEND,LCS_WINDOWS_OUT \
		docker compose run --rm --build \
		-e LCS_OPENGL_GE_BACKEND -e LCS_WINDOWS_OUT build-windows
fi

# The exe looks for game/ in its working directory. Saves live under that tree.
repo=$(cd "$script_dir/.." && pwd)
game="$repo/lcs/game"
dest_dir="$repo/out/${LCS_WINDOWS_OUT}/lcs"
link="$dest_dir/game"
target="../../../lcs/game"

if [[ ! -f "$game/EBOOT.ELF" ]]; then
	echo "Game root $game has no EBOOT.ELF" >&2
	exit 1
fi

mkdir -p "$dest_dir"

if [[ -L "$link" ]]; then
	current=$(readlink "$link")
	if [[ "$current" != "$target" ]]; then
		rm "$link"
		ln -s "$target" "$link"
		echo "Shared $link -> $target"
	else
		echo "Already shared: $link -> $target"
	fi
elif [[ -e "$link" ]]; then
	echo "$link exists and is not a symlink" >&2
	exit 1
else
	ln -s "$target" "$link"
	echo "Shared $link -> $target"
fi

if [[ "$backend" == "opengl" ]]; then
	echo "Play: ./docker/play_windows_on_linux.sh opengl" >&2
else
	echo "Play: ./docker/play_windows_on_linux.sh" >&2
fi
