@..\lexgen\lexgen Lexer.sref
@copy srefc.cs.exe srefc_.cs.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Library Library2 LibraryEx refalrts
call update_lib.bat
@srefc_.cs.exe -c "compile_cs /out:srefc.cs.exe" -d ..\SRLib %modules%
