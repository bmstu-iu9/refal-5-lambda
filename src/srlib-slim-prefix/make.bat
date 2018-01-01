@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist slim-prefix.sref erase slim-prefix.sref
    for %%s in (%PREFIXFILES%) do (
      echo //FROM %%s>> slim-prefix.sref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-slim-prefix slim-prefix slim-prefix
  erase ..\..\build\srlib-slim-prefix\LibraryEx.*
  erase ..\..\build\srlib-slim-prefix\GetOpt.*
endlocal
