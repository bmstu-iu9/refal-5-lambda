@echo off
set RSLS=Main+Utils+Lexer+Parser+Transformer+Plainer+Tests
set RSLDIR=..\rsls
set SOURCES=%RSLS:+=.ref %.ref

mkdir ..\rsls >NUL 2>NUL
mkdir ..\rsls2 >NUL 2>NUL

if exist ..\rsls\Main.rsl call :TEST NUL

for %%s in (%SOURCES%) do call :REFC %%s
move *.rsl %RSLDIR% >NUL

call :TEST REFC-OUT

echo ===TEST OUT===
set RSLDIR=..\rsls2
call :TEST REFC-OUT

goto :EOF

:TEST
  call :RUN_TRANSFORMER _tests_
  echo.
  for %%s in (%SOURCES%) do call :TRANSFORM %%s %1
goto :EOF

:TRANSFORM
  set SOURCE=%1
  set TARGET=%SOURCE:.ref=.out.ref%
  if {%2}=={NUL} set TARGET=NUL
  call :RUN_TRANSFORMER %SOURCE% %TARGET%
  echo.
  if {%2}=={REFC-OUT} (
    call :REFC %TARGET%
    move %TARGET:.ref=.rsl% ..\rsls2\%TARGET:.out.ref=.rsl% >NUL
  )
goto :EOF

:RUN_TRANSFORMER
  echo Y | refgo %RSLDIR%(%RSLS%) %* 2>__err.txt || call :FAILED
  erase __err.txt
goto :EOF

:FAILED
  echo FAILED
  type __err.txt
  erase ..\rsls\Main.rsl
  exit
goto :EOF

:REFC
  refc %1 >NUL 2>%temp%\stderr.txt
  if errorlevel 1 (
    echo %1:
    type %temp%\stderr.txt
    erase %temp%\stderr.txt
    set RSLDIR=..\rsls
    call :RUN_TRANSFORMER %1 NUL
    exit
  )
  erase %temp%\stderr.txt
goto :EOF