#!/usr/bin/env bash
set -euo pipefail

cd /src
out="${LCS_WINDOWS_OUT:-lcs-windows}"
case "$out" in
	lcs-windows|lcs-windows-opengl) ;;
	*)
		echo "Refusing output directory: $out" >&2
		exit 1
		;;
esac
if [[ "${LCS_OPENGL_GE_BACKEND:-}" == "1" || "${LCS_OPENGL_GE_BACKEND:-}" == "ON" ]]; then
	extra="-DLCS_OPENGL_GE_BACKEND=ON"
else
	extra="-DLCS_OPENGL_GE_BACKEND=OFF"
fi
cmake -S /src -B "/src/out/${out}" -G Ninja \
	-DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_TOOLCHAIN_FILE=/src/docker/windows-clang-cl.cmake \
	${extra}
ninja -C "/src/out/${out}" LCSNative
