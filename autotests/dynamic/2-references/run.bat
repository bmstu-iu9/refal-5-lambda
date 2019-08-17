@echo off
erase *.rasl-module *.rasl *.exe *.obj *.o *.tds
call ..\..\..\bin\srefc --keep-rasls -OC -R A-BCE.sref -r B-D -r C-D -r E-F
call ..\..\..\bin\srefc --keep-rasls -OC -R B-D.sref -r D-G
call ..\..\..\bin\srefc --keep-rasls -OC -R C-D.sref -r D-G
call ..\..\..\bin\srefc --keep-rasls -OC -R D-G.sref -r G
call ..\..\..\bin\srefc --keep-rasls -OC -R E-F.sref -r F-E
call ..\..\..\bin\srefc --keep-rasls -OC -R F-E.sref -r E-F
call ..\..\..\bin\srefc --keep-rasls -OC -R G.sref
call ..\..\..\bin\srmake --keep-rasls -X-OC -X--markup-context caller.ref
caller.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe *.obj *.tds
)
