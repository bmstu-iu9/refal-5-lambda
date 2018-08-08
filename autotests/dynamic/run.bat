@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  if {%1}=={} (
    call :RUN_ALL_TESTS_DIR || exit /b 1
  ) else (
    for /d %%s in (%*) do call :RUN_TEST_DIR %%s || exit /b 1
  )
endlocal
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
