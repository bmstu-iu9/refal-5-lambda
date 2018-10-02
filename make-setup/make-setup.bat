@echo off
call :MAIN

goto :EOF

:MAIN
setlocal
  for /F %%v in ('git describe --dirty') do set VERSION=%%v

  if not exist _setup\nul mkdir _setup
  if not exist _tmp\nul mkdir _tmp

  call :MAKE_SRC
  call :MAKE_WINSETUP || exit /b 1
endlocal
goto :EOF

:MAKE_SRC
setlocal
  pushd ..\distrib
  call clear.bat
  popd

  set SETUP=%SETUP%-src

  pushd _tmp
  for %%f in (..\..\distrib\*) do copy %%f %%~nxf
  for /d %%d in (..\..\distrib\*) do xcopy /e /i /y %%d %%~nxd

  dos2unix bin/* bootstrap.* clear.* */*.cpp */*/*.froms */*/*.srefi scripts/*
  erase c-plus-plus.conf.* .gitignore

  if exist c-plus-plus.conf.bat erase c-plus-plus.conf.bat

  set ARC=..\_setup\bootstrap-refal-5-lambda-%VERSION%.tar.gz
  if not exist %ARC% erase %ARC%
  tar czvf %ARC:\=/% *

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
  xcopy /e /i /y ..\..\distrib\srlib srlib
  xcopy /e /i /y ..\..\distrib\scripts scripts
  xcopy /e /i /y ..\..\distrib\doc doc
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
    -iicon..\icon.ico -iimg..\logo.bmp
  set ARC=..\_setup\setup-refal-5-lambda-%VERSION%.exe
  if exist %ARC% erase %ARC%
  start /w winrar %FLAGS% %ARC% *
endlocal
goto :EOF
