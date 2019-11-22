@echo off
setlocal
  set SRMAKE_FLAGS=
  call makeself-s.bat
endlocal
call update-lib.bat
call makeself.bat
call makeself.bat

if {%1}=={} (
  set TIMES=9
) else (
  set TIMES=%1
)

if {%~2}=={} (
  set LOG=benchmark-%DATE%-%TIME::=-%
) else (
  set LOG=benchmark-%~2-%DATE%-%TIME::=-%
)

echo -C>input.prj
if not {%BENCH_FLAGS%}=={} echo %BENCH_FLAGS%>>input.prj
dir /b *.ref *.sref | find /v ".refi" >>input.prj
echo --dir=../lib/common>>input.prj
echo --prelude=refal5-builtins.refi>>input.prj

echo.
echo Run "..\..\bin\srefc-core -C %BENCH_FLAGS% *.ref *.sref" %TIMES% times...

for /L %%i in (1, 1, %TIMES%) do (
  echo %%i
  echo %%i>>"%LOG%.stdout"
  ..\..\bin\srefc-core @input.prj 1>> "%LOG%.stdout" 2>> "%LOG%.stderr"
)
sort "%LOG%.stderr" > "%LOG%.time"
erase *.rasl input.prj
if exist *.cpp erase *.cpp
