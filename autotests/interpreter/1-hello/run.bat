@echo off
setlocal
if exist REFAL1.DAT erase REFAL1.DAT
call ..\..\..\bin\srmake -R hello.ref
set RL_MODULE_PATH=
..\..\..\bin\rlgo --show-cookies=false ./hello argument
endlocal

if not exist REFAL1.DAT (
  echo File REFAL1.DAT is not exist
  exit /b 1
)

fc /b REFAL1.DAT REFAL1.DAT-sample
if errorlevel 1 (
  echo Files REFAL1.DAT REFAL1.DAT-sample are differ
  fc REFAL1.DAT REFAL1.DAT-sample
  exit /b 1
)

erase hello.rasl-module REFAL1.DAT
