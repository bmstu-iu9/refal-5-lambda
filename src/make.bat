@echo off
set RSLS=Main+Utils+Lexer+Parser+Transformer+Plainer
set SOURCES=%RSLS:+=.ref %.ref
if exist ..\rsls\Main.rsl call :TEST NUL
for %%s in (%SOURCES%) do call :REFC %%s
mkdir ..\rsls >NUL 2>NUL
move *.rsl ..\rsls
echo.

call :TEST REFC-OUT

goto :EOF

:TEST
  for %%s in (%SOURCES%) do call :PREPROCESS %%s %1
goto :EOF

:PREPROCESS
  set SOURCE=%1
  set TARGET=%SOURCE:.ref=.out.ref%
  if {%2}=={NUL} set TARGET=NUL
  echo Y | refgo ..\rsls(%RSLS%) %SOURCE% %TARGET% || exit
  echo.
  if {%2}=={REFC-OUT} (
    call :REFC %TARGET%
    erase %TARGET:.ref=.rsl%
  )
goto :EOF

:REFC
  refc %1 >NUL 2>%temp%\stderr.txt
  if errorlevel 1 (
    echo %1:
    type %temp%\stderr.txt
    erase %temp%\stderr.txt
    exit
  )
  erase %temp%\stderr.txt
goto :EOF
