@echo off
call clear.bat
for %%r in (*.ref) do refc %%r
for %%r in (*.ref) do call :TEST %%r
for %%d in (*.diff) do type %%d
goto :EOF

:TEST
  ..\decompiler %~n1.rsl
  ren %1 %1.bak
  refgo Lexer+Main+Parser+Plainer+Tests+Transformer+Utils %~n1-decompiled.ref %1
  ren %~n1.rsl %~n1.rsl.bak
  refc %1
  fc /b %~n1.rsl %~n1.rsl.bak > %1.diff
  ren %1 %1.new
  ren %1.bak %1
goto :EOF