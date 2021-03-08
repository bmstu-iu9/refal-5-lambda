@echo off
setlocal
  set SCRIPT_FLAGS=%SCRIPT_FLAGS% --debug --scratch
  call ..\make interpreter rlgo main || exit /b 1

  copy ..\..\lib\scratch-rt\debug\*.rasl ..\..\build\interpreter >NUL
  copy ..\..\lib\scratch-rt\debug\*.cpp ..\..\build\interpreter >NUL
endlocal
