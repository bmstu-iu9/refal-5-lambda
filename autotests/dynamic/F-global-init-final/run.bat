@echo off
erase *.rasl-module *.rasl *.exe

call ..\..\..\bin\rlc --keep-rasls -OG- main.ref lib1.ref lib2.ref --log=log.txt
main.exe
if errorlevel 1 (
  echo TEST FAILED!
  exit /b 1
) else (
  call :CHECK_EXIST 1-init.ok || exit /b 1
  call :CHECK_EXIST 2-go.ok || exit /b 1
  call :CHECK_EXIST 3-final.ok || exit /b 1

  echo Test OK!
  erase *.rasl-module *.rasl *.exe log.txt
)


call ..\..\..\bin\rlc --keep-rasls -OG main.ref lib1.ref lib2.ref --log=log.txt
main.exe
if errorlevel 1 (
  echo TEST FAILED!
  exit /b 1
) else (
  call :CHECK_EXIST 1-init.ok || exit /b 1
  call :CHECK_EXIST 2-go.ok || exit /b 1
  call :CHECK_EXIST 3-final.ok || exit /b 1

  echo Test OK!
  erase *.rasl-module *.rasl *.exe *-locals.lst log.txt
)

exit /b 0

:CHECK_EXIST
setlocal
  if exist %1 (
    echo File %1 exists...
    erase %1
  ) else (
    echo TEST FAILED: file %1 does not exist!
    exit /b 1
  )
endlocal
goto :EOF
