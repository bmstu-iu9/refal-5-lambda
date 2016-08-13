@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  call ..\c-plus-plus.conf.bat
  if {%1}=={} (
    for %%s in (*.sref) do call :RUN_TEST %%s || exit /b 1
  ) else (
    for %%s in (%*) do call :RUN_TEST %%s || exit /b 1
  )
endlocal
goto :EOF

:RUN_TEST
setlocal
  set TEST_CPP_FLAGS= ^
    -I../src/srlib ^
    -DSTEP_LIMIT=1000 ^
    -DMEMORY_LIMIT=1000 ^
    -DDUMP_FILE=\"__dump.txt\" ^
    -DDONT_PRINT_STATISTICS
  set SRFLAGS=
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OP
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OR
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OPR
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=--gen=interp
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OP --gen=interp
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OR --gen=interp
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
  set SRFLAGS=-OPR --gen=interp
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1 || exit /b 1
endlocal
goto :EOF

:RUN_TEST_AUX
setlocal
  echo Passing %1 (flags %SRFLAGS%)...
  set SREF=%1
  set CPP=%~n1.cpp
  set EXE=%~n1.exe

  ..\bin\srefc-core %SRFLAGS% %1 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist %CPP% (
    echo COMPILATION FAILED
    exit /b 1
  )

  %CPPLINE% %TEST_CPP_FLAGS% %CPP% ../src/srlib/refalrts.cpp
  if errorlevel 1 (
    echo COMPILATION FAILED
    exit /b 1
  )
  if exist a.exe move a.exe %EXE%

  %EXE%
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )

  erase %CPP% %EXE%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.FAILURE
setlocal
  echo Passing %1 (expecting failure, flags %SRFLAGS%)...
  set SREF=%1
  set CPP=%~n1.cpp
  set EXE=%~n1.exe

  ..\bin\srefc-core %SRFLAGS% %1 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist %CPP% (
    echo COMPILATION FAILED
    exit /b 1
  )

  %CPPLINE% %TEST_CPP_FLAGS% %CPP% ../src/srlib/refalrts.cpp
  if errorlevel 1 (
    echo COMPILATION FAILED
    exit /b 1
  )
  if exist a.exe move a.exe %EXE%

  %EXE%
  if not errorlevel 100 (
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit /b 1
  )

  erase %CPP% %EXE%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  echo Ok! This failure was normal and expected
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX
setlocal
  echo Passing %1 (syntax error recovering, flags %SRFLAGS%)...
  set SREF=%1
  set CPP=%~n1.cpp

  ..\bin\srefc-core %SRFLAGS% %1 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if exist %CPP% (
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    erase %CPP%
    exit /b 1
  )
  echo Ok! Compiler didn't crash on invalid syntax
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.LEXGEN
setlocal
  echo Passing %1 (lexgen, flags %SRFLAGS%)...
  set SREF=%1

  ..\bin\lexgen --from=%SREF% --to=_lexgen-out.sref 2> __error.txt
  if errorlevel 100 (
    echo LEXGEN ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist _lexgen-out.sref (
    echo LEXGEN FAILED
    exit /b 1
  )

  ..\bin\srefc-core %SRFLAGS% _lexgen-out.sref 2> __error.txt
  if errorlevel 100 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist _lexgen-out.cpp (
    echo COMPILATION FAILED
    exit /b 1
  )

  %CPPLINE% %TEST_CPP_FLAGS% _lexgen-out.cpp ../src/srlib/refalrts.cpp
  if errorlevel 1 (
    echo COMPILATION FAILED
    exit /b 1
  )
  if exist a.exe move a.exe _lexgen-out.exe

  _lexgen-out.exe
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )

  erase _lexgen-out.*
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  echo.
endlocal
goto :EOF
