@echo off
erase *.rasl-module *.rasl *.exe
..\..\..\bin\rlc-core -R -o target.rasl-module --keep-rasls unit1.ref unit2.ref
if exist target.rasl-module (
  echo TEST FAILED: linker error is expected!
  exit /b 1
) else (
  echo Test OK: linker found expected errors!
  erase *.rasl-module *.partial *.rasl *.exe
  exit /b 0
)
