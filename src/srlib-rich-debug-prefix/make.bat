@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist rich-debug-prefix.sref erase rich-debug-prefix.sref
    for %%s in (%PREFIXFILES%) do (
      echo //FROM %%s>> rich-debug-prefix.sref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-rich-debug-prefix rich-debug-prefix rich-debug-prefix
endlocal
