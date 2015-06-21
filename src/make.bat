@echo off
set RSLS=Main+Utils+Lexer+Parser+Transformer+Plainer
set SOURCES=%RSLS:+=.ref %.ref
for %%s in (%SOURCES%) do (
  refc %%s >NUL 2>%temp%\stderr.txt
  if errorlevel 1 (
    echo %%s:
    type %temp%\stderr.txt
    erase %temp%\stderr.txt
    exit
  )
  erase %temp%\stderr.txt
)
mkdir ..\rsls >NUL 2>NUL
move *.rsl ..\rsls
echo.

for %%s in (%SOURCES%) do call :test %%s

goto :EOF

:test
  set SOURCE=%1
  set TARGET=%SOURCE:.ref=.out.ref%
  echo Y | refgo ..\rsls(%RSLS%) %SOURCE% %TARGET% || exit
  echo.
goto :EOF
