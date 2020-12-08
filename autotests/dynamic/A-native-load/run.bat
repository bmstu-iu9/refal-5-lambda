@echo off
if exist *.rasl-module erase *.rasl-module
if exist *.exe erase *.exe
if exist *.rasl erase *.rasl
if exist *.dll erase *.dll
call ..\..\..\bin\rlmake --scratch --keep-rasls -l module.sref
call ..\..\..\bin\rlmake --keep-rasls -X--markup-context caller.ref
caller.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe *.dll *.obj *.tds *.exp *.lib *.cpp *.lst
)
