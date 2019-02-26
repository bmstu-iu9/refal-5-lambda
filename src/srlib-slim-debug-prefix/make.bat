@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist slim-debug-prefix.ref erase slim-debug-prefix.ref
    for %%s in (%PREFIXFILES%) do (
      echo *$FROM %%s>> slim-debug-prefix.ref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-slim-debug-prefix slim-debug-prefix slim-debug-prefix
  erase ..\..\build\srlib-slim-debug-prefix\LibraryEx.*
  erase ..\..\build\srlib-slim-debug-prefix\GetOpt.*
endlocal
