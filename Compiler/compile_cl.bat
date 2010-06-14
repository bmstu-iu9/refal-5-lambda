set VC=C:\Program Files (x86)\Microsoft Visual Studio 10.0
set VCSDK=C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A
@copy "%VC%\Common7\IDE\mspdb100.dll" mspdb100.dll
"%VC%\VC\bin\"cl.exe  /I"%VCSDK%\Include" /I"%VC%\VC\include" /Zc:forScope  %*  /EHsc /link /LIBPATH:"%VC%\VC\lib" /LIBPATH:"%VCSDK%\lib"
@erase mspdb100.dll