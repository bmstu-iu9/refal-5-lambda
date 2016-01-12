@echo off
LexGen.exe Lexer.sref
copy srefc.exe srefc_.exe
srefc.s @srefc.prj
del *.obj
del *.tds
