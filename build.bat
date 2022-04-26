@echo off
for %%I in (.) do set CurrDirName=%%~nxI
TITLE %CurrDirName% Build
hemtt build --force --release
pause
