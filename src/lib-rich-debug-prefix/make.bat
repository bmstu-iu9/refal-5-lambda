@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist rich-debug-prefix.ref erase rich-debug-prefix.ref
    for %%s in (%PREFIXFILES%) do (
      echo *$FROM %%s>> rich-debug-prefix.ref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat lib-rich-debug-prefix rich-debug-prefix rich-debug-prefix
endlocal
