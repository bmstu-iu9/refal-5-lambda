@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Library LibraryEx refalrts.cpp
@srefc_ -c "compile_bcc -I..\SRLib -DINTERPRET1 " -d ..\SRLib %modules%
@rem srefc_ -c "g++ -osrefc.exe -I..\SRLib -DINTERPRET1 " -d ..\SRLib %modules%
@del *.obj
@del *.tds
