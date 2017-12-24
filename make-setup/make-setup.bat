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
  for %%f in (..\..\distrib\*) do (
    if not {%%f}=={.gitignore} (
      if not {%%f}=={c-plus-plus.conf.bat} (
        copy %%f %%~nxf
      )
    )
  )
  for /d %%d in (..\..\distrib\*) do (
    xcopy /e /i /y %%d %%~nxd
  )

  set ARC=..\_setup\bootstrap-refal-5-lambda-%VERSION%.zip
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
  copy ..\uninstall.vbs .
  call :MAKERAR
  popd
endlocal
goto :EOF

:MAKERAR
setlocal
::  set FLAGS=m -r -t -sfx -av -k -z..\winrar-comment.txt -iicon..\icon.ico
  set FLAGS=m -r -t -sfx -av -k -z..\winrar-comment.txt
  set ARC=..\_setup\setup-refal-5-lambda-%VERSION%.exe
  if exist %ARC% erase %ARC%
  start /w winrar %FLAGS% %ARC% *
endlocal
goto :EOF
