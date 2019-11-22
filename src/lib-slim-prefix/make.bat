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
  call ..\make.bat lib-slim-prefix slim-prefix slim-prefix
  erase ..\..\build\lib-slim-prefix\LibraryEx.*
  erase ..\..\build\lib-slim-prefix\GetOpt.*
endlocal
