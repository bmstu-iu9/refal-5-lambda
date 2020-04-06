@echo off
call ..\make make rlmake-core main "" ..\..\distrib
copy ..\..\bin\rlmake-core.exe ..\..\bin\srmake-core.exe
