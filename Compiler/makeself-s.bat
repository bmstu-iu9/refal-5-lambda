@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Library LibraryEx refalrts.cpp
@srefc.s -c "compile_bcc -I..\SRLib -w-aus" -d ..\SRLib %modules%
@del *.obj
@del *.tds
