@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  call ..\..\scripts\load-config.bat || exit /b 1
  if {%1}=={} (
    call :RUN_ALL_TESTS *.sref || exit /b 1
  ) else (
    call :RUN_ALL_TESTS %* || exit /b 1
  )
endlocal
goto :EOF

:RUN_ALL_TESTS
setlocal
  set COMMON_SRFLAGS= ^
    -c "%CPPLINEE%" ^
    --exesuffix=.exe ^
    -D../../src/srlib/platform-Windows ^
    -D../../src/srlib ^
    -f-DSTEP_LIMIT=1500 ^
    -f-DMEMORY_LIMIT=1000 ^
    -f-DIDENTS_LIMIT=100 ^
    %DUMP_FILE_NAME_OPTION% ^
    -f-DDONT_PRINT_STATISTICS ^
    refalrts ^
    refalrts-allocator ^
    refalrts-debugger ^
    refalrts-diagnostic-initializer ^
    refalrts-dynamic ^
    refalrts-functions ^
    refalrts-main ^
    refalrts-profiler ^
    refalrts-vm ^
    refalrts-platform-specific

  echo Precompile Library.sref
  copy ..\..\src\srlib\Library.sref .
  ..\..\bin\srefc-core %COMMON_SRFLAGS% -C Library 2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON Library.sref, SEE __error.txt
    exit /b 1
  )
  rem Some C++ compilers write syntax error messages to stderr,
  rem don't erase __error.txt
  if not exist Library.sref (
    echo COMPILATION FAILED, MAYBE SEE __error.txt
    exit /b 1
  )
  erase __error.txt Library.sref
  echo.

  for %%s in (%*) do call :COMPILE %%s || exit /b 1

  call :SIMPLE_TESTS OK ^
    Library-Math-OK ^
    Library-LongMath-Add-Sub-Compare-OK ^
    Library-LongMath-Mul-OK ^
    Library-LongMath-Divmod-OK ^
    Library-LongMath-Div-OK ^
    Library-LongMath-Mod-OK ^
    Library-LongMath-Numb-OK ^
    Library-LongMath-Symb-OK ^
    Library-FOpen-FReadLine-FClose ^
    Library-IntFromStr-StrFromInt-Chr-Ord ^
    Library-SymbCompare ^
    Library-Type ^
    Library-Implode-Explode_Ext ^
    Library-FReadBytes ^
    Library-FTell ^
    Library-FSeek ^
    Library-PtrFromName ^
    Library-Sysfun-2 ^
    || exit /b 1

  call :SIMPLE_TESTS FAIL ^
    Library-Math-Fail ^
    Library-Math-Div-Fail ^
    Library-Math-Mod-Fail ^
    Library-FOpen-Fail ^
    Library-FClose-0-Fail ^
    Library-FClose-unopened-Fail ^
    Library-FWrite-unopened-file-Fail ^
    Library-FReadLine-0-Fail ^
    Library-FWriteLine-0-Fail ^
    Library-SymbCompare-Fail ^
    Library-Implodes-Fail ^
    Library-PtrFromName-Fail ^
    redeclaration-fail ^
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

  if exist Library-symbolic-file-handles.exe (
    echo Pass Library-symbolic-file-handles test...
    Library-symbolic-file-handles.exe < 2lines.txt > __out.txt 2>__err.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :COMPARE __out.txt 2lines.txt || exit /b 1
    call :COMPARE __err.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-symbolic-file-handles
  )

  erase Library.rasl Library.cpp Library.sref
endlocal
goto :EOF

:COMPILE
setlocal
  echo Compiling %1
  set SRC=%1
  set TARGET=%~n1.exe

  ..\..\bin\srefc-core %SRC% -o %TARGET% %COMMON_SRFLAGS% Library 2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON %SRC%, SEE __error.txt
    exit /b 1
  )
  rem Some C++ compilers write syntax error messages to stderr,
  rem don't erase __error.txt
  if not exist %TARGET% (
    echo COMPILATION FAILED
    exit /b 1
  )
  erase __error.txt

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
  if exist %1.cpp erase %1.cpp
  if exist __dump.txt erase __dump.txt
  if exist __out.txt erase __out.txt
  if exist __err.txt erase __err.txt
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
