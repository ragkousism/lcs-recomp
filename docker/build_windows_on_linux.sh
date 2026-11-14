#!/usr/bin/env bash
set -euo pipefail

script_dir=$(cd "$(dirname "$0")" && pwd)
cd "$script_dir"

usage() {
	echo "Usage: $0" >&2
	echo "Builds DirectX 12 and OpenGL into out/lcs-windows." >&2
	echo "Set Rendering.Backend in lcs/config/LCSNative.ini." >&2
}

if [[ $# -gt 1 ]]; then
	usage
	exit 1
fi
if [[ $# -eq 1 ]]; then
	case "${1,,}" in
		dx12|directx12|d3d12|opengl|gl|gl33|open-gl|default)
			echo "DirectX 12 and OpenGL are both in this build. Set Rendering.Backend in lcs/config/LCSNative.ini." >&2
			;;
		-h|--help|help) usage; exit 0 ;;
		*) echo "Unknown argument: $1" >&2; usage; exit 1 ;;
	esac
fi

if [ ! -d "ccache-windows" ]; then
	mkdir "ccache-windows"
fi
export HOST_UID="$(id -u)"
export HOST_GID="$(id -g)"

export LCS_WINDOWS_OUT=lcs-windows
echo "Building Windows with DirectX 12 and OpenGL into out/lcs-windows" >&2

if docker info >/dev/null 2>&1; then
	docker compose run --rm --build \
		-e LCS_WINDOWS_OUT build-windows
else
	sudo --preserve-env=HOST_UID,HOST_GID,LCS_WINDOWS_OUT \
		docker compose run --rm --build \
		-e LCS_WINDOWS_OUT build-windows
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

echo "Play: ./docker/play_windows_on_linux.sh" >&2
