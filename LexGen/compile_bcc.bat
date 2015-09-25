@set msvc=D:\Program Files\Microsoft Visual Studio 8
@copy "%msvc%\Common7\IDE\mspdb80.dll" mspdb80.dll
"%msvc%\VC\bin\"cl.exe 	/I"%mcvc%\VC\PlatformSDK\Include" /I"%msvc%\VC\include" /Zc:forScope /wd4996  %1 %2 %3 %4 %5 %6 %7 %8 %9  /EHsc /link /LIBPATH:"%msvc%\VC\lib" /LIBPATH:"%mcvc%\VC\PlatformSDK\lib"
@erase mspdb80.dll