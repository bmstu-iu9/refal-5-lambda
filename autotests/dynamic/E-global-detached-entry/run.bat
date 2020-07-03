@echo off
erase *.rasl-module *.rasl *.exe

call ..\..\..\bin\rlc --keep-rasls main.ref lib.ref --log=log.txt
main.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe log.txt
)

call ..\..\..\bin\rlc --keep-rasls -OG main.ref lib.ref --log=log.txt
main.exe
if errorlevel 1 (
  echo TEST FAILED!
) else (
  echo Test OK!
  erase *.rasl-module *.rasl *.exe *-locals.lst log.txt
)
