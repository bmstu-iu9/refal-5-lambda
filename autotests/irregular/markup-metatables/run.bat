@echo off

call :CLEANUP

call ..\..\..\bin\rlc ++diagnostic+config=rlc-core.ini ^
  test.ref -OADiS --log=__test.log
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

:CLEANUP
  for %%f in (*.rasl-module *.rasl *.exe *.log *.dump) do (
    if exist %%f erase %%f
  )
goto :EOF
