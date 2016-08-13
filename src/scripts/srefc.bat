@echo off

:: Получаем путь к папке bin, удаляем концевой \
set BINDIR=%~dp0
set BINDIR=%BINDIR:~0,-1%

:: Получаем путь к дистрибутиву, удаяем концевой \
for %%d in ("%BINDIR%") do set DISTRDIR=%%~dpd
set DISTRDIR=%DISTRDIR:~0,-1%

:: Путь к папке srlib
set LIBDIR=%DISTRDIR%\srlib

:: Запуск
setlocal
  call "%DISTRDIR%\c-plus-plus.conf.bat"
  set PATH=%BINDIR%;%PATH%
  srefc-core %SREFC_FLAGS% -c "%CPPLINE% %CPPLINE_FLAGS%" %* -D "%LIBDIR%"
endlocal
