@echo off

:: Получаем путь к папке bin, удаляем концевой \
set BINDIR=%~dp0
set BINDIR=%BINDIR:~0,-1%

:: Получаем путь к дистрибутиву, удаляем концевой \
for %%d in ("%BINDIR%") do set DISTRDIR=%%~dpd
set DISTRDIR=%DISTRDIR:~0,-1%

:: Путь к папке lib
set LIBDIR=%DISTRDIR%\lib

:: Запуск
setlocal
  :: Команда shift не убирает первое слово из %*, убираем вручную.
  :: Подстановка %ARGS:* =% убирает из переменной среды префикс
  :: до первого пробела, включая этот пробел (см. ниже).
  set ARGS=%*

  set PREFIX=slim
  set BIND=AUTO
  set DEBUG=FALSE
  set BAT=%~nx0
  set MODE=%~n0

:LOOP
  :: Если написать set VAR=val & goto NEXT, то в конец VAR добавится пробел.
  :: Поэтому знак & приходится писать слитно.
  if "%~1"=="--slim" ( set PREFIX=slim& goto NEXT )
  if "%~1"=="--rich" ( set PREFIX=rich& goto NEXT )
  if "%~1"=="--scratch" ( set PREFIX=scratch& goto NEXT )

  if "%~1"=="--auto" ( set BIND=AUTO& goto NEXT )
  if "%~1"=="--static" ( set BIND=STATIC& goto NEXT )
  if "%~1"=="--dynamic" ( set BIND=DYNAMIC& goto NEXT )

  if "%~1"=="--debug" ( set DEBUG=TRUE& goto NEXT )
  if "%~1"=="--no-debug" ( set DEBUG=FALSE& goto NEXT )

  if "%~1"=="--target" ( set RLC_TARGET=%~2& shift & goto NEXT )

  goto EXIT_LOOP

:NEXT
  set ARGS=%ARGS:* =%
  shift
  goto LOOP

:EXIT_LOOP

  set D=
  if "%DEBUG%"=="TRUE" (
    set D=-D "%LIBDIR%\%PREFIX%-rt\debug"
  ) else (
    set D=-D "%LIBDIR%\%PREFIX%-rt\debug-stubs"
  )
  if "%BIND%"=="AUTO" set D=%D% -d "%LIBDIR%\%PREFIX%"
  if "%BIND%"=="STATIC" set D=%D% -d "%LIBDIR%\%PREFIX%\exe"
  set D=%D% -D "%LIBDIR%\%PREFIX%-rt" -d "%LIBDIR%\references"

  call "%DISTRDIR%\scripts\platform-specific.bat"

  :: Префиксы и библиотеки цели ищутся раньше общих (lib/<triple>[)
  if not "%RLC_TARGET%"=="" (
    if not exist "%LIBDIR%\%RLC_TARGET%\" (
      echo target %RLC_TARGET% is not built, run: set TARGETS=%RLC_TARGET%, then bootstrap.bat 1>&2
      exit /b 1
    )
    set D=-d "%LIBDIR%\%RLC_TARGET%" %D%
  )

  set RT_PLATFORM=platform-%TARGET_OS%
  if not exist "%LIBDIR%\scratch-rt\%RT_PLATFORM%\" set RT_PLATFORM=platform-unknown

  if "%PREFIX%"=="scratch" (
    call "%DISTRDIR%\scripts\load-config.bat" || exit /b 1
  )

  if not "%PREFIX%"=="scratch" (
    set CPP=
    set RT=
    if "%DEBUG%"=="TRUE" (
      set PREFIX=--prefix=%PREFIX%-debug
    ) else (
      set PREFIX=--prefix=%PREFIX%
    )
  ) else (
    set PREFIX=
    set D=-D "%LIBDIR%\scratch-rt\%RT_PLATFORM%" -D "%LIBDIR%\scratch-rt\platform-POSIX" %D%
    set CPP=--cpp-command-exe="%CPPLINEE%" ^
      --cpp-command-lib="%CPPLINEL%" ^
      --cpp-command-exe-suf="%CPPLINEESUF%" ^
      --cpp-command-lib-suf="%CPPLINELSUF%"
    set RT=--runtime=refalrts-main
  )

  set PATH=%BINDIR%;%PATH%
  if "%MODE%"=="rlc" (
    rlc-core ^
      -OC %RLC_FLAGS% ^
      --exesuffix=%EXE_SUFFIX% --libsuffix=%LIB_SUFFIX% %CPP% --chmod-x-command= ^
      -d "%LIBDIR%\common" --prelude=refal5-builtins.refi ^
      %PREFIX% %D% -d "%LIBDIR%" %ARGS%
  ) else if "%MODE%"=="rlmake" (
    rlmake-core ^
      --rlc-command=rlc-core.exe ^
      -X-OC %RLMAKE_FLAGS% ^
      -X--exesuffix=%EXE_SUFFIX% -X--libsuffix=%LIB_SUFFIX% %CPP% -X--chmod-x-command= ^
      -d "%LIBDIR%\common" --prelude=refal5-builtins.refi ^
      %PREFIX% %D% -d "%LIBDIR%" %RT% %ARGS%
  ) else (
    echo BAD SCRIPT NAME %BAT%, expected rlc.bat or rlmake.bat
    exit /b 1
  )
endlocal
