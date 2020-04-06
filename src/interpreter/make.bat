@echo off
setlocal
  set SCRIPT_FLAGS=%SCRIPT_FLAGS% --debug --scratch
  call ..\make interpreter rlgo main
endlocal
