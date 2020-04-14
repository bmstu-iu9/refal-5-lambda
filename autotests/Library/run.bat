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
    --cpp-command-exe="%CPPLINEE%" ^
    --cpp-command-lib="%CPPLINEL%" ^
    --cpp-command-exe-suf="%CPPLINEESUF%" ^
    --cpp-command-lib-suf="%CPPLINELSUF%" ^
    --exesuffix=.exe ^
    -D../../src/lib/platform-Windows ^
    -D../../src/lib/debug ^
    -D../../src/lib ^
    refalrts ^
    refalrts-debugger ^
    refalrts-diagnostic-initializer ^
    refalrts-dynamic ^
    refalrts-functions ^
    refalrts-main ^
    refalrts-profiler ^
    refalrts-vm ^
    refalrts-vm-api ^
    refalrts-platform-specific

  set DIAG=++diagnostic+config=test-diagnostics.ini

  echo Precompile Library.ref
  copy ..\..\src\lib\Library.ref .
  ..\..\bin\rlc-core %COMMON_SRFLAGS% -C Library 2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON Library.ref, SEE __error.txt
    exit /b 1
  )
  rem Some C++ compilers write syntax error messages to stderr,
  rem don't erase __error.txt
  if not exist Library.ref (
    echo COMPILATION FAILED, __error.txt:
    type __error.txt
    exit /b 1
  )
  erase __error.txt Library.ref
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
    Library-Open-Auto-Get-Close ^
    Library-Chr-Ord-Upper-Lower ^
    Library-SymbCompare ^
    Library-Type ^
    Library-Implode-Explode_Ext ^
    Library-ReadBytes ^
    Library-FTell ^
    Library-FSeek ^
    Library-PtrFromName ^
    Library-Sysfun-2 ^
    Library-Platform ^
    || exit /b 1

  call :SIMPLE_TESTS FAIL ^
    Library-Math-Fail ^
    Library-Math-Div-Fail ^
    Library-Math-Mod-Fail ^
    Library-Open-Auto-Fail ^
    Library-SymbCompare-Fail ^
    Library-Implodes-Fail ^
    Library-PtrFromName-Fail ^
    || exit /b 1

  if exist Library-Prout-Expr.exe (
    echo Pass Library-Prout-Expr test...
    call :RUN_EXE Library-Prout-Expr || exit /b 1
    call :COMPARE __out.txt Prout-Expr.txt || exit /b 1
    call :CLEANUP Library-Prout-Expr
  )

  if exist Library-Open-Auto-Putout-Close.exe (
    echo Pass Library-Open-Auto-Putout-Close test...
    call :RUN_EXE Library-Open-Auto-Putout-Close || exit /b 1
    call :COMPARE __written_file.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-Open-Auto-Putout-Close
  )

  if exist Library-Card-2lines.exe (
    echo Pass Library-Card-2lines test...
    Library-Card-2lines.exe %DIAG% < 2lines.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :CLEANUP Library-Card-2lines
  )

  if exist Library-Card-2lines-no-eol.exe (
    echo Pass Library-Card-2lines-no-eol test...
    Library-Card-2lines-no-eol.exe %DIAG% < 2lines-no-eol.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :CLEANUP Library-Card-2lines-no-eol
  )

  if exist Library-Open-Auto-Append.exe (
    echo Pass Library-Open-Auto-Append test...
    call :RUN_EXE Library-Open-Auto-Append || exit /b 1
    call :CLEANUP Library-Open-Auto-Append
  )

  if exist Library-Open-Auto-extended-mode.exe (
    echo Pass Library-Open-Auto-extended-mode test...
    call :RUN_EXE Library-Open-Auto-extended-mode || exit /b 1
    call :COMPARE __written_file.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-Open-Auto-extended-mode
  )

  if exist Library-WriteBytes.exe (
    echo Pass Library-WriteBytes test...
    call :RUN_EXE Library-WriteBytes || exit /b 1
    call :COMPARE __written_file.txt 2lines-no-eol.txt || exit /b 1
    call :CLEANUP Library-WriteBytes
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
    Library-symbolic-file-handles.exe %DIAG% < 2lines.txt > __out.txt 2>__err.txt
    if errorlevel 1 (
      echo TEST FAILED, SEE __dump.txt
      exit /b 1
    )
    call :COMPARE __out.txt 2lines.txt || exit /b 1
    call :COMPARE __err.txt 2lines.txt || exit /b 1
    call :CLEANUP Library-symbolic-file-handles
  )

  erase Library.rasl Library.cpp Library.ref
endlocal
goto :EOF

:COMPILE
setlocal
  echo Compiling %1
  set SRC=%1
  set TARGET=%~n1.exe

  ..\..\bin\rlc-core --keep-rasls %SRC% -o %TARGET% %COMMON_SRFLAGS% ^
    Library 2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON %SRC%, SEE __error.txt
    exit /b 1
  )
  rem Some C++ compilers write syntax error messages to stderr,
  rem don't erase __error.txt
  if not exist %TARGET% (
    echo COMPILATION FAILED, __error.txt:
    type __error.txt
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
    %1.exe %DIAG%
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
  %1 %DIAG% > __out.txt
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
