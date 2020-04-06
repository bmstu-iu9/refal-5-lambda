@echo off
call ..\make make rlmake-core main
copy ..\..\bin\rlmake-core.exe ..\..\bin\srmake-core.exe
