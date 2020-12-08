@echo off
erase *.rasl-module *.rasl *.exe
call ..\..\..\bin\rlc --keep-rasls -OC -R module-A.sref -OG-
call ..\..\..\bin\rlc --keep-rasls -OC -R module-B.sref -OG-
call ..\..\..\bin\rlmake --keep-rasls -X-OC -X--markup-context caller.ref -X-OG-
caller.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe *.lst
)
