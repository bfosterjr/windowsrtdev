@ECHO off
IF "%1"=="" GOTO param_error

REM --------------------------------------------------------
REM Zip sources using 7zip, copy setup file
REM --------------------------------------------------------
7z.exe a -tzip -mx=9 -mm=Deflate -mfb=255 "plainamp_%1_source.zip" "Binary" "Build" "Installer" "Lib" "Source" "Testing" "Changelog.txt" "GPL.txt" "pack.bat" -r -x!".svn" -x!".svn\*" -x!"Binary\*" -x!"*\.objs" -x!"*\.objs\*" -x!"*\*.depend" -x!"*\*.layout" -x!"*\Release" -x!"*\Release\*" -x!"*\Debug" -x!"*\Debug\*" -x!"*\*.ncb" -x!"*\*.suo" -x!"Installer\*.exe" -x!"Installer\*\*.dll"
COPY "Installer\plainamp_setup.exe" "plainamp_%1_setup.exe"
GOTO exit

REM --------------------------------------------------------
REM Usage info
REM --------------------------------------------------------
: param_error
ECHO USAGE: pack XXX
ECHO.
ECHO   XXX is the release id string e.g. "019".
ECHO   Filename will be "plainamp_XXX_source.zip".
ECHO.

: exit
