@echo off
setlocal
  set SCRIPT_FLAGS=%SCRIPT_FLAGS% --debug
  call ..\make interpreter interpreter interpreter
endlocal
