@echo off
setlocal
  if not {%1}=={} goto :MAKE_PROJECT

  call :MAKE_SUBDIR srlib make.bat
  call :MAKE_SUBDIR compiler makeself.bat
  call :MAKE_SUBDIR lexgen make.bat
  call :MAKE_SUBDIR srmake make.bat

  goto :END

:MAKE_PROJECT
  call ..\..\c-plus-plus.conf.bat
  set DIR=%1
  set TARGET=%2
  set MAINSRC=%~n3
  set FLAGS=%4
  set PATH_TO_SREFC=%5
  if {%PATH_TO_SREFC%}=={} (
    set PATH_TO_SREFC=..\..
  )
  if not exist ..\..\build\%DIR%\nul mkdir ..\..\build\%DIR%
  %PATH_TO_SREFC%\bin\srmake ^
    -s %PATH_TO_SREFC%\bin\srefc ^
    -c "%CPPLINE% -I%PATH_TO_SREFC%\srlib %FLAGS%" ^
    -d ..\common -d %PATH_TO_SREFC%\srlib %MAINSRC%
  if exist a.exe move a.exe ..\..\bin\%TARGET%.exe
  if exist %MAINSRC%.exe move %MAINSRC%.exe ..\..\bin\%TARGET%.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.cpp ..\..\build\%DIR% >NUL
  move ..\common\*.cpp ..\..\build\%DIR% >NUL
  copy %PATH_TO_SREFC%\srlib\*.cpp ..\..\build\%DIR% >NUL

:END
endlocal
goto :EOF

:MAKE_SUBDIR
setlocal
  set DIR=%1
  set MAKE=%2
  pushd %DIR%
  call %MAKE%
  popd
endlocal
goto :EOF
