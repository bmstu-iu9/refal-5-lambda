@echo off
erase *.rasl-module *.rasl *.exe
call ..\..\..\bin\rlmake --keep-rasls -X-OC -X--markup-context caller.ref
caller.exe
if not errorlevel 1 (
  echo TEST FAILED! Program must be fail!
) else (
  echo Test OK! This failure is normal and expected!
  erase *.rasl-module *.rasl *.exe
)
