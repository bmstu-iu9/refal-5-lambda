@echo off
call :MAIN

goto :EOF

:MAIN
setlocal
  for /F %%v in ('git describe --dirty') do set VERSION=%%v

  if not exist _setup\nul mkdir _setup
  if not exist _tmp\nul mkdir _tmp

  call :MAKE_SRC || exit /b 1
  call :MAKE_WINSETUP || exit /b 1
endlocal
goto :EOF

:MAKE_SRC
setlocal
  rem Тест на наличие dos2unix
  echo Test > test.txt
  echo Test >> test.txt
  copy test.txt test.d2u
  %MSYSDIR%\dos2unix test.d2u
  fc /b test.txt test.d2u && (
    echo Set MSYSDIR to usr\bin for MSys installation!
    echo This folder should contain the files tar.exe and dos2unix.exe
    exit /b 1
  )
  erase test.txt test.d2u

  pushd ..\distrib
  call clear.bat
  popd

  set SETUP=%SETUP%-src

  pushd _tmp
  for %%f in (..\..\distrib\*) do copy %%f %%~nxf
  for /d %%d in (..\..\distrib\*) do xcopy /e /i /y %%d %%~nxd

  %MSYSDIR%\dos2unix bin/*
  %MSYSDIR%\dos2unix bootstrap.*
  %MSYSDIR%\dos2unix clear.*
  for /F "tokens=*" %%f in ('dir /b /s *.sh *.cpp *.froms *.ref *.refi') do %MSYSDIR%\dos2unix "%%~f"
  %MSYSDIR%\dos2unix scripts/*

  erase c-plus-plus.conf.* .gitignore

  if exist c-plus-plus.conf.bat erase c-plus-plus.conf.bat

  set ARC=..\_setup\bootstrap-refal-5-lambda-%VERSION%.tar.gz
  if not exist %ARC% erase %ARC%
  setlocal
  set PATH=%MSYSDIR%;%PATH%
  tar czvf %ARC% *
  endlocal

  set ARC=%ARC:tar.gz=zip%
  if not exist %ARC% erase %ARC%
  start /w winrar m -r -t -afzip %ARC% *

  popd
endlocal
goto :EOF

:MAKE_WINSETUP
setlocal
  pushd ..\distrib
  call clear.bat
  call bootstrap.bat || exit /b 1
  popd

  set SETUP=%SETUP%-exe

  pushd _tmp

  xcopy /e /i /y ..\..\distrib\bin bin
  xcopy /e /i /y ..\..\distrib\lib lib
  xcopy /e /i /y ..\..\distrib\scripts scripts
  xcopy /e /i /y ..\..\distrib\doc doc
  xcopy /e /i /y ..\..\distrib\docs docs
  xcopy /e /i /y ..\..\distrib\editors editors
  copy ..\..\distrib\README.md .
  copy ..\..\distrib\LICENSE .
  copy scripts\c-plus-plus.conf.bat.template c-plus-plus.conf.bat
  copy ..\uninstall.wsf .
  copy ..\icon.ico .

  for /F %%v in ('git describe --dirty') do (
    echo Const CVersion="%%v"> constants.vbs
  )

  set SIZE=0
  for /R %%f in (*.*) do call :INCSIZE %%~zf
  echo Const CByteSize=%SIZE%>> constants.vbs

  call :MAKERAR
  popd
endlocal
goto :EOF

:INCSIZE
  set /a SIZE+=%1
goto :EOF

:MAKERAR
setlocal
  set FLAGS=m -r -t -sfx -av -k -z..\winrar-comment.txt ^
    -iicon..\icon.ico -iimg..\logo-93x302.png -iimg..\logo-186x604.png
  set ARC=..\_setup\setup-refal-5-lambda-%VERSION%.exe
  if exist %ARC% erase %ARC%
  start /w winrar %FLAGS% %ARC% *
endlocal
goto :EOF
