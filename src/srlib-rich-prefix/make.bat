@echo off
setlocal
  if not x"%SOURCES%"==x"" (
    if not x"%RT%"==x"" (
      if exist rich-prefix.sref erase rich-prefix.sref
      for %%s in (%SOURCES% %RT%) do (
        echo //FROM %%s>> rich-prefix.sref
      )
    )
  )

  set SCRIPT_FLAGS=--scratch
  call ..\make.bat srlib-rich-prefix rich-prefix rich-prefix
endlocal
