@echo off

call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars32.bat"
set CPPLINEE=cl /O1 /EHcs /W3 /wd4996 /Fe
set CPPLINEESUF=
set CPPLINEL=cl /EHcs /W3 /wd4996 /LD /Fe
set CPPLINELSUF="%DEFFILE%"
