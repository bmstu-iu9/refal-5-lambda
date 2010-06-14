@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@set modules=%modules% Library LibraryEx refalrts.cpp
@rem srefc_ -c "compile_cl -I..\SRLib -DINTERPRET1 " -d ..\SRLib %modules%
@rem srefc_ -c "g++ -osrefc.exe -I..\SRLib -DINTERPRET1 " -d ..\SRLib %modules%
@srefc_ -c "compile_bcc -esrefc.exe -I..\SRLib -DINTERPRET1 -DSHOW_DEBUG=0" -d ..\SRLib %modules%
@del *.obj
@del *.tds
