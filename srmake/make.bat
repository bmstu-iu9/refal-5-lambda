@echo off
setlocal
  call ..\c-plus-plus.conf.bat
  set modules=SRMake FileScanner FindFile ParseCmdLine Library LibraryEx refalrts
  ..\bin\srefc -c "%CPPLINE% -I../srlib -DDONT_PRINT_STATISTICS" -d ..\srlib -d ..\Compiler %modules%
  if exist a.exe move a.exe SRMake.exe
  copy SRMake.exe ..\bin\srmake.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  erase *.cpp
endlocal