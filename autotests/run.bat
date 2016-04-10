@echo off
call :MAIN %*
goto :EOF

:MAIN
setlocal
  call ..\c-plus-plus.conf.bat
  if {%1}=={} (
    for %%s in (*.sref) do call :RUN_TEST %%s
  ) else (
    for %%s in (%*) do call :RUN_TEST %%s
  )
endlocal
goto :EOF

:RUN_TEST
setlocal
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1
endlocal
goto :EOF

:RUN_TEST_AUX
setlocal
  echo Passing %1...
  set SREF=%1
  set CPP=%~n1.cpp
  set EXE=%~n1.exe

  ..\bin\srefc-core %1 2> __error.txt
  if errorlevel 1 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit
  )
  erase __error.txt
  if not exist %CPP% (
    echo COMPILATION FAILED
    exit
  )

  %CPPLINE% -I../src/srlib -DDUMP_FILE=\"dump.txt\" -DDONT_PRINT_STATISTICS %CPP% ../src/srlib/refalrts.cpp
  if errorlevel 1 (
    echo COMPILATION FAILED
    exit
  )
  if exist a.exe move a.exe %EXE%

  %EXE%
  if errorlevel 1 (
    echo TEST FAILED, SEE dump.txt
    exit
  )

  erase %CPP% %EXE%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist dump.txt erase dump.txt
  echo.
endlocal

goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX
setlocal
  echo Passing %1 (syntax error recovering)...
  set SREF=%1
  set CPP=%~n1.cpp

  ..\bin\srefc-core %1 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit
  )
  erase __error.txt
  if exist %CPP% (
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    erase %CPP%
    exit
  )
  echo Ok! Compiler didn't crash on invalid syntax
  echo.
endlocal
goto :EOF