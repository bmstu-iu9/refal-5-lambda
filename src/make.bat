@echo off
setlocal
  if {%RELEASE%}=={} (
    rem Максимум 40 000 000 байт (x32), 80 000 000 байт (x64)
    rem RLC_FLAGS используются только для сборки библиотек
    set RLC_FLAGS_PLUS=--markup-context --debug-info -OC -Werror
    set RLMAKE_FLAGS_PLUS=-X--markup-context -X--debug-info -X-OC -X-Werror
    set DEFAULT_SCRIPT_FLAGS=--rich --debug
  ) else (
    set RLC_FLAGS_PLUS=-OCdiADPRS --opt-tree-cycles=300 -Werror
    set RLMAKE_FLAGS_PLUS=-X-OCdiADPRS -X--opt-tree-cycles=300 -X-Werror
    set DEFAULT_SCRIPT_FLAGS=--scratch
  )

  set RLC_FLAGS=%RLC_FLAGS% %RLC_FLAGS_PLUS%
  set RLMAKE_FLAGS=%RLMAKE_FLAGS% %RLMAKE_FLAGS_PLUS%

  if not {%1}=={} goto :MAKE_PROJECT

  if not exist ..\bin\nul mkdir ..\bin
  call :MAKE_SUBDIR scripts install-scripts.bat || exit /b 1
  call :MAKE_SUBDIR rasl-constants make.bat || exit /b 1
  call :MAKE_SUBDIR compiler makeself-s.bat || exit /b 1
  call :MAKE_SUBDIR lexgen makeself-s.bat || exit /b 1
  call :MAKE_SUBDIR make make-s.bat || exit /b 1
  call :MAKE_SUBDIR lib make.bat || exit /b 1
  call :MAKE_SUBDIR make make.bat || exit /b 1
  call :MAKE_SUBDIR lexgen makeself.bat || exit /b 1
  call :MAKE_SUBDIR compiler makeself.bat || exit /b 1
  call :MAKE_SUBDIR interpreter make.bat || exit /b 1
  call :MAKE_SUBDIR nemytykh-random-program-generator make.bat || exit /b 1
  call :MAKE_SUBDIR rsl-decompiler make.bat || exit /b 1

  goto :END

:MAKE_PROJECT
  set DIR=%1
  set TARGET=%2
  set MAINSRC=%3
  set PATH_TO_RLC=%4
  if "%PATH_TO_RLC%"=="" (
    set PATH_TO_RLC=..\..
  )
  if "%SCRIPT_FLAGS%"=="" (
    set SCRIPT_FLAGS=%DEFAULT_SCRIPT_FLAGS%
  )
  if "%TARGET_SUFFIX%"=="" (
    set TARGET_SUFFIX=.exe
  )
  if not exist ..\..\build\%DIR%\nul mkdir ..\..\build\%DIR%
  if exist ..\..\build\%DIR%\*.* erase /Q ..\..\build\%DIR%\*.*
  call %PATH_TO_RLC%\bin\rlmake ^
    %SCRIPT_FLAGS% --keep-rasls -d ..\common %MAINSRC% ^
    -o _%TARGET%%TARGET_SUFFIX%
  if errorlevel 1 (
    if exist _%TARGET%%TARGET_SUFFIX% erase _%TARGET%%TARGET_SUFFIX%
    if exist *.obj erase *.obj
    if exist *.tds erase *.tds
    if exist *.rasl erase *.rasl
    if exist *.cpp erase *.cpp
    if exist *-locals.lst erase *-locals.lst
    if exist ..\common\*.rasl erase ..\common\*.rasl
    if exist ..\common\*.cpp erase ..\common\*.cpp
    exit /b 1
  )
  move _%TARGET%%TARGET_SUFFIX% ..\..\bin\%TARGET%%TARGET_SUFFIX%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.rasl ..\..\build\%DIR% >NUL
  if exist *-locals.lst move *-locals.lst ..\..\build\%DIR% >NUL
  if exist *.cpp move *.cpp ..\..\build\%DIR% >NUL
  if exist ..\common\*.rasl move ..\common\*.rasl ..\..\build\%DIR% >NUL
  if exist ..\common\*.cpp move ..\common\*.cpp ..\..\build\%DIR% >NUL
  for %%d in (\exe -rt\debug-stubs -rt\exe -rt) do (
    copy %PATH_TO_RLC%\lib\scratch%%d\*.rasl ..\..\build\%DIR% >NUL
    copy %PATH_TO_RLC%\lib\scratch%%d\*.cpp ..\..\build\%DIR% >NUL
  )

:END
endlocal
goto :EOF

:MAKE_SUBDIR
setlocal
  set DIR=%1
  set MAKE=%2
  pushd %DIR%
  call %MAKE% || exit /b 1
  popd
endlocal
goto :EOF
