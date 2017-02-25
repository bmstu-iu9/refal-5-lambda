@echo off
if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)
copy LICENSE ..\..\srlib
copy *.h ..\..\srlib
copy *.cpp ..\..\srlib
copy *.rasl ..\..\srlib
call :PREPARE_SRCLIB Library
call :PREPARE_SRCLIB LibraryEx
call :PREPARE_SRCLIB GetOpt
call :PREPARE_SRCLIB Hash

for /d %%d in (platform-*) do (
  if not exist ..\..\srlib\%%d\NUL (
    mkdir ..\..\srlib\%%d
  )
  copy %%d\*.cpp ..\..\srlib\%%d
  copy %%d\*.rasl ..\..\srlib\%%d
)

goto :EOF

:PREPARE_SRCLIB
  ..\..\bin\srefc-core %SREFC_FLAGS% %1
  find "//FROM" < %1.sref >> %1.rasl.froms
  if exist %1.cpp move %1.cpp ..\..\srlib
  move %1.rasl ..\..\srlib
  move %1.rasl.froms ..\..\srlib
  copy %1.sref ..\..\srlib\src
goto :EOF
