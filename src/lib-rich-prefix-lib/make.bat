@echo off
setlocal
  set SCRIPT_FLAGS=--scratch
  set SRMAKE_FLAGS=%SRMAKE_FLAGS% --makelib
  call ..\make.bat lib-rich-prefix-lib rich-prefix rich-prefix
  copy ..\..\bin\rich-prefix.exe ..\..\lib\rich.lib-prefix
  move ..\..\bin\rich-prefix.exe ..\..\lib\rich-debug.lib-prefix
endlocal
