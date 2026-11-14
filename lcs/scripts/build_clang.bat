@echo off
setlocal EnableExtensions
rem One build contains DirectX 12 and OpenGL. Rendering.Backend chooses.
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
if "%~1"=="" goto :args_ok
if /I "%~1"=="-h" goto :usage
if /I "%~1"=="--help" goto :usage
if /I "%~1"=="/?" goto :usage
if /I "%~1"=="help" goto :usage
if /I "%~1"=="dx12" goto :args_noted
if /I "%~1"=="directx12" goto :args_noted
if /I "%~1"=="d3d12" goto :args_noted
if /I "%~1"=="default" goto :args_noted
if /I "%~1"=="opengl" goto :args_noted
if /I "%~1"=="gl" goto :args_noted
if /I "%~1"=="gl3" goto :args_noted
if /I "%~1"=="gl33" goto :args_noted
echo Unknown argument: %~1
goto :usage_fail
:args_noted
echo DirectX 12 and OpenGL are both in this build. Set Rendering.Backend in lcs\config\LCSNative.ini.
:args_ok
if not "%~2"=="" (
  echo Unexpected argument: %~2
  goto :usage_fail
)
set "BUILD=%REPO%\out\lcs-clang"
set "LLVM=C:\Program Files\LLVM\bin"
rem CMake writes these paths into its cache verbatim, so they need forward slashes.
set "LLVM_FWD=C:/Program Files/LLVM/bin"

if not exist "%LLVM%\clang-cl.exe" (
  echo clang-cl not found at "%LLVM%".
  echo Install LLVM: winget install -e --id LLVM.LLVM
  pause
  exit /b 3
)
for /f "usebackq delims=" %%I in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -property installationPath`) do set "VS=%%I"
if not exist "%VS%\VC\Auxiliary\Build\vcvars64.bat" (
  echo No C++ toolset found. Install the "Desktop development with C++" workload:
  echo winget install -e --id Microsoft.VisualStudio.2022.BuildTools
  pause
  exit /b 4
)
call "%VS%\VC\Auxiliary\Build\vcvars64.bat" >nul || exit /b 4

echo Building DirectX 12 and OpenGL into out\lcs-clang
cmake -S "%REPO%" -B "%BUILD%" -G Ninja -DCMAKE_BUILD_TYPE=Release ^
  -DCMAKE_C_COMPILER="%LLVM_FWD%/clang-cl.exe" -DCMAKE_CXX_COMPILER="%LLVM_FWD%/clang-cl.exe" ^
  -DCMAKE_LINKER="%LLVM_FWD%/lld-link.exe" -DCMAKE_RC_COMPILER="%LLVM_FWD%/llvm-rc.exe" || exit /b 5
ninja -C "%BUILD%" LCSNative
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
if "%CODE%"=="0" echo Play: lcs\PLAY_LCS.bat
exit /b %CODE%

:usage
echo Usage: %~nx0
echo Builds DirectX 12 and OpenGL into out\lcs-clang.
echo Set Rendering.Backend in lcs\config\LCSNative.ini.
exit /b 0

:usage_fail
echo Usage: %~nx0
echo Builds DirectX 12 and OpenGL into out\lcs-clang.
echo Set Rendering.Backend in lcs\config\LCSNative.ini.
exit /b 1
