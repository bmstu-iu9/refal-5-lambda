@echo off
erase *.rasl-module *.rasl *.exe
call ..\..\..\bin\srefc --keep-rasls -OC -R a\foo.sref
call ..\..\..\bin\srefc --keep-rasls -OC -R b\bar.sref
call ..\..\..\bin\rlmake --keep-rasls -X-OC -X--markup-context caller.ref
setlocal
  set RL_MODULE_PATH=a;b
  caller.exe
  if errorlevel 1 (
    echo TEST FAILED!
  ) else (
    echo Test OK!
    erase *.rasl-module *.rasl *.exe
  )
endlocal
