@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine
@set modules=%modules% Library LibraryEx refalrts.cpp
@srefc_ -c "compile_cl -I..\SRLib " -d ..\SRLib %modules%
rem @del *.obj
@del *.tds
