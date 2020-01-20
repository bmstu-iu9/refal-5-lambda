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
  :: Команда shift не убирает первое слово из %*, убираем вручную.
  :: Подстановка %ARGS:* =% убирает из переменной среды префикс
  :: до первого пробела, включая этот пробел (см. ниже).
  set ARGS=%*
  if "%~1"=="--rich" goto MODE_RICH
  if "%~1"=="--rich-debug" goto MODE_RICH_DEBUG
  if "%~1"=="--slim" goto MODE_SLIM
  if "%~1"=="--slim-debug" goto MODE_SLIM_DEBUG
  if "%~1"=="--scratch" goto MODE_SCRATCH
  goto :MODE_DEFAULT

:MODE_RICH
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\rich"
  set PREFIX=--prefix=rich
  set CPP=
  goto END_SWITCH

:MODE_RICH_DEBUG
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\rich-debug"
  set PREFIX=--prefix=rich-debug
  set CPP=
  goto END_SWITCH

:MODE_SLIM
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\slim"
  set PREFIX=--prefix=slim
  set CPP=
  goto END_SWITCH

:MODE_SLIM_DEBUG
  set ARGS=%ARGS:* =%
:MODE_DEFAULT
  set D=-d "%LIBDIR%\slim-debug"
  set PREFIX=--prefix=slim-debug
  set CPP=
  goto END_SWITCH

:MODE_SCRATCH
  set ARGS=%ARGS:* =%
  call "%DISTRDIR%\scripts\load-config.bat" || exit /b 1
  set D=-D "%LIBDIR%\scratch\platform-Windows" -D "%LIBDIR%\scratch"
  set PREFIX=
  set CPP=--cpp-command-exe="%CPPLINEE%" --cpp-command-lib="%CPPLINEL%" ^
    --cpp-command-exe-suf="%CPPLINEESUF%" --cpp-command-lib-suf="%CPPLINELSUF%"
  goto END_SWITCH

:END_SWITCH
  set PATH=%BINDIR%;%PATH%
  srefc-core ^
    -OC %SREFC_FLAGS% ^
    --exesuffix=.exe --libsuffix=.dll %CPP% ^
    --cppflags="%CPPLINE_FLAGS%" --chmod-x-command= ^
    -d "%LIBDIR%\common" --prelude=refal5-builtins.refi ^
    %PREFIX% %D% %ARGS%
endlocal
