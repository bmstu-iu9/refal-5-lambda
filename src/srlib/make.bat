@echo off
if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)
copy LICENSE ..\..\srlib
copy *.h ..\..\srlib
copy *.cpp ..\..\srlib
call :PREPARE_SRCLIB Library
call :PREPARE_SRCLIB LibraryEx
call :PREPARE_SRCLIB GetOpt
call :PREPARE_SRCLIB Hash

goto :EOF

:PREPARE_SRCLIB
  ..\..\bin\srefc-core %SREFC_FLAGS% %1
  find "//FROM" < %1.sref >> %1.cpp
  if exist %1.native.cpp move %1.native.cpp ..\..\srlib
  move %1.cpp ..\..\srlib
  copy %1.sref ..\..\srlib\src
goto :EOF
