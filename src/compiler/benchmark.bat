@echo off

if {%PERL%}=={} set PERL=perl

set REPEATS=5
if not {%1}=={} set REPEATS=%1
dir /b *.sref > input.lst

setlocal
set SREFC_FLAGS=
set SRMAKE_FLAGS=
:: set CPPLINE=%CPPLINE%
call :PERFORM_RUN __slow.txt
endlocal

setlocal
set SREFC_FLAGS=-OPR
set SRMAKE_FLAGS=-X-OPR
:: set CPPLINE=%CPPLINE%
call :PERFORM_RUN __fast.txt
endlocal

%PERL% calc_summary.pl __slow.txt __fast.txt > _profiler.log
type _profiler.log

erase input.lst __slow.txt __fast.txt

goto :EOF

:PERFORM_RUN
  set RELEASE=Benchmark
  call update-lib.bat
  call makeself.bat
  if exist %1 erase %1
  for /L %%i in (1, 1, %REPEATS%) do echo %%i & ..\..\bin\srefc-core @input.lst 2>> %1
  erase *.cpp
goto :EOF
