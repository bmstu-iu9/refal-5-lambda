@echo off
goto :MAIN

:CALL_RLMAKE
  call %ROOT%\bin\rlmake --scratch --static %* || exit /b 1
goto :EOF

:CALL_RLMAKE_DEBUG
  call %ROOT%\bin\rlmake --scratch --static --debug %* || exit /b 1
goto :EOF

:MAKE_PREFIXES
  call :%1 rich-prefix-exe -o %ROOT%\lib\rich%2.exe-prefix || exit /b 1
  call :%1 slim-prefix-exe -o %ROOT%\lib\slim%2.exe-prefix || exit /b 1
  call :%1 --makelib rich-prefix-lib -o %ROOT%\lib\rich%2.lib-prefix || exit /b 1
goto :EOF

:MAIN
set ROOT=..\..\..

call :MAKE_PREFIXES CALL_RLMAKE "" || exit /b 1
call :MAKE_PREFIXES CALL_RLMAKE_DEBUG "-debug" || exit /b 1

if exist *.obj erase *.obj
if exist %ROOT%\lib\*.tds erase %ROOT%\lib\*.tds
