@echo off
..\..\Bin\LexGen.exe Lexer.sref
copy srefc.exe srefc_.exe
srefc_ @srefc.prj
del *.obj
del *.tds
