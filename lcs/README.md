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
`scripts/play_linux.sh`. The default GPU path is
Vulkan. `scripts/build_linux.sh opengl` writes
`out/lcs-linux-opengl`, and `scripts/play_linux.sh opengl` runs it.
`BUILD_LCS.bat opengl` writes `out/lcs-clang-opengl`, and
`PLAY_LCS.bat opengl` runs it. From the repo root,
`./docker/play_windows_on_linux.sh opengl` runs the Windows OpenGL exe
under Wine: `wine out/lcs-windows-opengl/lcs/LCSNative.exe` when that
build exists, otherwise `wine out/lcs-windows/lcs/LCSNative.exe`.
`config/LCSNative.ini` keeps `Backend=DirectX12` because that
file is also the Windows configuration; on Linux the same value
selects Vulkan. `Backend=Vulkan` selects it by
name. `glslangValidator` compiles `host/vulkan/ge.vert` and
`host/vulkan/ge.frag` during the build. The same build compiles
`host/pack_font5x7.cpp`, which packs `host/font5x7.txt` into the F10
menu font. The Windows build does not run that step.

`config/LCSNative.ini` sets the window with `Display.ResolutionMode`
(`PSP`, `Scale`, `Custom`, `Desktop`) and the GE target with
`Rendering.InternalResolutionMode`. `Desktop` follows the monitor.
`Rendering.TextureLodBias` shifts mip selection.
