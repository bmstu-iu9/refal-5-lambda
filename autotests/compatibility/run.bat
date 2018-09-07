@echo off
call :MAIN %* || exit /b 1
goto :EOF

:MAIN
setlocal
  set OUTPUT_FILES=stdout.txt stderr.txt written_file.txt REFAL15.DAT
  call :LOOKUP_COMPILERS || exit /b 1
  if {%REFC_EXIST%%SREFC_EXIST%%CREFAL_EXIST%}=={} (
    echo NO REFAL COMPILERS FOUND, EXITING
    exit /b 1
  )

  if {%SREFC_EXIST%}=={1} (
    call :PREPARE_PREFIX || exit /b 1
  )

  if {%1}=={} (
    call :RUN_ALL_TESTS *.ref || exit /b 1
  ) else (
    call :RUN_ALL_TESTS %* || exit /b 1
  )
  if exist _test_prefix.exe-prefix erase _test_prefix.exe-prefix
endlocal
goto :EOF

:LOOKUP_COMPILERS
  :: Без setlocal
  set REFC_EXIST=
  set SREFC_EXIST=
  set CREFAL_EXIST=

  echo *** Detecting Refal-5 compilers ...
  :: Поиск refc/refgo
  if exist detect.rsl erase detect.rsl
  refc detect.ref
  call :CHECK_DETECT_RSL
  if not errorlevel 1 (
    set REFAL_COMPILERS=refc
    set REFC_EXIST=1
    echo ... found refc
  )

  :: Поиск crefal (два варианта)
  call crefal detect.ref 2>NUL
  call :CHECK_DETECT_RSL
  if not errorlevel 1 (
    set REFAL_COMPILERS=crefal %REFAL_COMPILERS%
    set CREFAL_EXIST=1
    set CREFAL_CALL=call crefal
    echo ... found crefal.bat
  ) else (
    refgo crefal detect.ref
    call :CHECK_DETECT_RSL
    if not errorlevel 1 (
      set REFAL_COMPILERS=crefal %REFAL_COMPILERS%
      set CREFAL_EXIST=1
      set CREFAL_CALL=refgo crefal
      echo ... found crefal.rsl
    )
  )

  :: Поиск srefc
  if exist ..\..\bin\srefc-core.exe (
    set REFAL_COMPILERS=srefc_classic srefc_lambda %REFAL_COMPILERS%
    set SREFC_EXIST=1
    set DIAG=++diagnostic+config=test-diagnostics.txt
    echo ... found srefc
    call ..\..\scripts\load-config.bat || exit /b 1
  )
  echo.
goto :EOF

:PREPARE_PREFIX
  rem Without setlocal because set COMMON_SRFLAGS

  set COMMON_SRFLAGS= ^
    -OC ^
    --markup-context ^
    -c "%CPPLINEE%" ^
    --exesuffix=.exe ^
    -D../../src/srlib/platform-Windows ^
    -D../../src/srlib/common ^
    -D../../src/srlib ^
    --prelude=refal5-builtins.srefi

  echo Prepare common prefix...
  if exist _test_prefix.exe-prefix erase _test_prefix.exe-prefix
  copy ..\..\src\srlib\Library.sref .
  ..\..\bin\srefc-core -o _test_prefix.exe-prefix %COMMON_SRFLAGS% ^
    Library ^
    refalrts ^
    refalrts-allocator ^
    refalrts-debugger ^
    refalrts-diagnostic-initializer ^
    refalrts-dynamic ^
    refalrts-functions ^
    refalrts-main ^
    refalrts-profiler ^
    refalrts-vm ^
    refalrts-platform-specific 2>__error.txt
  if not exist _test_prefix.exe-prefix (
    echo CAN'T CREATE COMMON PREFIX, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  erase Library.*
  echo.
goto :EOF

:CHECK_DETECT_RSL
setlocal
  set RETCODE=1
  if exist detect.rsl (
    refgo detect.rsl > detect.out
    echo detected> detect.expected
    fc detect.out detect.expected >NUL

    if not errorlevel 1 (
      set RETCODE=0
    )

    erase detect.rsl
    if exist detect.out erase detect.out
    if exist detect.expected erase detect.expected
  )
  exit /b %RETCODE%
endlocal
goto :EOF

:RUN_ALL_TESTS
setlocal
  for %%n in (%*) do call :RUN_TEST "%%~nn" "%%~n" || exit /b 1
endlocal
goto :EOF

:RUN_TEST
setlocal
  call :RUN_TEST_RESULT%~x1 "%~2" || exit /b 1
endlocal
goto :EOF

:RUN_TEST_RESULT
  :: Без расширения - ничего не делаем
goto :EOF

:RUN_TEST_RESULT.OK
setlocal
  for %%c in (%REFAL_COMPILERS%) do (
    echo *** Perform OK test %~1 for compiler %%c...
    call :COMPILE.%%c "%~1"
    if errorlevel 1 (
      echo COMPILATION FOR COMPILER %%c FAILED
      endlocal
      exit /b 1
    )
    set Foo=Bar
    set NoEnv=
    call :EXECUTE_OK.%%c "%~1" || exit /b 1
    for %%o in (%OUTPUT_FILES%) do (
      if exist "%~n1.%%o" (
        if not exist %%o (
          echo ERROR: File %%o must be created but is absent
          endlocal
          exit /b 1
        )
        fc /b %%o "%~n1.%%o"
        if errorlevel 1 (
          echo ERROR: Invalid output to %%o. See %~n1.%%o and %%o
          echo ERROR: Difference between %~n1.%%o and %%o:
          fc %%o "%~n1.%%o"
          endlocal
          exit /b 1
        )
      )
    )
    if exist REFAL7.DAT (
      echo REFAL7.DAT:
      type REFAL7.DAT
      erase REFAL7.DAT
    )
    move stdout.txt stdout.txt.%%c >NUL
    echo %%c>__last.txt
    echo.
  )
  set /P LAST=<__last.txt
  for %%c in (%REFAL_COMPILERS%) do (
    fc stdout.txt.%LAST% stdout.txt.%%c > __diff.txt
    if errorlevel 1 (
      echo ERROR: Outputs of %%c and %LAST% is different:
      type __diff.txt
      endlocal
      exit /b 1
    )
  )
  for %%c in (%REFAL_COMPILERS%) do (
    call :CLEANUP.%%c "%~n1"
    if exist stdout.txt.%%c erase stdout.txt.%%c
  )
  erase __last.txt
  if exist __diff.txt erase __diff.txt
endlocal
goto :EOF

:RUN_TEST_RESULT.FAIL
setlocal
  for %%c in (%REFAL_COMPILERS%) do (
    echo *** Perform FAIL test %~1 for compiler %%c...
    call :COMPILE.%%c "%~1"
    if errorlevel 1 (
      echo COMPILATION FOR COMPILER %%c FAILED
      endlocal
      exit /b 1
    )
    call :EXECUTE_FAIL.%%c "%~1" || exit /b 1
    call :CLEANUP.%%c "%~n1"
    echo.
  )
endlocal
goto :EOF

:RUN_TEST_RESULT.SYNTAX-ERROR
setlocal
  for %%c in (%REFAL_COMPILERS%) do (
    echo *** Perform SYNTAX ERROR test %~1 for compiler %%c...
    call :COMPILE.%%c "%~1"
    echo errorlevel %ERRORLEVEL%
    if errorlevel 2 (
      echo COMPILER %%c FAILED ON SYNTAX ERROR TEST %~1
      endlocal
      exit /b 1
    )
    if not errorlevel 1 (
      echo COMPILATION FOR COMPILER %%c SUCCESSED, SYNTAX ERRORS IS NOT FOUND
      endlocal
      exit /b 1
    ) else (
      echo Ok! This syntax errors is normal and expected!
    )
    call :CLEANUP.%%c "%~n1"
    echo.
  )
endlocal
goto :EOF

:COMPILE_SREFC_COMMON
setlocal
  set SRC=%1
  set TARGET=%~n1.exe

  ..\..\bin\srefc-core %SRC% -o %TARGET% %COMMON_SRFLAGS% ^
    --prefix=_test_prefix external 2>__error.txt
  if errorlevel 100 (
    echo COMPILER FAILS ON %SRC%, SEE __error.txt
    exit /b 3
  )
  if not exist %TARGET% (
    endlocal
    exit /b 1
  )
  erase __error.txt

  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
endlocal
goto :EOF

:COMPILE.srefc_classic
setlocal
  set COMMON_SRFLAGS=%COMMON_SRFLAGS% --classic
  call :COMPILE_SREFC_COMMON "%~1"
  exit /b %ERRORLEVEL%
endlocal
goto :EOF

:EXECUTE_OK.srefc_classic
setlocal
  set EXE=%~n1.exe
  echo Y| %EXE% %DIAG% Hello "Hello, World" "" \ > stdout.txt 2>stderr.txt
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt or stderr.txt:
    type __dump.txt
    endlocal
    exit /b 1
  )
endlocal
goto :EOF

:EXECUTE_FAIL.srefc_classic
setlocal
  set EXE=%~n1.exe
  echo Y| %EXE% %DIAG% > stdout.txt
  if not errorlevel 1 (
    echo THIS TEST MUST FAIL BUT DONT IT
    endlocal
    exit /b 1
  )
  echo Ok! This failure was normal and expected!
endlocal
exit /b 0

:CLEANUP_COMMON
setlocal
  if exist __dump.txt erase __dump.txt
  if exist REFAL7.DAT erase REFAL7.DAT
  for %%o in (%OUTPUT_FILES%) do if exist %%o erase %%o
endlocal
goto :EOF

:CLEANUP.srefc_classic
setlocal
  call :CLEANUP_COMMON
  if exist "%~1.rasl" erase "%~1.rasl"
  if exist "%~1.exe" erase "%~1.exe"
  if exist "%~1.cpp" erase "%~1.cpp"
  if exist external.rasl erase external.rasl
  if exist __error.txt erase __error.txt
endlocal
goto :EOF

:COMPILE.srefc_lambda
setlocal
  set COMMON_SRFLAGS=%COMMON_SRFLAGS% --extended
  call :COMPILE_SREFC_COMMON "%~1"
  exit /b %ERRORLEVEL%
endlocal
goto :EOF

:EXECUTE_OK.srefc_lambda
setlocal
  call :EXECUTE_OK.srefc_classic "%~1" || exit /b 1
endlocal
goto :EOF

:EXECUTE_FAIL.srefc_lambda
setlocal
  call :EXECUTE_FAIL.srefc_classic "%~1" || exit /b 1
endlocal
exit /b 0

:CLEANUP.srefc_lambda
setlocal
  call :CLEANUP.srefc_classic "%~1" || exit /b 1
endlocal
goto :EOF

:COMPILE.crefal
setlocal
  set RSL="%~n1"-crefal.rsl
  %CREFAL_CALL% "%~1" %RSL%
  if not exist %RSL% (
    endlocal
    exit /b 1
  )
  %CREFAL_CALL% external.ref external-crefal.rsl
  if not exist external-crefal.rsl (
    endlocal
    exit /b 1
  )
endlocal
goto :EOF

:EXECUTE_OK.crefal
setlocal
  echo Y| refgo "%~n1"-crefal+external-crefal Hello "Hello, World" "" \ ^
    >stdout.txt 2>__dump.txt
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt or stderr.txt:
    type __dump.txt
    endlocal
    exit /b 1
  )
  move __dump.txt stderr.txt
endlocal
goto :EOF

:EXECUTE_FAIL.crefal
setlocal
  echo Y| refgo "%~n1"-crefal+external-crefal >stdout.txt 2>__dump.txt
  if not errorlevel 1 (
    echo THIS TEST MUST FAIL BUT DONT IT
    endlocal
    exit /b 1
  )
  echo Ok! Program failed on this test!
endlocal
exit /b 0

:CLEANUP.crefal
setlocal
  call :CLEANUP_COMMON
  if exist "%~1-crefal.rsl" erase "%~1-crefal.rsl"
  if exist "%~1.lis" erase "%~1.lis"
  if exist external-crefal.rsl erase external-crefal.rsl
endlocal
goto :EOF

:COMPILE.refc
setlocal
  set RSL="%~n1".rsl
  refc "%~1"
  if not exist %RSL% (
    endlocal
    exit /b 1
  )
  refc external.ref
  if not exist external.rsl (
    endlocal
    exit /b 1
  )
endlocal
goto :EOF

:EXECUTE_OK.refc
setlocal
  echo Y| refgo "%~n1"+external Hello "Hello, World" "" \ >stdout.txt 2>__dump.txt
  if errorlevel 1 (
    echo TEST FAILED, SEE __dump.txt or stderr.txt:
    type __dump.txt
    endlocal
    exit /b 1
  )
  move __dump.txt stderr.txt
endlocal
goto :EOF

:EXECUTE_FAIL.refc
setlocal
  echo Y| refgo "%~n1"+external >stdout.txt 2>__dump.txt
  if not errorlevel 1 (
    echo THIS TEST MUST FAIL BUT DONT IT
    endlocal
    exit /b 1
  )
  echo Ok! Program failed on this test!
endlocal
exit /b 0

:CLEANUP.refc
setlocal
  call :CLEANUP_COMMON
  if exist "%~1.rsl" erase "%~1.rsl"
  if exist "%~1.lis" erase "%~1.lis"
  if exist external.rsl erase external.rsl
endlocal
goto :EOF
