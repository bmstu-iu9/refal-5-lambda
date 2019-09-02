@echo off
if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)

setlocal
  set CSOURCES=Library Hash
  set RSOURCES=LibraryEx GetOpt Platform
  set RT=refalrts ^
    refalrts-dynamic ^
    refalrts-functions ^
    refalrts-main ^
    refalrts-platform-specific ^
    refalrts-profiler ^
    refalrts-vm ^
    refalrts-vm-api ^
    refalrts-platform-specific ^
    refalrts-platform-POSIX
  set RTD=%RT% ^
    refalrts-debugger ^
    refalrts-diagnostic-initializer

  copy LICENSE ..\..\srlib
  for %%s in (%CSOURCES% %RSOURCES%) do copy %%s.ref ..\..\srlib\src

  call :PREPARE_COMMON
  call :COMPILE_SCRATCH
  call :COMPILE_RICH
  call :COMPILE_RICH_DEBUG
  call :COMPILE_SLIM
  call :COMPILE_SLIM_DEBUG
endlocal
goto :EOF

:COMPILE_SEPARATED
setlocal
  set TARGET="%~1"
  set LIBS=%~2

  ..\..\bin\srefc-core -C %SREFC_FLAGS% %LIBS% -d common

  for %%s in (%LIBS%) do (
    find "//FROM" < %%s.ref > %TARGET%\%%s.rasl.froms
    if exist %%s.cpp move %%s.cpp %TARGET%
    move %%s.rasl %TARGET%
  )
endlocal
goto :EOF

:COMPILE_SCRATCH
  set SCRATCHDIR=..\..\srlib\scratch
  mkdir %SCRATCHDIR%\x
  rmdir %SCRATCHDIR%\x
  copy *.h %SCRATCHDIR%
  copy *.cpp %SCRATCHDIR%
  copy *.rasl %SCRATCHDIR%

  call :COMPILE_SEPARATED  "%SCRATCHDIR%" "%CSOURCES% %RSOURCES%"

  for /d %%d in (platform-* exe platform-Windows\lib platform-POSIX\lib) do (
    if not exist %SCRATCHDIR%\%%d\NUL (
      mkdir %SCRATCHDIR%\%%d
    )
    copy %%d\*.cpp %SCRATCHDIR%\%%d
    copy %%d\*.rasl %SCRATCHDIR%\%%d
    if exist %%d\*.def copy %%d\*.def %SCRATCHDIR%\%%d
  )
goto :EOF

:PREPARE_PREFIX
setlocal
  set TARGET="%~1"
  set PREFIX=%~2
  set LIBS=%~3

  pushd ..\srlib-%PREFIX%-prefix
  call make.bat "%LIBS%"
  popd
  move ..\..\bin\%PREFIX%-prefix.exe %TARGET%\%PREFIX%.exe-prefix

  for %%s in (%LIBS%) do (
    copy NUL %TARGET%\%%s.rasl
    echo //PREFIX %PREFIX%> %TARGET%\%%s.rasl.froms
    if exist %%s.obj erase %%s.obj
  )
endlocal
goto :EOF

:COMPILE_RICH
  set RICHDIR=..\..\srlib\rich
  mkdir %RICHDIR%\x
  rmdir %RICHDIR%\x

  call :PREPARE_PREFIX "%RICHDIR%" rich "%CSOURCES% %RSOURCES% %RT%"
goto :EOF

:COMPILE_RICH_DEBUG
  set RICHDIR=..\..\srlib\rich-debug
  mkdir %RICHDIR%\x
  rmdir %RICHDIR%\x

  call :PREPARE_PREFIX "%RICHDIR%" rich-debug "%CSOURCES% %RSOURCES% %RTD%"
goto :EOF

:MAKE_REFERENCE_RASL
setlocal
  set TARGET_FILE="%~1\%~2.rasl"
  set REFERENCE="%~2"

  copy nul "%TARGET_FILE%"
  ..\..\bin\srefc-core -R ^
    --target-file="%TARGET_FILE%" ^
    --reference="%REFERENCE%" ^
    "%TARGET_FILE%"
endlocal
goto :EOF

:COMPILE_SLIM
setlocal
  set SLIMDIR=..\..\srlib\slim
  set CSOURCES=Library
  mkdir %SLIMDIR%\x
  rmdir %SLIMDIR%\x

  call :PREPARE_PREFIX "%SLIMDIR%" slim "%CSOURCES% %RT%"

  set SREFC_FLAGS=%SREFC_FLAGS% -Od-
  call :COMPILE_SEPARATED  "%SLIMDIR%" "%RSOURCES%"
  call :MAKE_REFERENCE_RASL "%SLIMDIR%" Hash
endlocal
goto :EOF

:COMPILE_SLIM_DEBUG
setlocal
  set SLIMDIR=..\..\srlib\slim-debug
  set CSOURCES=Library
  mkdir %SLIMDIR%\x
  rmdir %SLIMDIR%\x

  call :PREPARE_PREFIX "%SLIMDIR%" slim-debug "%CSOURCES% %RTD%"

  set SREFC_FLAGS=%SREFC_FLAGS% -Od-
  call :COMPILE_SEPARATED  "%SLIMDIR%" "%RSOURCES%"
  call :MAKE_REFERENCE_RASL "%SLIMDIR%" Hash
endlocal
goto :EOF

:PREPARE_COMMON
  xcopy /e /i /y common ..\..\srlib\common
goto :EOF
