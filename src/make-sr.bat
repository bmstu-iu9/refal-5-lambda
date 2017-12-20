@echo off
set SOURCES=Main Utils Lexer Parser Transformer Plainer Tests
set TARGEXE=Main-1.exe

if exist ..\rsls\Main-1.exe call :TEST NUL

call :SRMAKE Main.ref
move Main.exe %TARGEXE%

call :TEST MAKE-OUT

echo ===TEST OUT===
set TARGEXE=Main-2.exe
call :TEST MAKE-OUT

goto :EOF

:TEST
  call :RUN_TRANSFORMER _tests_
  echo.
  for %%s in (%SOURCES%) do call :TRANSFORM %%s %1

  if {%1}=={MAKE-OUT} (
    pushd out
    call :SRMAKE Main.ref
    popd
    move out\Main.exe Main-2.exe
  )
goto :EOF

:TRANSFORM
  set SOURCE=%1.ref
  mkdir out >NUL 2>NUL
  set TARGET=out\%SOURCE%
  if {%2}=={NUL} set TARGET=NUL
  call :RUN_TRANSFORMER %SOURCE% %TARGET%
  echo.
  if {%2}=={MAKE-OUT} (
    pushd out
    call srefc -C %SOURCE%
    popd
    if not exist out\%SOURCE:.ref=.rasl% call :FAILED
  )
goto :EOF

:RUN_TRANSFORMER
  %TARGEXE% %* 2>__err.txt || call :FAILED
  erase __err.txt
goto :EOF

:FAILED
  echo FAILED
  type __err.txt
  erase ..\rsls\Main.rsl
  exit
goto :EOF

:SRMAKE
  call srmake %*
  if exist *.rasl erase *.rasl
  if exist *.cpp erase *.cpp
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
goto :EOF
