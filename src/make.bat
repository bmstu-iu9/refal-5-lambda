@echo off
set RSLS=Main+Utils+Lexer+Parser+Transformer+Plainer
set SOURCES=%RSLS:+=.ref %.ref
refc %SOURCES%
mkdir ..\rsls >NUL 2>NUL
move *.rsl ..\rsls
echo.

for %%s in (%SOURCES%) do call :test %%s

goto :EOF

:test
  set SOURCE=%1
  set TARGET=%SOURCE:.ref=.out.ref%
  refgo ..\rsls(%RSLS%) %SOURCE% %TARGET%
  echo.
goto :EOF
