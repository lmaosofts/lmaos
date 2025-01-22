@echo off
:: RUN ME ON WINDOWS

del lmaos.exe >nul 2>&1
windres src.rc -O coff -o src.res
gcc src.res lmaos.c -o lmaos.exe
del src.res >nul 2>&1
if exist lmaos.exe (
	lmaos.exe
)