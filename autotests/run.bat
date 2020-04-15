@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  call ..\scripts\load-config.bat || exit /b 1
  if {%1}=={} (
    for %%s in (*.sref *.ref) do call :RUN_TEST %%s || exit /b 1
    call :RUN_ALL_TESTS_DIR || exit /b 1
  ) else (
    if {%1}=={--dir} (
      call :RUN_ALL_TESTS_DIR || exit /b 1
    ) else (
      for %%s in (%*) do call :RUN_TEST %%s || exit /b 1
    )
  )
  if exist _test_prefix.*-prefix erase _test_prefix.*-prefix
  if exist _int_test.exe erase _int_test.exe
endlocal
goto :EOF

:PREPARE_PREFIX
  if not exist _test_prefix.exe-prefix (
    echo Prepare common prefix...
    ..\bin\rlc-core -o _test_prefix.exe-prefix ^
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
  if not exist _test_prefix.lib-prefix (
    copy nul _test_prefix.lib-prefix
  )
  exit /b 0
goto :EOF

:RUN_ALL_TESTS_DIR
setlocal
  for /d %%d in (*) do (
    if exist %%d\run.bat (
      call :RUN_TEST_DIR %%d || exit /b 1
    )
  )
endlocal
goto :EOF

:RUN_TEST_DIR
setlocal
  echo Passing special test in dir %1...
  pushd %1
  call run.bat
  if errorlevel 1 (
    echo TEST FAILED
    popd
    exit /b 1
  )
  popd
endlocal
goto :EOF

:RUN_TEST
setlocal
  set COMMON_SRFLAGS= ^
    --cpp-command-exe="%CPPLINEE%" ^
    --cpp-command-lib="%CPPLINEL%" ^
    --cpp-command-exe-suf="%CPPLINEESUF%" ^
    --cpp-command-lib-suf="%CPPLINELSUF%" ^
    --exesuffix=.exe ^
    --libsuffix=.dll ^
    --prelude=test-prelude.srefi ^
    -D../src/lib/platform-Windows ^
    -D../src/lib/debug ^
    -D../src/lib ^
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
  set SRFLAGS_NAT_LIB=refalrts ^
    refalrts-main ^
    refalrts-vm-api ^
    refalrts-platform-specific
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
endlocal
goto :EOF

:RUN_TEST_ALL_MODES
setlocal
  find "%%" %1 > NUL
  if errorlevel 1 (
    set SRFLAGS_PLUS_INIT=%SRFLAGS_PREF%
  ) else (
    set SRFLAGS_PLUS_INIT=%SRFLAGS_NAT_LIB%
  )

  set SRFLAGS_PLUS=%SRFLAGS_PLUS_INIT%
  set SRFLAGS=
  call :%2 %1 || exit /b 1
  set SRFLAGS=--markup-context
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OP
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OR
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OPR
  call :%2 %1 || exit /b 1
  set SRFLAGS_PLUS=%SRFLAGS_NAT_LIB%
  set SRFLAGS=-Od
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OdP
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OdR
  call :%2 %1 || exit /b 1
  set SRFLAGS=-OdPR
  call :%2 %1 || exit /b 1

  find "CONDITIONS" %1 > NUL
  if not errorlevel 1 (
    echo Pass special conditions tests:
    set SRFLAGS_PLUS=%SRFLAGS_PLUS_INIT%
    set SRFLAGS=-OC
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OC --markup-context
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCP
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCR
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCPR
    call :%2 %1 || exit /b 1
    set SRFLAGS_PLUS=%SRFLAGS_NAT_LIB%
    set SRFLAGS=-OCd
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCdP
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCdR
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCdPR
    call :%2 %1 || exit /b 1
    echo Special conditions tests is passed
  )

  find "TREE" %1 > NUL
  if not errorlevel 1 (
    echo Pass special tree tests:
    set SRFLAGS_PLUS=%SRFLAGS_PLUS_INIT%
    set SRFLAGS=-OT
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OI
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCT
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCI
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OCS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-Oi
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OiD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OiCD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OAD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OACD
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OAS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OACS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OADS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OACDS
    call :%2 %1 || exit /b 1
    set SRFLAGS=-OiACDS
    call :%2 %1 || exit /b 1
    echo Special tree tests is passed
  )
endlocal
::goto :EOF
exit /b 0

:PREPARE_INT_TEST
setlocal
  set REFERENCE=%1

  call :PREPARE_PREFIX || exit /b 1

  ..\bin\rlc-core --no-sources -o _int_test.exe ^
    %COMMON_SRFLAGS% %SRFLAGS_PREF% ^
    --reference=%REFERENCE% >__out.txt 2> __error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON CREATING _int_test.exe, SEE __error.txt
    exit /b 1
  )
  if not exist _int_test.exe (
    echo COMPILATION FAILED, SEE __error.txt
    exit /b 1
  )
  erase __out.txt __error.txt
endlocal
goto :EOF

:RUN_TEST_AUX
setlocal
  call :PREPARE_INT_TEST %~n1 || exit /b 1
  call :RUN_TEST_ALL_MODES %1 RUN_TEST_AUX_WITH_FLAGS || exit /b 1
endlocal
goto :EOF

:RUN_TEST_AUX_WITH_FLAGS
setlocal
  echo Passing %1 (flags %SRFLAGS%)...
  set SREF=%1
  set RASL=%~n1.rasl
  set NATCPP=%~n1.cpp
  set LIBR=%~n1.rasl-module
  set LIBN=%~n1.dll

  ..\bin\rlc-core %SREF% --makelib %COMMON_SRFLAGS% %SRFLAGS% %SRFLAGS_PLUS% ^
    --keep-rasls 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  if not exist %LIBR% if not exist %LIBN% (
    echo COMPILATION FAILED, __error.txt:
    type __error.txt
    exit /b 1
  )
  erase __error.txt

  if not exist %NATCPP% set NATCPP=

  _int_test.exe ++diagnostic+config=test-diagnostics.ini
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )

  erase %RASL% %NATCPP% %LIBR%
  if exist %LIBN% erase %LIBN%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  if exist __log.txt erase __log.txt
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.FAILURE
setlocal
  call :PREPARE_INT_TEST %~n1 || exit /b 1
  call :RUN_TEST_ALL_MODES %1 RUN_TEST_AUX_WITH_FLAGS.FAILURE || exit /b 1
endlocal
goto :EOF

:RUN_TEST_AUX_WITH_FLAGS.FAILURE
setlocal
  echo Passing %1 (expecting failure, flags %SRFLAGS%)...
  set SREF=%1
  set RASL=%~n1.rasl
  set NATCPP=%~n1.cpp
  set LIBR=%~n1.rasl-module
  set LIBN=%~n1.dll

  ..\bin\rlc-core %SREF% --makelib %COMMON_SRFLAGS% %SRFLAGS% %SRFLAGS_PLUS% ^
    --keep-rasls 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  if not exist %LIBR% if not exist %LIBN% (
    echo COMPILATION FAILED
    exit /b 1
  )
  erase __error.txt

  if not exist %NATCPP% set NATCPP=

  _int_test.exe ++diagnostic+config=test-diagnostics.ini
  if not errorlevel 100 (
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit /b 1
  )

  erase %RASL% %NATCPP% %LIBR%
  if exist %LIBN% erase %LIBN%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  if exist __log.txt erase __log.txt
  echo Ok! This failure was normal and expected
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX
setlocal
  echo Passing %1 (syntax error recovering)...
  set SREF=%1
  set RASL=%~n1.rasl

  ..\bin\rlc-core --prelude=test-prelude.srefi -C %SRFLAGS% %1 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  if exist %RASL% (
    echo COMPILATION SUCCEEDED, BUT EXPECTED SYNTAX ERROR
    erase %RASL%
    exit /b 1
  )
  type __error.txt
  erase __error.txt
  echo Ok! Compiler didn't crash on invalid syntax
  echo.
endlocal
goto :EOF
