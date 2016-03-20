if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)
copy LICENSE ..\..\srlib
copy *.h ..\..\srlib
copy *.cpp ..\..\srlib
call :PREPARE_SRCLIB LibraryEx
call :PREPARE_SRCLIB GetOpt

goto :EOF

:PREPARE_SRCLIB
  ..\..\bin\srefc-core %1
  echo //FROM Library>> %1.cpp
  move %1.cpp ..\..\srlib
  copy %1.sref ..\..\srlib\src
goto :EOF