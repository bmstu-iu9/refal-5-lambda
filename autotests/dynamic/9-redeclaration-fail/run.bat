@echo off
erase *.rasl-module *.rasl *.exe

rem Теперь компилятор проверяет дубликаты entry-функций при создании,
rem поэтому исполнимый файл с двумя одноимёнными entry-функциями
rem нельзя создать командой
rem call ..\..\..\bin\rlmake --keep-rasls -X-OC -X--markup-context caller.ref

call ..\..\..\bin\rlc --no-sources -o prefix.exe
call ..\..\..\bin\rlc -C -OC --markup-context caller.ref
copy /b prefix.exe+caller.rasl caller.exe

caller.exe
if not errorlevel 1 (
  echo TEST FAILED! Program must be fail!
) else (
  echo Test OK! This failure is normal and expected!
  erase *.rasl-module *.rasl *.exe
)
