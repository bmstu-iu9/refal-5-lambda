..\..\bin\srefc LibraryEx

if not exist ..\..\srlib\src\nul (
  mkdir ..\..\srlib
  mkdir ..\..\srlib\src
)
copy LICENSE ..\..\srlib
copy *.h ..\..\srlib
copy *.cpp ..\..\srlib
move LibraryEx.cpp ..\..\srlib
copy LibraryEx.sref ..\..\srlib\src
