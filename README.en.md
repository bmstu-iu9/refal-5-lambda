# Refal-5λ

> This is translation of [README.md](README.md) from Russian.

# About the language and the compiler

Refal-5λ language is the exact superset of [Refal-5][3] the main extension of
which are higher order functions.

Refal-5λ compiler is an optimizing compiler, which allows compilation both into
the intermediate interpretive code and the source code in C++. The key feature
of the compiler is the user-friendly interface with C++ language.

# Objectives
Objectives are given in order of priority. In other words, for example, if
there is some contradiction between the first and the third objectives, the
first one has priority.

1. **The language is the exact superset of classic Refal-5.**
   * Any correct classic Refal-5 program must be run identically in Refal-5λ.
   * Сonsequence: syntax is the exact superset of the language.
   * Сonsequence: support for all built-in functions with official
     implementation, including their undocumented semantics.
2. **The language and the compiler for everyday coding.**
    * Syntax extensions should allow writing more expressive code with no harm
      to efficiency (e.g. assignment syntax instead of conditions as
      assignments).
    * Efficient optimization on different levels (syntax tree transformation,
      intermediate imperative code, the direct code generation capability).
    * Predictable performance – classic list structure doesn’t hide time
      expenditures into the garbage collection phase.
    * Compiler portability-the capability of using it both with any C++
      compiler and without.
    * Extensive enough standard library (in comparison with classic Refal-5
      library). Alongside with all the Refal-5 capabilities `Library` provides
      the binary input/output, LibraryEx – handy utility functions and higher
      order functions: `Map`, `Reduce`, hybrid `MapReduce` which significantly
      simplify the looping constructs writing.
    * Encapsulation:  named brackets support – abstract data types. The content
      of such brackets is available only in that compilation unit where they
      are designed.
    * Encapsulation: static boxes. Unlike the classic Refal-5 global stack,
      static box can be placed in the local scope which is not available from
      the outside (by the way, the bank is implemented upon such a static box
      in the `Library`).
    * `SRMake` utility that allows monitoring dependency between the source
      codes.
    * Target file compilation – executable system file. No other interpreter is
      needed for running.
3. **The compiler has to be a tutorial for the Compiler design course**
    * The compiler architecture and algorithms should be simple enough and
      clear.
    * Students who are often not familiar with Refal will deal with compiler,
      that’s why the language has to be programming-friendly and have low
      learning curve.
    * The code should be organized so that when making a change just a small
      number of elements need to be learnt and changed.
    * Classic list structure is used as far as it’s the simplest (e.g. no
      garbage collection is needed )
    * The compiler is self-usable first of all, because the immersion in domain
      is becoming unavoidable (it gains a better understanding and hereby
      upgrades performance quality), secondly, bootstrap technique design is
      more interesting and informative.
4. **The compiler should be easy to port-should be assembled in any machine
   with any C++98 compiler.**
    * At least Windows, Linux and macOS operating systems should be supported.
    * It’s better not to make assumptions about which utilities (IDE, make,
      CMake, autotools…) exist in the developer’s machine. That’s why the
      assembly for Windows is command files-based, for UNIX-like –
      bash-scripts-based (the last one, as a rule, exists in all modern
      UNIX-like systems).
    * It has to be limited with the Standard C++ subset, equally implemented on
      the vast majority of platforms. “#ifdef-nightmare” should be avoided.
    * Throughout the current architecture the compiler consumes a lot of
      memory (30mB). Adjusting it to DOS having saved an easy compilation for
      other platforms will cause a lot of work and will complicate the compiler
      and the runtime. That’s why DOS is not supported.
    * The maximum number of different C++98 compilers should be supported, plus
      both library code and generated code should be assembled with the minimum
      number of warnings.
5. **The compiler needs to be the back end for the Module Refal compiler.**
    * The language should be expressive enough to express the Module Refal
      tools effectively. For this reason, for example, there are abstract data
      types and static boxes.
    * Some tools which aren’t used in the compiler can be described in the
      runtime. The thing is that they are used in Module Refal.
    * Some Module Refal objectives can be used for Simple Refal as well, for
      example, the capability of working on slow computers.

### Historic remark
[The initial objective][4] was to write a minimal compiler which could generate
codes in imperative language (exactly-C++). Programming convenience and the
purity, clearness and maintainability of the code didn’t have priority. That’s
why such artifacts as the pre-announcement necessity, empty functions instead
of identifiers and not well-written `Library.cpp` appeared. The consequence of
the objective was that each language entity is compiled in equivalent
environment. C++: `$EXTERN` and `$FORWARD` – into function declarations,
functions – into function definitions, empty functions-into function with the
only operator return `refalrts::cRecognitionImpossible;`.

Later a new objective appeared: a compiler should become one of the Module
Refal back ends. Consequently, new tools were added in the language: static
boxes, identifiers and abstract data types. They were added within the concept
of independent translation: static boxes (which are special types of
functions) are compiled in special functions, identifiers (which also need
pre-announcement) – in a tricky construction in C++.

The objective to provide the maximum portability has never been declared but it
was implied.

Despite the fact that a compiler as a tutorial has been used for a long time
(approx. since 2009), I’ve built up the apparent aim just recently when I
realized that’s it’s quite difficult for students to work with the current
language and the compiler. It may be considered that the commitments starting
from April 2015 were all oriented towards this aim.

At the moment the initial objective (minimal Refal compiler in imperative code)
is outdated, the code will be gradually cleared from its remainder.

Later, the objective was changed again. First of all, the Simple Refal dialect
stopped being simple, secondly, as an independent, incompatible with anything
dialect it’s no more needed. It was decided to converge towards the classic
Refal-5, which is close to it.

## Syntactic and semantic language extension

The language and the implementation provide a range of extra capabilities which
do not exist in classic [Refal-5][3].

### Higher order functions

They were the ones that gave the name to the dialect – as we know, nested
nameless functions are called lambda in slang. Refal-5 allowed symbols set was
updated with a closure symbol, which can be both a link for the global named
function and an object of nameless function.

    *$FROM LibraryEx
    $EXTERN Map;

    PrintEachLine {
      (e.Line) = <Prout e.Line>;
    }

    $ENTRY PrintLines-1 {
      e.Lines = <Map &PrintEachLine e.Lines>;
    }

    $ENTRY PrintLines-2 {
      e.Lines = <Map { (e.Line) = <Prout e.Line>; } e.Lines>;
    }

Such function can be called using Mu or writing the variable right after the angle bracket:

    Map-1 {
      s.Func t.Item e.Items = <Mu s.Func t.Item> <Map-1 s.Func e.Items>;
      s.Func /* пусто */ = /* пусто */;
    }

    Map-2 {
      s.Func t.Item e.Items = <s.Func t.Item> <Map-1 s.Func e.Items>;
      s.Func /* empty */ = /* empty */;
    }

(In fact, `Map` function from `LibraryEx` is more expressive)

### Assignments, blocks and variable shadowing

#### Blocks

Block (even a range of blocks) is allowed after any result expression, in
condition as well.

    Foo {
      An example
        , condition
        : { …block 1… }
        : { …block 2… }
        : condition example
        = resultant expression;
    }

In fact, block is said to be the syntax sugar and the record

    Result : { …A… } : { …B… } : { …C… }

Is an equivalent for

    <{ …C… } <{ …B… } <{ …A… } Result>>>

so just a simple composition of nested functions.

#### Assignments

Assignment unlike the classic condition is written with symbol `=`
(instead of `,`) and doesn’t allow rollback to the left side or to the next
sentence. For the sentence

    PatA , ResB : PatC = ResD : PatE , ResF : PatG = ResH;

Match fail in `PatC` will lead to the rollback to `PatA` or the next sentence.
Fail in `PatE` will abort the program. Fail in `PatG` will rollback either to
`PatE` or (if `PatE` doesn’t allow other match) will abort the program as well.

Assignments are syntax sugar as well, they’re equivalent to the blocks from one
sentence. The previous example is exactly equivalent to the next classic Refal
sentence:

    PatA , ResB : PatC , ResD : { PatE , ResF : PatG = ResH; };

Or Refal-5λ (note the equal mark):

    PatA , ResB : PatC = ResD : { PatE , ResF : PatG = ResH; };

The main advantage of assignment over condition in the role of assignment is
the implementation effectiveness in the list implementation. In making the
result condition part variables need to be copied because in case of fail the
same function argument will need to be rolled to the next sentence. In
assignments rollback isn’t possible which means the compiler must move the
variables from the argument.

#### Variable shadowing

Using extended constructions (conditions, blocks, assignments) a new entity
often comes out of subordinate objects, equivalent to the previous one
implicitly. In such a case the previous entity is no more needed. It’s
reasonable enough to give it the same variable name but classic Refal-5 syntax
doesn’t allow to do it-the variable will become repeated and it will have to
have the same value.

For example, parsing is being done using the recursive descent parser method.
Let us say we’re writing a function for processing the following rule

    Procedure → Header Declarations Body.

Let’s suppose that our non-terminal functions receive a sequence of tokens,
return a syntax tree, a list of errors and remainder of token sequence. Then
the procedure processing function will look like this

    ParseProcedure {
      e.Tokens

        = <ParseHeader e.Tokens>
        : (e.FuncName) (e.Parameters) (e.HeaderErrors) e.Tokens1

        = <ParseDeclarations e.Tokens1>
        : (e.Declarations) (e.DeclErrors) e.Tokens2

        = <ParseBody e.Tokens2> : (e.Body) (e.BodyErrors) e.Tokens3

        = ((e.FuncName) (e.Parameters) (e.Declarations) e.Body)
          (e.HeaderErrors e.DeclErrors e.BodyErrors)
          e.Tokens3;
    }

Here in each assignment we have to add the number to the variable `e.Tokens1` –
tokens left after reading the heading, `e.Tokens2` – tokens left after reading
the declarations and `e.Tokens3` – after reading the body of the procedure.

Refal-5λ makes it possible not to use this numbering. If in the example we put
the sign `^`after the variable name, this variable will hide the homonym linked
before. In this example it will be considered new (not repeated) and in the
remainder of the sentence the variable with this name will be already linked
with a new value (if later it won’t be hidden again). The previous example will
look like this:

    ParseProcedure {
      e.Tokens

        = <ParseHeader e.Tokens>
        : (e.FuncName) (e.Parameters) (e.HeaderErrors) e.Tokens^

        = <ParseDeclarations e.Tokens>
        : (e.Declarations) (e.DeclErrors) e.Tokens^

        = <ParseBody e.Tokens> : (e.Body) (e.BodyErrors) e.Tokens^

        = ((e.FuncName) (e.Parameters) (e.Declarations) e.Body)
          (e.HeaderErrors e.DeclErrors e.BodyErrors)
          e.Tokens^;
    }

### Encapsulation: static boxes and abstract data types

#### Static boxes

Here everything’s simple enough. Static boxes repeat the homonym [Refal-2][5]
concept. Static box is a function which returns the previous argument of its
сall when called (returns emptiness in the first call). In other words it’s
a global variable which stores an object variable. It’s reading is done
alongside with writing – when calling a static box as a function it returns
a value which was being stored in it and sets a new one as well.

Syntactically it’s done using `$SWAP` directive – static box as a local
function and `$ESWAP` – as an entry function (can be referred in other
translation unit using `$EXTERN`).

    $SWAP G_LocalState, G_Flags;
    $ESWAP G_CommonOptions;

Unlike the stack using static boxes doesn’t require giving a unique name to the
whole program, what’s more, no one beyond the translation unit could delete the
value using `<Dgall>`.

#### Empty functions

Unlike Classic Refal-5, the language allows creating empty functions not
containing any sentence. Their call always ends up emergency program
stopping. In an earlier version of the language (when it still was Simple
Refal) empty functions quite often were used as identifiers, that’s why the
syntax sugar was added to write them – the keyword `$ENUM` for a local function
and `$EENUM` for the entry:

    /* entry */
    $ENUM Opened, Closed;
    $EENUM TkNumber, TkName;

    /* is equivalent */
    Opened {}
    Closed {}
    $ENTRY TkNumber {}
    $ENTRY TkName {}

At the moment, they exist in the language but aren’t used in direct application
(identifiers do exist). Except the abstract data types case.

#### Abstract data types

That is the named brackets. That is the square brackets. That is the
encapsulated brackets. It’s kind of structure brackets but just (a) they’re
square, (b) after `[` must be the name of the function.

If the function written after `[` is considered to be local then the content of
the bracket term will be available only in the translation unit where it was
created (in other files this local function couldn’t be referred to by the
name). In other translation unit this term can be referred to only as
t-variable.

For such function-tag call `$ENUM` keyword is preferred.

    $ENUM SymTable;

    /**
      <SymTable-Create> == t.SymTable
    */
    $ENTRY SymTable-Create {
      = [SymTable];
    }

    /**
      <SymTable-Lookup t.SymTable e.Name>
        == Success e.Value
        == Fails
    */
    $ENTRY SymTable-Lookup {
      [SymTable e.Names-B ((e.Name) e.Value) e.Names-E] e.Name
        = Success e.Value;

      [SymTable e.Names] e.Name = Fails;
    }

    /**
      <SymTable-Update t.SymTable (e.Name) e.Value> == t.SymTable
    */
    $ENTRY SymTable-Update {
      [SymTable e.Names-B ((e.Name) e.OldValue) e.Names-E]
      (e.Name) e.NewValue
        = [SymTable e.Names-B ((e.Name) e.NewValue) e.Names-E];

      [SymTable e.Names] (e.Name) e.Value
        = [SymTable e.Names ((e.Name) e.Value)];
    }

### Native insertions

Classic Refal-5 implementation (and some other implementation) is closed for
extension – a set of primitive nested functions can be extended only be
modifying the interpreter.

Unlike it, the Refal-5λ implementation is opened  -new capabilities can be added
in the language (networking, databases) without changing the initial
implementation. The language allows native insertions – code insertion in C++
language. It looks like this:

    %%
    // this is a native insertion in the global scope
    #include <stdio.h>

    namespace {
      int g_next_number = 0;
    };
    %%

    $ENTRY NextNumber {
    %%
      // this is a native insertion inside the function body, in other words the function
      // is entirely written in C++.

      refalrts::Iter content_b = 0, content_e = 0;
      refalrts::Iter pfunc_name =
        refalrts::call_left(content_b, content_e, arg_begin, arg_end);

      if (! refalrts::empty_seq(content_b, content_e)) {
        return refalrts::cRecognitionImpossible;
      }

      ++g_next_number;
      printf("Generating next number %d\n", g_next_number);

      refalrts::reinit_number(arg_begin, g_next_number);
      refalrts::splice_to_free_list(pfunc_name, arg_end);
      return refalrts::cSuccess;
    %%
    }

> _Translation to English of this hunk of README.md is prepared by_
> **Mary Yenokyan <meric1996@mail.ru>** _at 2018-01-23_

`NextNumber` function was written in C++. In fact, standard language library as
a whole was written on Refal-5λ with such native pastes as arithmetic, input
and output and so on.

### Inclusion of the files

Language support `$INCLUDE` keyword allowing to include the another text file
content in the current entity (it must've `.refi` extension). File name in the
form of composite characters in quotation marks shall be situated after key
word.

    $INCLUDE "LibraryEx";

    /* later Map, Sort, LoadFile etc. can be used in the code. */

## Installation

Compiler can be installed into the system by downloading from
[simple-refal-distrib.git][1] repository, or [refal-5-lambda.git][1]. Executable
file of compiler will be available to you in the first case (half-compiled like
C++ source code), full source code in the second case. In both cases, the
installation above will be the same.

### Windows Installation from Installer

Download [latest version][6] of Installer and run it.

### Windows Installation from Sources

1. Start `bootstrap.bat`. Script will create the `c-plus-plus.conf.bat` file in
   which proposed to mention the C++ compiler used.
2. Specify С++ compiler in `c-plus-plus.conf.bat` file (Set `CPPLINEE`
   environment variable with command line prefix and `-O3`, `-Wall` options
   et al. Install `PATH` variable there if you need.)
3. Start `bootstrap.bat` again for building compiler. Script will launch, by
   default, the complete set of automatic tests it may take several dozen
   minutes (according to machine and C++ compiler). For starting without tests
   perform a `bootstrap.bat --no-tests`.
4. Add appeared directory `bin` to the directory list an environment variables
   `PATH` and `RL_MODULE_PATH`.
5. You can use `srmake` or `srefc` commands compiling programs on Simple Refal.
   See section 5 [user guide][7] for compiler using.

### Installation on UNIX-like (Linux, macOS, Cygwin, MinGW)

Installation similar to Windows installation except that GCC specifies in the
configurations file by default.

1. Start the bootstrap.sh  for compiler building. GCC compiler building and
   running all tests  will be implemented. For passing tests use `bootstrap.sh
   --no-tests`. In both cases `c-plus-plus.conf.sh`, configuration file will be
   created in which  will be specify GCC by default.
2. If you want to use another C++ compiler edit `c-plus-plus.conf.sh` file and
   if necessary restart the build.
3. Add appeared directory `bin` to the directory list an environment variables
   `PATH` and `RL_MODULE_PATH`.
4. You can use `srmake` or `srefc` commands compiling programs on simple Refal.
   See section 5 [user guide][7] for compiler using.

## License

The compiler distributed throughout BSD license with a reservation concerning
the components of standard library and runtime that may be distributed in binary
form without definition of compiler copyrighting. In absence of reservation for
compiled programs the compiler copyright would have to be specified. It wasn't
rational.

> _Translation to English of this hunk of README.md is prepared by_
> **Anastasia Dudkina <anastasia.vlad2014@yandex.ru>** _at 2018-02-08_

[1]: https://github.com/bmstui-iu9/simple-refal-distrib.git
[2]: https://github.com/bmstui-iu9/refal-5-lambda.git
[3]: http://www.botik.ru/pub/local/scp/refal5/
[4]: doc/historical/note000.txt
[5]: http://refal.net/~belous/refal2-r.htm
[6]: https://github.com/bmstu-iu9/refal-5-lambda/releases/latest
[7]: https://bmstu-iu9.github.io/refal-5-lambda/
