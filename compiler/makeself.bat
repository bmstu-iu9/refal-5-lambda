@echo off
setlocal
  call ..\c-plus-plus.conf.bat
  if not exist srefc.exe copy ..\bin\srefc.exe srefc.exe
  if not exist srefc_.exe copy ..\bin\srefc.exe srefc_.exe
  copy srefc.exe srefc_.exe >NUL
  ..\bin\lexgen Lexer.sref
  set modules=Srefc Parser Lexer Algorithm Error Generator
  set modules=%modules% SymTable FindFile ParseCmdLine Context
  set modules=%modules% Library LibraryEx refalrts Escape
  srefc_ -c "%CPPLINE% -I..\srlib" -d ..\srlib %modules%
  if exist a.exe move a.exe srefc.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.cpp ..\bootstrap >NUL
  move ..\srlib\LibraryEx.cpp ..\bootstrap >NUL
  copy ..\srlib\*.cpp ..\bootstrap >NUL
  copy srefc.exe ..\bin >NUL
endlocal