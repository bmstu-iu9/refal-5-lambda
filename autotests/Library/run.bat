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
    --exesuffix=.exe ^
    -D../../src/srlib ^
    -D../../src/srlib/platform-Windows ^
    -f-DSTEP_LIMIT=1000 ^
    -f-DMEMORY_LIMIT=1000 ^
    -f-DDUMP_FILE="\\"__dump.txt\\"" ^
    -f-DDONT_PRINT_STATISTICS ^
    refalrts ^
    refalrts-platform-specific

  copy ..\..\src\srlib\Library.sref .
  for %%s in (%*) do call :COMPILE %%s || exit /b 1

  call :SIMPLE_TESTS OK ^
    Library-Math-OK ^
    Library-FOpen-FReadLine-FClose ^
    Library-ExistFile ^
    Library-IntFromStr-StrFromInt-Chr-Ord ^
    Library-SymbCompare ^
    Library-SymbType ^
    Library-Implode-Explode ^
    Library-FReadBytes ^
    Library-FTell ^
    Library-FSeek ^
    || exit /b 1

  call :SIMPLE_TESTS FAIL ^
    Library-Math-Fail ^
    Library-Math-Div-Fail ^
    Library-Math-Mod-Fail ^
    Library-FOpen-Fail ^
    Library-SymbCompare-Fail ^
    Library-SymbType-Fail ^
    Library-Implodes-Fail ^
    || exit /b 1

  if exist Library-WriteLine.exe (
    echo Pass Library-WriteLine test...
    call :RUN_EXE Library-WriteLine || exit /b 1
    call :COMPARE __out.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-WriteLine
  )

  if exist Library-WriteLine-Expr.exe (
    echo Pass Library-WriteLine-Expr test...
    call :RUN_EXE Library-WriteLine-Expr || exit /b 1
    call :COMPARE __out.txt WriteLine-Expr.txt || exit /b 1
    call :CLEANUP Library-WriteLine-Expr
  )

  if exist Library-FOpen-FWriteLine-FClose.exe (
    echo Pass Library-FOpen-FWriteLine-FClose test...
    call :RUN_EXE Library-FOpen-FWriteLine-FClose || exit /b 1
    call :COMPARE __written_file.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-FOpen-FWriteLine-FClose
  )

  if exist Library-ReadLine-2lines.exe (
    echo Pass Library-ReadLine-2lines test...
    Library-ReadLine-2lines.exe < 2lines.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :CLEANUP Library-ReadLine-2lines
  )

  if exist Library-ReadLine-2lines-no-eol.exe (
    echo Pass Library-ReadLine-2lines-no-eol test...
    Library-ReadLine-2lines-no-eol.exe < 2lines-no-eol.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :CLEANUP Library-ReadLine-2lines-no-eol
  )

  if exist Library-GetEnv.exe (
    echo Pass Library-GetEnv test...
    setlocal
    set Foo=Bar
    set NoEnv=
    call :RUN_EXE Library-GetEnv || exit /b 1
    endlocal
    call :CLEANUP Library-GetEnv
  )

  if exist Library-Exit.exe (
    echo Pass Library-Exit test...
    Library-Exit.exe
    if errorlevel 43 (
      echo TEST FAILED, ERRCODE GREATER THAN 42
      exit /b 1
    ) else if not errorlevel 42 (
      echo TEST FAILED, ERRCODE LESS THAN 42
      exit /b 1
    )
    call :CLEANUP Library-Exit
  )

  if exist Library-System.exe (
    echo Pass Library-System test...
    call :RUN_EXE Library-System || exit /b 1
    call :COMPARE __out.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-System
  )

  if exist Library-FOpen-Append.exe (
    echo Pass Library-FOpen-Append test...
    call :RUN_EXE Library-FOpen-Append || exit /b 1
    call :CLEANUP Library-FOpen-Append
  )

  if exist Library-FOpen-extended-mode.exe (
    echo Pass Library-FOpen-extended-mode test...
    call :RUN_EXE Library-FOpen-extended-mode || exit /b 1
    call :COMPARE __written_file.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-FOpen-extended-mode
  )

  if exist Library-FWriteBytes.exe (
    echo Pass Library-FWriteBytes test...
    call :RUN_EXE Library-FWriteBytes || exit /b 1
    call :COMPARE __written_file.txt 2lines-no-eol.txt || exit /b 1
    call :CLEANUP Library-FWriteBytes
  )

  if exist Library-RenameFile.exe (
    echo Pass Library-RenameFile test...
    copy 2lines.txt source.txt
    call :RUN_EXE Library-RenameFile || exit /b 1
    call :COMPARE __written_file.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-RenameFile
  )

  if exist Library-RemoveFile.exe (
    echo Pass Library-RemoveFile test...
    copy 2lines.txt for_remove.txt
    call :RUN_EXE Library-RemoveFile || exit /b 1
    if exist for_remove.txt (
      echo FILE for_remove.txt MUST BE REMOVED
      exit /b 1
    )
    call :CLEANUP Library-RemoveFile
  )

  erase Library.rasl Library.cpp Library.sref
endlocal
goto :EOF

:COMPILE
setlocal
  echo Compiling %1
  set SRC=%1
  set TARGET=%~n1.exe

  if %SRC%==Library.sref (
    echo ...skips
    endlocal
    goto :EOF
  )

  ..\..\bin\srefc-core %SRC% -o %TARGET% %COMMON_SRFLAGS% Library 2>__error.txt
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
