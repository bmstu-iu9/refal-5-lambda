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
    call :RUN_TEST "%%r" ^
      && call :RUN_TEST "%%r" -OP ^
      && call :RUN_TEST "%%r" -OR ^
      && call :RUN_TEST "%%r" -OPR ^
      && call :RUN_TEST "%%r" -Od ^
      && call :RUN_TEST "%%r" -OdP ^
      && call :RUN_TEST "%%r" -OdR ^
      && call :RUN_TEST "%%r" -OdPR ^
      && call :RUN_TEST "%%r" -OC ^
      && call :RUN_TEST "%%r" -OCP ^
      && call :RUN_TEST "%%r" -OCR ^
      && call :RUN_TEST "%%r" -OCPR ^
      && call :RUN_TEST "%%r" -OCd ^
      && call :RUN_TEST "%%r" -OCdP ^
      && call :RUN_TEST "%%r" -OCdR ^
      && call :RUN_TEST "%%r" -OCdPR

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
  ..\..\bin\nemytykh-random-program-generator.exe %LOOPS% _%NOW%
  echo gen (%NOW%) %TIME%>>time.txt
  for %%r in (test-*.ref) do (
    call :RUN_TEST "%%r" ^
      && call :RUN_TEST "%%r" -OP ^
      && call :RUN_TEST "%%r" -OR ^
      && call :RUN_TEST "%%r" -OPR ^
      && call :RUN_TEST "%%r" -Od ^
      && call :RUN_TEST "%%r" -OdP ^
      && call :RUN_TEST "%%r" -OdR ^
      && call :RUN_TEST "%%r" -OdPR ^
      && call :RUN_TEST "%%r" -OC ^
      && call :RUN_TEST "%%r" -OCP ^
      && call :RUN_TEST "%%r" -OCR ^
      && call :RUN_TEST "%%r" -OCPR ^
      && call :RUN_TEST "%%r" -OCd ^
      && call :RUN_TEST "%%r" -OCdP ^
      && call :RUN_TEST "%%r" -OCdR ^
      && call :RUN_TEST "%%r" -OCdPR
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
  set FLAGS=%2

  echo Passing %FILE% (%FLAGS%):
  ..\..\bin\srefc-core --classic -C %FILE% --prelude=prelude-for-test %FLAGS% ^
    2>%FILE%.err%FLAGS% >%FILE%.out%FLAGS%

  if not exist %FILE%.rasl exit /b 1
  erase %FILE%.rasl
endlocal
goto :EOF
