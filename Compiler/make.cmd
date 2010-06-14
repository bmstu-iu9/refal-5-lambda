@echo off
if "%1"=="" make cpp cs
if "%2"=="" make cpp cs
if "%1"=="cpp" if "%2"=="cs"  makeself.bat
if "%1"=="cpp" if "%2"=="cpp" makeself-s.bat
if "%1"=="cs" if "%2"=="cs"  makeself-t.bat
