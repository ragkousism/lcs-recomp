@echo off
setlocal EnableExtensions
rem   build_clang.bat          DirectX 12 GE -> out\lcs-clang
rem   build_clang.bat opengl   OpenGL 3.3 GE -> out\lcs-clang-opengl
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BACKEND="
if "%~1"=="" set "BACKEND=dx12"
if /I "%~1"=="dx12" set "BACKEND=dx12"
if /I "%~1"=="directx12" set "BACKEND=dx12"
if /I "%~1"=="d3d12" set "BACKEND=dx12"
if /I "%~1"=="default" set "BACKEND=dx12"
if /I "%~1"=="opengl" set "BACKEND=opengl"
if /I "%~1"=="gl" set "BACKEND=opengl"
if /I "%~1"=="gl3" set "BACKEND=opengl"
if /I "%~1"=="gl33" set "BACKEND=opengl"
if defined BACKEND goto :backend_ok
if /I "%~1"=="-h" goto :usage
if /I "%~1"=="--help" goto :usage
if /I "%~1"=="/?" goto :usage
if /I "%~1"=="help" goto :usage
echo Unknown backend: %~1
goto :usage_fail
:backend_ok
if not "%~2"=="" (
  echo Unexpected argument: %~2
  goto :usage_fail
)
if /I "%BACKEND%"=="opengl" (
  set "BUILD=%REPO%\out\lcs-clang-opengl"
  set "GL_FLAG=ON"
) else (
  set "BUILD=%REPO%\out\lcs-clang"
  set "GL_FLAG=OFF"
)
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

rem A separate tree keeps the DirectX 12 cache intact.
set "NEED_CMAKE=1"
if exist "%BUILD%\CMakeCache.txt" (
  findstr /C:"LCS_OPENGL_GE_BACKEND:BOOL=%GL_FLAG%" "%BUILD%\CMakeCache.txt" >nul
  if not errorlevel 1 set "NEED_CMAKE=0"
)
if not exist "%BUILD%\build.ninja" set "NEED_CMAKE=1"
if "%NEED_CMAKE%"=="1" (
  if /I "%GL_FLAG%"=="ON" (
    echo Building the OpenGL 3.3 GE into out\lcs-clang-opengl
  ) else (
    echo Building the DirectX 12 GE into out\lcs-clang
  )
  cmake -S "%REPO%" -B "%BUILD%" -G Ninja -DCMAKE_BUILD_TYPE=Release ^
    -DLCS_OPENGL_GE_BACKEND=%GL_FLAG% ^
    -DCMAKE_C_COMPILER="%LLVM_FWD%/clang-cl.exe" -DCMAKE_CXX_COMPILER="%LLVM_FWD%/clang-cl.exe" ^
    -DCMAKE_LINKER="%LLVM_FWD%/lld-link.exe" -DCMAKE_RC_COMPILER="%LLVM_FWD%/llvm-rc.exe" || exit /b 5
)
ninja -C "%BUILD%" LCSNative
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
if "%CODE%"=="0" (
  if /I "%GL_FLAG%"=="ON" (echo Play: lcs\PLAY_LCS.bat opengl) else (echo Play: lcs\PLAY_LCS.bat)
)
exit /b %CODE%

:usage
echo Usage: %~nx0 [dx12^|opengl]
echo   dx12    DirectX 12 GE, output out\lcs-clang
echo   opengl  OpenGL 3.3 GE, output out\lcs-clang-opengl
exit /b 0

:usage_fail
echo Usage: %~nx0 [dx12^|opengl]
echo   dx12    DirectX 12 GE, output out\lcs-clang
echo   opengl  OpenGL 3.3 GE, output out\lcs-clang-opengl
exit /b 1
