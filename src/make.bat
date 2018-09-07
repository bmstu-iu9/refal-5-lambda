@echo off
setlocal
  if {%RELEASE%}=={} (
    rem Максимум 40 000 000 байт (x32), 80 000 000 байт (x64)
    rem SREFC_FLAGS используются только для сборки библиотек
    set SREFC_FLAGS_PLUS=--markup-context --debug-info -OC
    set SRMAKE_FLAGS_PLUS=-X--markup-context -X--debug-info -X-OC
    set DEFAULT_SCRIPT_FLAGS=--rich-debug
  ) else (
    set SREFC_FLAGS_PLUS=-OCdPR
    set SRMAKE_FLAGS_PLUS=-X-OCdPR
    set DEFAULT_SCRIPT_FLAGS=--scratch
  )

  set SREFC_FLAGS=%SREFC_FLAGS% %SREFC_FLAGS_PLUS%
  set SRMAKE_FLAGS=%SRMAKE_FLAGS% %SRMAKE_FLAGS_PLUS%

  if not {%1}=={} goto :MAKE_PROJECT

  if not exist ..\bin\nul mkdir ..\bin
  call :MAKE_SUBDIR scripts install-scripts.bat
  call :MAKE_SUBDIR rasl-constants make.bat
  call :MAKE_SUBDIR compiler makeself-s.bat
  call :MAKE_SUBDIR lexgen makeself-s.bat
  call :MAKE_SUBDIR srmake make-s.bat
  call :MAKE_SUBDIR srlib make.bat
  call :MAKE_SUBDIR srmake make.bat
  call :MAKE_SUBDIR lexgen makeself.bat
  call :MAKE_SUBDIR compiler makeself.bat
  call :MAKE_SUBDIR nemytykh-random-program-generator make.bat

  goto :END

:MAKE_PROJECT
  set DIR=%1
  set TARGET=%2
  set MAINSRC=%~n3
  set CPPLINE_FLAGS=%~4
  set PATH_TO_SREFC=%5
  if {%PATH_TO_SREFC%}=={} (
    set PATH_TO_SREFC=..\..
  )
  if {%SCRIPT_FLAGS%}=={} (
    set SCRIPT_FLAGS=%DEFAULT_SCRIPT_FLAGS%
  )
  if not exist ..\..\build\%DIR%\nul mkdir ..\..\build\%DIR%
  if exist ..\..\build\%DIR%\*.* erase /Q ..\..\build\%DIR%\*.*
  call %PATH_TO_SREFC%\bin\srmake %SCRIPT_FLAGS% -d ../common %MAINSRC% -o %TARGET%.exe
  move %TARGET%.exe ..\..\bin
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.rasl ..\..\build\%DIR% >NUL
  if exist *.cpp move *.cpp ..\..\build\%DIR% >NUL
  if exist ..\common\*.rasl move ..\common\*.rasl ..\..\build\%DIR% >NUL
  if exist ..\common\*.cpp move ..\common\*.cpp ..\..\build\%DIR% >NUL
  copy %PATH_TO_SREFC%\srlib\scratch\*.rasl ..\..\build\%DIR% >NUL
  copy %PATH_TO_SREFC%\srlib\scratch\*.cpp ..\..\build\%DIR% >NUL

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
