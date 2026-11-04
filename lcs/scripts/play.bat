@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
for %%I in ("%~dp0..") do set "LCS_DIR=%%~fI"

set "BACKEND="
if /I "%~1"=="opengl" set "BACKEND=opengl"
if /I "%~1"=="gl" set "BACKEND=opengl"
if /I "%~1"=="gl3" set "BACKEND=opengl"
if /I "%~1"=="gl33" set "BACKEND=opengl"
if /I "%~1"=="dx12" set "BACKEND=dx12"
if /I "%~1"=="directx12" set "BACKEND=dx12"
if /I "%~1"=="d3d12" set "BACKEND=dx12"
if defined BACKEND shift
if /I "%BACKEND%"=="opengl" (
  set "LCS_GE_BACKEND=opengl"
  if not defined LCS_BIN set "LCS_BIN=%REPO%\out\lcs-clang-opengl\lcs\LCSNative.exe"
)
if /I "%BACKEND%"=="dx12" set "LCS_GE_BACKEND=directx12"

set "BIN=%REPO%\out\lcs\lcs\Release\LCSNative.exe"
if defined LCS_BIN set "BIN=%LCS_BIN%"
if not exist "%BIN%" (
  echo LCSNative.exe not found at "%BIN%".
  if /I "%LCS_GE_BACKEND%"=="opengl" (
    echo Build it first: lcs\BUILD_LCS.bat opengl
  ) else (
    echo Build it first:
    echo   cmake -S . -B out/lcs
    echo   cmake --build out/lcs --config Release
  )
  pause
  exit /b 3
)

set "GAME=%LCS_DIR%\game"
set "FIRST=%~1"
if not "%FIRST%"=="" if not "%FIRST:~0,1%"=="-" (
  set "GAME=%~f1"
  shift
)

if not exist "%GAME%\EBOOT.ELF" (
  echo Game root "%GAME%" has no EBOOT.ELF.
  echo Supply your own decrypted copy at "%LCS_DIR%\game\EBOOT.ELF".
  pause
  exit /b 4
)

if not defined PSPRECOMP_CONFIG set "PSPRECOMP_CONFIG=%LCS_DIR%\config\LCSNative.ini"

"%BIN%" --game "%GAME%" %1 %2 %3 %4 %5 %6 %7 %8 %9
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
exit /b %CODE%
