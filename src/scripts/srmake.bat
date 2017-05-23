@echo off

:: Получаем путь к папке bin, удаляем концевой \
set BINDIR=%~dp0
set BINDIR=%BINDIR:~0,-1%

:: Получаем путь к дистрибутиву, удаляем концевой \
for %%d in ("%BINDIR%") do set DISTRDIR=%%~dpd
set DISTRDIR=%DISTRDIR:~0,-1%

:: Путь к папке srlib
set LIBDIR=%DISTRDIR%\srlib

:: Запуск
setlocal
  call "%DISTRDIR%\c-plus-plus.conf.bat"
  set PATH=%BINDIR%;%PATH%
  srmake-core ^
    -s srefc-core.exe ^
    %SRMAKE_FLAGS% ^
    --cpp-command-exe="%CPPLINEE%" -X--exesuffix=.exe ^
    --cpp-command-lib="%CPPLINEL%" -X--libsuffix=.dll ^
    --thru=--cppflags="%CPPLINE_FLAGS%" ^
    %* -D "%LIBDIR%" -D "%LIBDIR%\platform-Windows"
endlocal
