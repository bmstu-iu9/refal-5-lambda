@echo off
setlocal
  call ..\c-plus-plus.conf.bat
  %CPPLINE% -I..\srlib srefc.cpp *.cpp
  if exist srefc.exe move srefc.exe ..\bin
  if exist a.exe move a.exe ..\bin\srefc.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
endlocal
