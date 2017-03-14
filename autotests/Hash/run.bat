@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  call ..\..\c-plus-plus.conf.bat
  if {%1}=={} (
    call :RUN_ALL_TESTS *.sref
  ) else (
    call :RUN_ALL_TESTS %*
  )
endlocal
goto :EOF

:RUN_ALL_TESTS
setlocal
  set COMMON_SRFLAGS= ^
    -c "%CPPLINEE%" ^
    --targsuffix=.exe ^
    -D../../src/srlib ^
    -D../../src/srlib/platform-Windows ^
    -f-DSTEP_LIMIT=1000 ^
    -f-DMEMORY_LIMIT=1000 ^
    -f-DDUMP_FILE="\\"__dump.txt\\"" ^
    -f-DDONT_PRINT_STATISTICS ^
    refalrts ^
    refalrts-platform-specific

  copy ..\..\src\srlib\Hash.sref .
  for %%s in (%*) do call :COMPILE %%s || exit /b 1

  call :SIMPLE_TESTS OK ^
    Hash-HashLittle2-Chars ^
    || exit /b 1

  call :SIMPLE_TESTS FAIL ^
    || exit /b 1

  erase Hash.rasl Hash.cpp Hash.sref
endlocal
goto :EOF

:COMPILE
setlocal
  echo Compiling %1
  set SRC=%1
  set TARGET=%~n1.exe

  if %SRC%==Hash.sref (
    echo ...skips
    endlocal
    goto :EOF
  )

  ..\..\bin\srefc-core %SRC% -o %TARGET% %COMMON_SRFLAGS% Hash lookup3 ^
    2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON %SRC%, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if not exist %TARGET% (
    echo COMPILATION FAILED
    exit /b 1
  )

  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
endlocal
goto :EOF

:SIMPLE_TESTS
setlocal
  set MODE=%1
  shift
  goto :%MODE%_TESTS

:OK_TESTS
  if {%1}=={} goto SIMPLE_TESTS_END
  if exist %1.exe (
    echo Pass simple OK test %1...
    call :RUN_EXE %1 || exit /b 1
    call :CLEANUP %1
  )
  shift
  goto :OK_TESTS

:FAIL_TESTS
  if {%1}=={} goto SIMPLE_TESTS_END
  if exist %1.exe (
    echo Pass simple FAIL test %1...
    %1.exe
    if not errorlevel 1 (
      echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
      exit /b 1
    )
    echo Ok! This failure was normal and expected
    call :CLEANUP %1
  )
  shift
  goto :FAIL_TESTS

:SIMPLE_TESTS_END
endlocal
goto :EOF

:RUN_EXE
  %1 > __out.txt
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )
goto :EOF

:CLEANUP
  if exist %1.rasl erase %1.rasl
  if exist %1.cpp erase %1.cpp
  if exist %1.exe erase %1.exe
  if exist __dump.txt erase __dump.txt
  if exist __out.txt erase __out.txt
  if exist __written_file.txt erase __written_file.txt
goto :EOF

:COMPARE
  fc /b "%1" "%2"
  if errorlevel 1 (
    echo FILES %1 and %2 is differ:
    fc "%1" "%2"
    exit /b 1
  )
goto :EOF
