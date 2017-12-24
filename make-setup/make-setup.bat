@echo off
call :MAIN

goto :EOF

:MAIN
setlocal
  for /F %%v in ('git describe --dirty') do set VERSION=%%v

  set SETUP=_setup-%VERSION%

  if not exist %SETUP%\nul mkdir %SETUP%
  pushd %SETUP%

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
endlocal
goto :EOF

:MAKERAR
setlocal
  set FLAGS=m -r -t -sfx -av -k -z..\winrar-comment.txt
  set ARC=setup-%VERSION%.exe
  erase %ARC%
  start /w winrar %FLAGS% %ARC% *
endlocal
goto :EOF