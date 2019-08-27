@echo off
setlocal
  set SCRIPT_FLAGS=--scratch
  set SRMAKE_FLAGS=%SRMAKE_FLAGS% --makelib
  call ..\make.bat srlib-hash Hash Hash
  move ..\..\bin\Hash.exe ..\..\bin\Hash.dll
endlocal
