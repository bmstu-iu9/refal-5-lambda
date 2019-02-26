@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist slim-prefix.ref erase slim-prefix.ref
    for %%s in (%PREFIXFILES%) do (
      echo *$FROM %%s>> slim-prefix.ref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-slim-prefix slim-prefix slim-prefix
  erase ..\..\build\srlib-slim-prefix\LibraryEx.*
  erase ..\..\build\srlib-slim-prefix\GetOpt.*
endlocal
