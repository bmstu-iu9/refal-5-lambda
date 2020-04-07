@echo off

call ..\..\bin\rlc --keep-rasls hello.rsl
if not exist hello.exe (
  echo COMPILING hello.rsl TO hello.exe FAILS!
  exit /b 1
)
hello.exe

fc REFAL10.DAT REFAL10-SAMPLE.DAT
if errorlevel 1 (
  echo FILES REFAL10.DAT AND REFAL10-SAMPLE.DAT IS DIFFER!
  exit /b 1
)

erase hello.exe hello.rasl REFAL10.DAT
