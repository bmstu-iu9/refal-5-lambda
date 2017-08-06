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
  :: Команда shift не убирает первое слово из %*, убираем вручную.
  :: Подстановка %ARGS:* =% убирает из переменной среды префикс
  :: до первого пробела, включая этот пробел (см. ниже).
  set ARGS=%*
  if "%~1"=="--rich" goto MODE_RICH
  if "%~1"=="--slim" goto MODE_SLIM
  if "%~1"=="--scratch" goto MODE_SCRATCH
  goto :MODE_DEFAULT

:MODE_RICH
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\rich"
  set PREFIX=--prefix=rich
  goto END_SWITCH

:MODE_SLIM
  set ARGS=%ARGS:* =%
  goto MODE_DEFAULT
  goto END_SWITCH

:MODE_SCRATCH
  set ARGS=%ARGS:* =%
:MODE_DEFAULT
  set D=-D "%LIBDIR%\scratch" -D "%LIBDIR%\scratch\platform-Windows"
  set PREFIX=
  goto END_SWITCH

:END_SWITCH
  call "%DISTRDIR%\c-plus-plus.conf.bat"
  set PATH=%BINDIR%;%PATH%
  srefc-core ^
    %SREFC_FLAGS% ^
    --cpp-command-exe="%CPPLINEE%" --exesuffix=.exe ^
    --cpp-command-lib="%CPPLINEL%" --libsuffix=.dll ^
    --cppflags="%CPPLINE_FLAGS%" --chmod-x-command= ^
    -d "%LIBDIR%\common" --prelude=refal5-builtins.srefi ^
    %PREFIX% %D% %ARGS%
endlocal
