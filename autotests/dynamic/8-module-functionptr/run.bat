@echo off
erase *.rasl-module *.rasl *.exe
call ..\..\..\bin\srefc -OC -R module-A.sref
call ..\..\..\bin\srefc -OC -R module-B.sref
call ..\..\..\bin\srmake -X-OC -X--markup-context caller.ref
caller.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe
)