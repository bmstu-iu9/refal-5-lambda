@echo off
goto :MAIN

:CALL_RLMAKE
  call %ROOT%\bin\rlmake --scratch --static %*
goto :EOF

:CALL_RLMAKE_DEBUG
  call %ROOT%\bin\rlmake --scratch --static --debug %*
goto :EOF

:MAKE_PREFIXES
  call :%1 rich-prefix-exe -o %ROOT%\lib\rich%2.exe-prefix
  call :%1 slim-prefix-exe -o %ROOT%\lib\slim%2.exe-prefix
  call :%1 --makelib rich-prefix-lib -o %ROOT%\lib\rich%2.lib-prefix
goto :EOF

:MAIN
set ROOT=..\..\..

call :MAKE_PREFIXES CALL_RLMAKE ""
call :MAKE_PREFIXES CALL_RLMAKE_DEBUG "-debug"

if exist *.obj erase *.obj
if exist %ROOT%\lib\*.tds erase %ROOT%\lib\*.tds
