@echo off

call :CLEANUP
call :RUN_TEST test-Rec-Mu || exit /b 0
exit /b 0

:RUN_TEST
  echo Run %1...
  call ..\..\..\bin\rlc ++diagnostic+config=rlc-core.ini ^
    %1.ref -o test.exe -OADiS --log=__test.log
  if errorlevel 1 (
    echo COMPILER FAILED!
    exit /b 1
  )

  if not exist test.exe (
    echo COMPILATION ERRORS!
    exit /b 1
  )

  test.exe ++diagnostic+config=test.ini
  if errorlevel 1 (
    echo TEST FAILED!
    exit /b 1
  )

  echo Test OK!
  call :CLEANUP
  exit /b 0
goto :EOF

:CLEANUP
  for %%f in (*.rasl-module *.rasl *.exe *.log *.dump) do (
    if exist %%f erase %%f
  )
goto :EOF
