@echo off
setlocal
  set SCRIPT_FLAGS=--scratch --static
  set DEBUG=
  call :MAKE_PREFIXES

  set SCRIPT_FLAGS=--scratch --static --debug
  set DEBUG=-debug
  call :MAKE_PREFIXES

  if exist *.obj erase *.obj
  if exist ..\..\lib\*.tds erase ..\..\lib\*.tds
endlocal
goto :EOF

:MAKE_PREFIXES
setlocal
  call ..\..\bin\srmake %SCRIPT_FLAGS% rich-prefix-exe ^
    -o ..\..\lib\rich%DEBUG%.exe-prefix

  call ..\..\bin\srmake %SCRIPT_FLAGS% slim-prefix-exe ^
    -o ..\..\lib\slim%DEBUG%.exe-prefix

  call ..\..\bin\srmake %SCRIPT_FLAGS% --makelib rich-prefix-lib ^
    -o ..\..\lib\rich%DEBUG%.lib-prefix
endlocal
goto :EOF
