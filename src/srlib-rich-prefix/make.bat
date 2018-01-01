@echo off
setlocal
  set PREFIXFILES=%~1
  if not x"%PREFIXFILES%"==x"" (
    if exist rich-prefix.sref erase rich-prefix.sref
    for %%s in (%PREFIXFILES%) do (
      echo //FROM %%s>> rich-prefix.sref
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-rich-prefix rich-prefix rich-prefix
endlocal
