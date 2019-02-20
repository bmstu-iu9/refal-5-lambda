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
  set CPP=
  set RT=
  goto END_SWITCH

:MODE_RICH_DEBUG
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\rich-debug"
  set CPP=
  set RT=
  goto END_SWITCH

:MODE_SLIM
  set ARGS=%ARGS:* =%
  set D=-d "%LIBDIR%\slim"
  set CPP=
  set RT=
  goto END_SWITCH

:MODE_SLIM_DEBUG
  set ARGS=%ARGS:* =%
:MODE_DEFAULT
  set D=-d "%LIBDIR%\slim-debug"
  set CPP=
  set RT=
  goto END_SWITCH

:MODE_SCRATCH
  set ARGS=%ARGS:* =%
  call "%DISTRDIR%\scripts\load-config.bat" || exit /b 1
  set D=-D "%LIBDIR%\scratch\platform-Windows" -D "%LIBDIR%\scratch"
  set CPP=--cpp-command-exe="%CPPLINEE%" --cpp-command-lib="%CPPLINEL%"
  set RT=--runtime=refalrts-main
  goto END_SWITCH

:END_SWITCH
  set PATH=%BINDIR%;%PATH%
  srmake-core ^
    -s srefc-core.exe ^
    -X-OC %SRMAKE_FLAGS% ^
    -X--exesuffix=.exe -X--libsuffix=.dll %CPP% ^
    --thru=--cppflags="%CPPLINE_FLAGS%" -X--chmod-x-command= ^
    -d "%LIBDIR%\common" --prelude=refal5-builtins.refi ^
    %D% %RT% %ARGS%
endlocal
