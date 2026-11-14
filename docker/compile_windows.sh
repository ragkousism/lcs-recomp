#!/usr/bin/env bash
set -euo pipefail

cd /src
out="${LCS_WINDOWS_OUT:-lcs-windows}"
case "$out" in
	lcs-windows) ;;
	*)
		echo "Refusing output directory: $out" >&2
		exit 1
		;;
esac
cmake -S /src -B "/src/out/${out}" -G Ninja \
	-DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_TOOLCHAIN_FILE=/src/docker/windows-clang-cl.cmake
ninja -C "/src/out/${out}" LCSNative
