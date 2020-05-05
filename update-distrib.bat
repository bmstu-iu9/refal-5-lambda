@echo off

echo * * * * * * * * * * * * * * * * * * * * * * * * *
echo * U P D A T E   V E R S I O N   N U M B E R !!! *
echo *       file: docs/setup.sh                     *
echo *       file: src/common/Version.ref            *
echo *       file: src/interpreter/main.ref          *
echo * * * * * * * * * * * * * * * * * * * * * * * * *

pushd src
setlocal
set RELEASE=1
call make.bat
endlocal
popd

pushd distrib
rd /q /s bin scripts compiler doc docs lexgen lib make editors rsl-decompiler
erase lib-prefixes\*.ref*
xcopy /e /y /i ..\build\compiler compiler
xcopy /e /y /i ..\build\interpreter interpreter
xcopy /e /y /i ..\build\lexgen lexgen
xcopy /e /y /i ..\build\make make
xcopy /e /y /i ..\build\rsl-decompiler rsl-decompiler
md bin
copy ..\src\scripts\rlc-rlmake.* bin\rlc.*
copy ..\src\scripts\rlc-rlmake.* bin\rlmake.*
ren bin\*.sh *.
md scripts
copy ..\scripts\* scripts
xcopy /e /y /i ..\lib lib
erase lib\*.*-prefix
erase lib\*.dll
copy ..\src\lib\prefixes\*.ref* lib-prefixes
md doc
xcopy /e /i /y ..\doc\examples doc\examples
copy ..\doc\*.pdf doc
copy ..\doc\*.jpg doc
md doc\OptPattern
copy ..\doc\OptPattern\*.pdf doc\OptPattern
copy ..\doc\OptPattern\*.md doc\OptPattern
md doc\historical
copy ..\doc\historical\*.txt doc\historical
copy ..\doc\historical\*.pdf doc\historical
copy ..\doc\historical\*.jpg doc\historical
copy ..\doc\historical\*.doc doc\historical
md doc\historical\Drogunov
copy ..\doc\historical\Drogunov\*.pdf doc\historical\Drogunov
md docs
copy ..\docs\*.md docs
copy ..\docs\*.ref docs
copy ..\docs\*.yml docs
copy ..\docs\*.js docs
copy ..\LICENSE .
copy ..\README.md .
copy ..\README.en.md .
md editors
xcopy /e /i /y ..\editors editors
call bootstrap.bat
popd

echo * * * * * * * * * * * * * * * * * * * * * * * * *
echo * U P D A T E   V E R S I O N   N U M B E R !!! *
echo *       file: docs/setup.sh                     *
echo *       file: src/common/Version.ref            *
echo *       file: src/interpreter/main.ref          *
echo * * * * * * * * * * * * * * * * * * * * * * * * *
