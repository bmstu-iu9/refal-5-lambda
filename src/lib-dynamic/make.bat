@echo off
setlocal
  set SCRIPT_FLAGS=--scratch
  set SRMAKE_FLAGS=%SRMAKE_FLAGS% --makelib
  set TARGET_SUFFIX=.dll
  for %%l in (Hash Library GetOpt LibraryEx Platform) do (
    call ..\make.bat lib-dynamic %%l ..\lib\%%l
  )
  move ..\..\bin\*.dll ..\..\lib
endlocal
