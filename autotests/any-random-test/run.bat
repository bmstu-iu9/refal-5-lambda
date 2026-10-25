@echo off
set LOOPS=10
if not "{%1}"=="{}" set LOOPS=%1

call :MAIN
goto :EOF

:MAIN
setlocal
  call :REGRESSION || exit /b 1
  call :NEW_TESTS
endlocal
goto :EOF

:REGRESSION
setlocal
  for %%r in (saved-test-*.ref) do (
    call :RUN_TEST "%%r"

    if errorlevel 1 exit /b 1
    erase *.rasl *.cpp *.out* *.err*
  )
endlocal
goto :EOF

:NEW_TESTS
setlocal
  set NOW=%DATE%_%TIME%
  echo start (%NOW%, x%LOOPS%) %TIME%>>time.txt
  set NOW=%NOW::=-%
  set NOW=%NOW: =_%
  set NOW=%NOW:/=-%
  ..\..\bin\nemytykh-random-program-generator.exe %LOOPS% _%NOW% /comments
  echo gen (%NOW%) %TIME%>>time.txt
  for %%r in (test-*.ref) do (
    call :RUN_TEST "%%r"

    if not errorlevel 1 (
      erase "%%~nr.*"
    )
  )
  echo stop (%NOW%) %TIME%>>time.txt
endlocal
goto :EOF

:RUN_TEST
setlocal
  set FILE="%~n1"

  echo Passing %FILE%:
  ..\..\bin\rlc-core --classic -C %FILE% --prelude=prelude-for-test ^
    2>%FILE%.err >%FILE%.out
  if errorlevel 100 (
    echo ...COMPILER FAILS ON %FILE%, see %FILE%.err
    exit /b 1
  )
  if exist %FILE%.rasl erase %FILE%.rasl
endlocal
exit /b 0
