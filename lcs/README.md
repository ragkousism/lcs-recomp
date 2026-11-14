# GTA: Liberty City Stories

Targets the ULUS-10041 v1.05 PSP release.

```text
config/       LCSNative.ini
generated/    AOT C++ generated from the executable
host/         HLE, renderer, audio, input and game patches
scripts/      Build and run scripts
third_party/  Bundled dependencies
game/         Your game files; ignored by Git
progress/     Development history; ignored by Git
```

Linux builds with `scripts/build_linux.sh` and runs with
`scripts/play_linux.sh`. That binary contains Vulkan and OpenGL.
`Rendering.Backend` chooses. `Backend=DirectX12` selects Vulkan on
Linux and DirectX 12 on Windows. `Backend=OpenGL` selects OpenGL.
`scripts/play_linux.sh opengl` sets `LCS_GE_BACKEND` for one run.
`BUILD_LCS.bat` writes `out/lcs-clang` with DirectX 12 and OpenGL, and
`PLAY_LCS.bat` follows the ini. From the repo root,
`./docker/play_windows_on_linux.sh` runs
`wine out/lcs-windows/lcs/LCSNative.exe`. `glslangValidator` compiles `host/vulkan/ge.vert` and
`host/vulkan/ge.frag` during the build. The same build compiles
`host/pack_font5x7.cpp`, which packs `host/font5x7.txt` into the F10
menu font. The Windows build does not run that step.

`config/LCSNative.ini` sets the window with `Display.ResolutionMode`
(`PSP`, `Scale`, `Custom`, `Desktop`) and the GE target with
`Rendering.InternalResolutionMode`. `Desktop` follows the monitor.
`Rendering.TextureLodBias` shifts mip selection.
