@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "LCS_BIN=%REPO%\out\lcs-clang\lcs\LCSNative.exe"
if /I "%~1"=="opengl" set "LCS_BIN=%REPO%\out\lcs-clang-opengl\lcs\LCSNative.exe"
if /I "%~1"=="gl" set "LCS_BIN=%REPO%\out\lcs-clang-opengl\lcs\LCSNative.exe"
if /I "%~1"=="gl3" set "LCS_BIN=%REPO%\out\lcs-clang-opengl\lcs\LCSNative.exe"
if /I "%~1"=="gl33" set "LCS_BIN=%REPO%\out\lcs-clang-opengl\lcs\LCSNative.exe"
call "%~dp0play.bat" %*
exit /b %errorlevel%
