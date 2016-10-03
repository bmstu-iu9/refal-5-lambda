@echo off
setlocal
  if {%RELEASE%}=={} (
    rem Максимум 40 000 000 байт (x32), 80 000 000 байт (x64)
    rem SREFC_FLAGS используются только для сборки библиотек
    set SREFC_FLAGS_PLUS=--markup-context
    set SRMAKE_FLAGS_PLUS= ^
      -X--markup-context ^
      -X-C-DMEMORY_LIMIT=2500000 ^
      -X-C-DSTEP_LIMIT=30000000
  ) else (
    if {%RELEASE%}=={Benchmark} (
      set SREFC_FLAGS_PLUS=
      set SRMAKE_FLAGS_PLUS=
    ) else (
      set SREFC_FLAGS_PLUS=-OPR
      set SRMAKE_FLAGS_PLUS=-X-OPR
    )
  )

  set SREFC_FLAGS=%SREFC_FLAGS% %SREFC_FLAGS_PLUS%
  set SRMAKE_FLAGS=%SRMAKE_FLAGS% %SRMAKE_FLAGS_PLUS%

  if not {%1}=={} goto :MAKE_PROJECT

  if not exist ..\bin\nul mkdir ..\bin
  call :MAKE_SUBDIR scripts install-scripts.bat
  call :MAKE_SUBDIR compiler makeself-s.bat
  call :MAKE_SUBDIR lexgen makeself-s.bat
  copy ..\distrib\bin\srmake-core.exe ..\bin
  call :MAKE_SUBDIR srlib make.bat
  call :MAKE_SUBDIR srmake make.bat
  call :MAKE_SUBDIR lexgen makeself.bat
  call :MAKE_SUBDIR compiler makeself.bat

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
  if not exist ..\..\build\%DIR%\nul mkdir ..\..\build\%DIR%
  call %PATH_TO_SREFC%\bin\srmake -d ..\common %MAINSRC%
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
