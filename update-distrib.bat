@echo off

pushd src
setlocal
set RELEASE=1
call make.bat
endlocal
popd

pushd distrib
rd /q /s bin scripts compiler doc lexgen srlib srmake editors
xcopy /e /y /i ..\build\compiler compiler
xcopy /e /y /i ..\build\lexgen lexgen
xcopy /e /y /i ..\build\srmake srmake
xcopy /e /y /i ..\build\srlib-rich-prefix srlib-rich-prefix
xcopy /e /y /i ..\build\srlib-slim-prefix srlib-slim-prefix
md bin
copy ..\src\scripts\srefc.* bin
copy ..\src\scripts\srmake.* bin
ren bin\*.sh *.
md scripts
copy ..\scripts\* scripts
md srlib
xcopy /e /i /y ..\srlib\scratch srlib\scratch
md srlib\rich
copy ..\srlib\rich\*.rasl srlib\rich
copy ..\srlib\rich\*.froms srlib\rich
md srlib\slim
copy ..\srlib\slim\*.rasl srlib\slim
copy ..\srlib\slim\*.froms srlib\slim
xcopy /e /i /y ..\srlib\common srlib\common
md doc
xcopy /e /i /y ..\doc\examples doc\examples
copy ..\doc\*.pdf doc
copy ..\doc\*.jpg doc
md doc\OptPattern
copy ..\doc\OptPattern\*.pdf doc\OptPattern
md doc\historical
copy ..\doc\historical\*.txt doc\historical
copy ..\doc\historical\*.pdf doc\historical
copy ..\doc\historical\*.jpg doc\historical
copy ..\doc\historical\*.doc doc\historical
md doc\historical\Drogunov
copy ..\doc\historical\Drogunov\*.pdf doc\historical\Drogunov
copy ..\LICENSE .
copy ..\README.md .
md editors
xcopy /e /i /y ..\editors editors
call bootstrap.bat
popd
