@echo off
setlocal
  mkdir ..\bin >NUL 2>NUL
  call ..\c-plus-plus.conf.bat
  set FILELIST=srefc.cpp
  for %%c in (*.cpp) do call :ADD_FILE_TO_LIST %%c
  %CPPLINE% -I..\srlib %FILELIST%
  if exist srefc.exe move srefc.exe ..\bin
  if exist a.exe move a.exe ..\bin\srefc.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds

  :ADD_FILE_TO_LIST
    if not {%1}=={srefc.cpp} set FILELIST=%FILELIST% %1
  goto :EOF
endlocal
