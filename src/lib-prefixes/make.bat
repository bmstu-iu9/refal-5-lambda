@echo off
setlocal
  set SCRIPT_FLAGS=--scratch --static
  set DEBUG=
  call :MAKE_PREFIXES

  set SCRIPT_FLAGS=--scratch --static --debug
  set DEBUG=-debug
  call :MAKE_PREFIXES
endlocal
goto :EOF

:MAKE_PREFIXES
setlocal
  call ..\make.bat lib-prefixes rich%DEBUG% rich%DEBUG%-prefix-exe
  move ..\..\bin\rich%DEBUG%.exe ..\..\lib\rich%DEBUG%.exe-prefix

  call ..\make.bat lib-prefixes slim%DEBUG% slim%DEBUG%-prefix-exe
  move ..\..\bin\slim%DEBUG%.exe ..\..\lib\slim%DEBUG%.exe-prefix

  set SRMAKE_FLAGS=%SRMAKE_FLAGS% --makelib
  call ..\make.bat lib-prefixes rich%DEBUG% rich%DEBUG%-prefix-lib
  move ..\..\bin\rich%DEBUG%.exe ..\..\lib\rich%DEBUG%.lib-prefix
endlocal
goto :EOF
