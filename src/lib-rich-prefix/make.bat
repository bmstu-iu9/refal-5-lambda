@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist rich-prefix.ref erase rich-prefix.ref
    for %%s in (%PREFIXFILES%) do (
      echo *$FROM %%s>> rich-prefix.ref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat lib-rich-prefix rich-prefix rich-prefix
endlocal
