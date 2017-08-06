@echo off
if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)

setlocal
  set SOURCES=Library LibraryEx GetOpt Hash
  set RT=refalrts refalrts-platform-specific

  copy LICENSE ..\..\srlib
  for %%s in (%SOURCES%) do copy %%s.sref ..\..\srlib\src

  call :COMPILE_SCRATCH
  call :COMPILE_RICH
  call :PREPARE_COMMON
endlocal
goto :EOF

:COMPILE_SCRATCH
  set SCRATCHDIR=..\..\srlib\scratch
  mkdir %SCRATCHDIR%\x
  rmdir %SCRATCHDIR%\x
  copy *.h %SCRATCHDIR%
  copy *.cpp %SCRATCHDIR%
  copy *.rasl %SCRATCHDIR%

  ..\..\bin\srefc-core -C %SREFC_FLAGS% %SOURCES%

  for %%s in (%SOURCES%) do (
    find "//FROM" < %%s.sref > %SCRATCHDIR%\%%s.rasl.froms
    if exist %%s.cpp move %%s.cpp %SCRATCHDIR%
    move %%s.rasl %SCRATCHDIR%
  )

  for /d %%d in (platform-*) do (
    if not exist %SCRATCHDIR%\%%d\NUL (
      mkdir %SCRATCHDIR%\%%d
    )
    copy %%d\*.cpp %SCRATCHDIR%\%%d
    copy %%d\*.rasl %SCRATCHDIR%\%%d
  )
goto :EOF

:COMPILE_RICH
  set RICHDIR=..\..\srlib\rich
  mkdir %RICHDIR%\x
  rmdir %RICHDIR%\x

  pushd ..\srlib-rich-prefix
  call make.bat
  popd
  move ..\..\bin\rich-prefix.exe %RICHDIR%\rich.exe-prefix

  for %%s in (%SOURCES% %RT%) do (
    copy NUL %RICHDIR%\%%s.rasl
    echo //PREFIX rich> %RICHDIR%\%%s.rasl.froms
    if exist %%s.obj erase %%s.obj
  )
goto :EOF

:PREPARE_COMMON
  xcopy /e /i /y common ..\..\srlib\common
goto :EOF
