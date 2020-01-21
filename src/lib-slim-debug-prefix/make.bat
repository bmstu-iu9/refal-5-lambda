@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist slim-debug-prefix.ref erase slim-debug-prefix.ref
    for %%s in (%PREFIXFILES%) do (
      echo *$FROM %%s>> slim-debug-prefix.ref
    )
  )

  set SCRIPT_FLAGS=--scratch --debug
  call ..\make.bat lib-slim-debug-prefix slim-debug-prefix slim-debug-prefix
  erase ..\..\build\lib-slim-debug-prefix\LibraryEx.*
  erase ..\..\build\lib-slim-debug-prefix\GetOpt.*
endlocal
