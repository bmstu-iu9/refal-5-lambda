@echo off
erase *.rasl-module *.rasl *.exe *.obj *.o *.tds
call ..\..\..\bin\srefc -OC -R A-BCE.sref -r B-D -r C-D -r E-F
call ..\..\..\bin\srefc -OC -R B-D.sref -r D
call ..\..\..\bin\srefc -OC -R C-D.sref -r D
call ..\..\..\bin\srefc -OC -R D.sref
call ..\..\..\bin\srefc -OC -R E-F.sref -r F-E
call ..\..\..\bin\srefc -OC -R F-E.sref -r E-F
call ..\..\..\bin\srmake --scratch -X-OC -X--markup-context caller.ref
caller.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe *.obj *.tds
)
