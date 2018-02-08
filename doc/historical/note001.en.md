This is a lyrical digression.  This isn’t  study this is refinement before the
stage of finished product.

A major aim of the work to remedy the main mistakes in the compiler and make
the product more useful.

# The purpose:

1. Make a compiler carrying under g++. The thing is – according to C++ standard
   the announcement `void f();` funсtion  or `extern void f();` function.  It
   can’t precede determining the function with `static` modifier. `static`
   modifier function should be announced like `static void f();`.  According to
   the same standards are not respected by Microsoft Visual C++ compiler and
   Borland C++ Builder compiler. These compilers would not allow using `static`
   modifier for announcement static function. However, g++ compiler complies
   these requirements.

   In this version of Simple Refal the `$EXTERN` directive is compiled in
   extern function announcement, but this was as a preliminary to description
   of local function.

   A practical solution to the problem: We introduce `$FORWARD` directive, that
   is intended to announce local functions.

2. Correct an error with difficult samples. In case of samples types:

       Test {
         e.Begin (e.Inner) e.End (e.Left 'X' e.Inner) = ;
       }

       $ENTRY Go {
         = <Test ('er') ('super') ('super') ('abba' 'X' 'super')>;
       }

   A permutation of open `e.Begin` e-variable. General status of reviewing
   inside the brackets on the right `(e.Left 'X' e.Inner)` isn’t regressing to
   the original version. Parsing of this test piece isn’t possible.

   A practical solution to the problem: more fully save states.

3. Ease of use improving: to introduce chances of identifying sources file by
   set of directory defined lists and the chance of C++ compiler indicating on
   the command line.

4. Add standard functions for multiplication, division and residue taking.

# The results

1. The compiler was made portable: `$FORWARD` directive and  supporting of
   CrLf line end were added. (it is necessary for source code compilations
   under UNIX that was written for Windows).

2. The bug has been fixed.

3. Now command-line supporting has this kind of syntax:

       srefc [-c compiler_command_line] {-d directory} [--] file.sref file.cpp ...

   After –c option command line begins for compiler sturting. For example:
   `-c "g++ -I../SRLib -o file.exe"`.  If option does not indicate C++ compiler
   does not start after sref → cpp conversion. We point the way of searching
   folders after `-d` option. `'--'` option is used for underlining that it
   followed by file names only.

   .sref files and .cpp files can be specified in command line. Files are
   searched in current directory first. After that in signposted by `–d` option
   directory in the order in which they appear on command line.

   Changes affected standard functions. Standard Simple Refal functions is now
   situated in the `Library.cpp` file. It’s necessary to indicate `Library` and
   `refalrts` library for the compilation. The compiler doesn’t connect it
   automatically.

   Srmake-utility has changed- now it has command line syntax similar to
   compiler syntax:

       srmake [-c compiler_command_line] {-d directory} [--] file.sref | file.cpp

   The difference is that only one unit must be specified.

   Srmake utility is still searching for dependent files on the commentary
   `//FROM` and there is no differentiation between .sref and .cpp files.
   .sref file may depend on cpp file and cpp file may depend on sref file.

4. `Mul`, `Div`, `Mod` functions are working with whole numbers for module
   2\*\*32  were added as well as the functions of atom types request:

       // new enumerations

       //FROM Library
       $EXTERN TypeNumber, TypeCharacter, TypeFunction, TypeFile;

       //FROM LibraryEx
       $EXTERN TypeBracket;

       //FROM LibraryEx
       <Type t.Term> == s.TermType
       <Type-T /* empty */> == '*'
       <Type-T e.Expr> == s.FirstTermType e.Expr

       <Trim e.Space-B e.Expr e.Space-E> == e.Expr

       //FROM LibraryEx
       <Compare t.Left t.Right> = '<' | '=' | '>'
       <Compare-T t.Left t.Right> = '<' | '=' | '>' t.Left t.Right

   Type function takes input term and returns one of the enumerations that
   begin with `Type***`. `Type-T` function returns the first type of expression
   term on the input and expression as well. In case of an empty argument
   returns `'*'`.
   `Trim` function removes the space and tab from start and line end of
   expression.

   The comparison by `Compare` and `Compare-T` functions will be directed as
   follows:

   () > Number > Character > Function > File

   In doing so, the contents of the brackets compared to lexicostatistic order;
   The figures are compared to arithmetic mean; The symbols are compared to
   ascii-codes; Functions and files in the order of implementation. In this
   implementation functions are sorted by name at first (because name of
   function is stored within functions) then by pointer to the
   function (Actually, it is nonportable C++ operation), files are sorted as
   directories `FILE*` (operation is nonportable too).

> *Translation to English of this hunk of historical paper is prepared by*
> **Anastasia Dudkina <anastasia.vlad2014@yandex.ru>** _at 2018-02-08_
