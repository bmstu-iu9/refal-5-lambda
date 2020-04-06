@echo off
setlocal
if exist REFAL1.DAT erase REFAL1.DAT
if exist dump.txt erase dump.txt
call ..\..\..\bin\srmake -R test.ref
set RL_MODULE_PATH=
..\..\..\bin\rlgo --step-limit=1000 --dump-file=dump.txt ./test
endlocal

if exist REFAL1.DAT (
  echo The REFAL1.DAT file must not exist
  exit /b 1
)

if not exist dump.txt (
  echo The dump.txt file does not exist
  exit /b 1
)

erase test.rasl-module dump.txt
