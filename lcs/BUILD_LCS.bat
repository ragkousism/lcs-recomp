@echo off
call "%~dp0scripts\build_clang.bat" %*
exit /b %errorlevel%
