@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  call ..\..\scripts\load-config.bat || exit /b 1
  if {%1}=={} (
    for %%s in (*.sref *.ref) do call :RUN_TEST %%s || exit /b 1
  ) else (
    for %%s in (%*) do call :RUN_TEST %%s || exit /b 1
  )
  if exist _test_prefix.exe-prefix erase _test_prefix.exe-prefix
endlocal
goto :EOF

:PREPARE_PREFIX
  if not exist _test_prefix.exe-prefix (
    echo Prepare common prefix...
    ..\..\bin\srefc-core -o _test_prefix.exe-prefix ^
      %COMMON_SRFLAGS% %SRFLAGS_NAT% 2>__error.txt
    if not exist _test_prefix.exe-prefix (
      echo CAN'T CREATE COMMON PREFIX, SEE __error.txt
      exit /b 1
    )
    erase __error.txt
    if exist *.obj erase *.obj
    if exist *.tds erase *.tds
    echo.
  )
  exit /b 0
goto :EOF

:RUN_TEST
setlocal
  set COMMON_SRFLAGS= ^
    --cpp-command-exe="%CPPLINEE%" ^
    --cpp-command-lib="%CPPLINEL%" ^
    --cpp-command-exe-suf="%CPPLINEESUF%" ^
    --cpp-command-lib-suf="%CPPLINELSUF%" ^
    --exesuffix=.exe ^
    --prelude=test-prelude.srefi ^
    -D../../src/lib/platform-Windows ^
    -D../../src/lib ^
    --log=__log.txt
  set SRFLAGS_PREF=--prefix=_test_prefix
  set SRFLAGS_NAT=refalrts ^
    refalrts-debugger ^
    refalrts-diagnostic-initializer ^
    refalrts-dynamic ^
    refalrts-functions ^
    refalrts-main ^
    refalrts-profiler ^
    refalrts-vm ^
    refalrts-vm-api ^
    refalrts-platform-specific
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
endlocal
goto :EOF

:RUN_TEST_AUX.LEXGEN
setlocal
  call :PREPARE_PREFIX || exit /b 1

  echo Passing %1 (lexgen)...
  set SREF=%1

  ..\..\bin\lexgen --from=%SREF% --to=_lexgen-out.sref 2> __error.txt
  if errorlevel 100 (
    echo LEXGEN ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist _lexgen-out.sref (
    echo LEXGEN FAILED
    exit /b 1
  )

  ..\..\bin\srefc-core --keep-rasls _lexgen-out.sref -o _lexgen-out.exe %COMMON_SRFLAGS% ^
    %SRFLAGS_PREF% 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist _lexgen-out.rasl (
    echo COMPILATION FAILED
    exit /b 1
  )

  _lexgen-out.exe ++diagnostic+config=test-diagnostics.txt
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )

  erase _lexgen-out.*
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  if exist __log.txt erase __log.txt
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX-LEXGEN
setlocal
  echo Passing %1 (lexgen, syntax error recovering)...
  set SREF=%1

  ..\..\bin\lexgen --from=%SREF% --to=_lexgen-out.sref 2> __error.txt
  if errorlevel 100 (
    echo LEXGEN ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if exist _lexgen-out.sref (
    echo LEXGEN SUCCESSED, BUT EXPECTED SYNTAX ERROR
    exit /b 1
  )

  echo Ok! LexGen didn't crash on invalid syntax
  echo.
endlocal
goto :EOF
