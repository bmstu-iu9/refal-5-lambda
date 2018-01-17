# Introduction in language

## What is REFAL? What is Refal-5λ?
REFAL – functional programming language, oriented on symbols data elaboration:
computer programs analyzing, transmission, text elaboration based on natural
and artificial languages.

Firstly this language was suggested by Valentin Fedorovich Turchin in 1968 year
as a metaalgorythmic language\[1] – a language for describing semantics of
another programming languages. In other words, it is pseudo-code, something
like mathematic notation. Later there had been new and effective methods of
REFAL implementation for ECM – he had already become a fully-featured
programming language.

The difference between REFAL and other functional languages (FL) is, first of
all, the usage of special data structure – object expression. The most FL use
single linked lists – the sequences of elements, in which only left side is
accessed for direct elaboration. In other words, it is possible to make only
such operations as looking on the first element, cutting off the first element,
making the new list by adding an element in the beginning of the starting list.

It is possible to derive the last element only by sequential truncation of the
first element until the sequence won’t be empty – the last truncated element is
the last element of the list. In order to concatenate (paste) two lists, the
elements of the first list in inverse order must be appended to the beginning
of the second list.

As to REFAL, it manipulates with bidirectional sequences (that are called
‘object expressions’): for them it is possible to use not only the same
operations with both sides (cutting off the first element, adding an element)
but also concatenation and separation in any place (see ahead about opened
e-variable). All these operations are primitive!  The expressivity of programs
is rising at that expense.

The another important specialty of REFAL is pattern matching. REFAL was one of
the first programming languages (maybe even the first), which uses this
mechanism for data structures analyzing. The functions on REFAL make the
analysis of its parameter by choosing one of some samples that describe the
parameter. Another way of analyzing datas is not anticipated in this language.

Firstly, REFAL-5λ dialect is an exact comprehending set of REFAL-5\[2] dialect,
that means that any program worked on “classical” implementation \[3] (further
we will name implementation as classical one without using quotations) will be
correct in REFAL-5λ.

Note. _Metafunctions `Ev-met`, `Up` and `Dn` aren’t work in actual version.
They will be implemented in next versions. There aren’t any other limitations._

Secondly, it is an extension of REFAL-5, that includes higher order functions
and also nested functions and a lot of good, tasty and useful syntactic sugar.
Classical REFAL-5 didn’t maintain nested functions as it was conceived, because
by Turchin REFAL it supposed to be not only the subject, but also the object of
programs modifications, and, what is important, valid modifications considered
to be only those, which could be described using “pen and paper”\[4].

Firstly nested functions appeared in Refal-7 dialect, suggested by Sergei
Yurievich Skorobogatov in 2006 year \[5]. Refal-5λ language has constrained
handling of  Refal-7 nested functions – only unnamed nested functions. But, as
the practice shows, it is quite enough.

Syntactic sugar – redundant syntax structures of programming language, that
make language more comfortable for usage. Such constructions can be written as
the combination of other syntax language elements, but usually less visually
and more clumsily.

Refal-5λ syntax sugar is assignments and blocks, and, as it will be seen
further, they are expressed with nested functions. These and other kinds of
“sugar” will be told about later.

Thirdly, actual implementation of Refal-5λ is not locked in contrast to a lot
of other REFAL implementations. It means that  programmer is not constrained
with some “embedded” language functions, embedded interface with C++ language
allow the programmer to implement and use functionality in their programs on
Refal, that absent in standard library – work with networks, with databases,
windows interface and so on. As well as C/C++ languages allow using
code insertion on assembler, Refal-5λ allows code insertions on C++ in source
texts on REFAL (e.g. native insertions). Surely, C++ compiler is essential for
compilation of such programs, but if you do not use native insertions,
compiler C++ might not be installed.

The actual implementation can compilate the programs both in intermediate
interpretive code and in code on C++.

## Installation and startup

### Automatic installation on Windows («setup.exe»)

The easiest way is to download `setup-refal-5-lambda-***.exe` file from the
webpage

<https://github.com/bmstu-iu9/simple-refal/releases/latest>

and just start it up. In this way archive with executable and library Refal
modules in user profile (into folder `%APPDATA%`), the way to the catalog will
be written into `PATH` variable for the current user. In order to delete Refal
from your computer it is possible either to use “Refal-5-lambda” →
“UninstallRefal-5-lambda” shortcut in Start menu or using “Control panel” →
“Programs and components” or “Parameters” → “Applications” → “Apps & features”
depending in Windows OS version.

Straight after installation it is possible to start the command line and to use
the commands `srefc`, `srefc-core`, `srmake`, `srmake-core` in it in any folder.

### “Half-compiled” archive unwinding (Windows, Linux, macOS)

It is possible to download and unpack `bootstrap-refal-5-lambda-***.zip` in any
catalog from the same page
<https://github.com/bmstu-iu9/simple-refal/releases/latest>.

In archive there are Refal-5λ, compiled into code on C++ and glue
interpretive code. In order to get ready executable modules from it it is
essential to have an installed C++98 compiler on computer. It is enough to
download `bootstrap.bat` file on Windows or `bootstrap.sh` on Linux or macOS –
after distribution there will be new executable files in the bin subfolder.

Note. _After archive distribution the attribute `+x` in the executable files
can be cleared. For its annealing it is required to implement the following
command:_

    chmod +x *.sh scripts/load-config.sh bin/sr{efc,make}

On Windows platform the first `bootstrap.bat` start will inevitably lead to
error. It should be so: `bootstrap.bat` script will make configuration
`c-plus-plus.conf.bat` file and suggest writing of command line of C++ compiler
used by you in it (it already has some ready commented lines, you should use
one of them if your compiler is mentioned there). The second start is to put
all together.

Note. _On unix-like platforms (Linux, macOS)  bootstrap.sh also makes
configured c-plus-plus.conf.sh file , but GCCC++ call is already written in
it automatically. If you want, you can change it on, for example, Clang._

The content of this “half-compiled” archive is available as an archive on
GitHub on the address <https://github.com/bmstu-iu9/simple-refal-distrib>.
It is possible to clone it using command

    git clone https://github.com/bmstu-iu9/simple-refal-distrib

and further unwind it using procedure that was described earlier.

### Building from sources

Sources are cloned with the command

    git clone https://github.com/bmstu-iu9/simple-refal

and built together as “half-compiled” distributive higher (`bootstrap.***`
is started, `c-plus-plus.conf.***` is corrected if it is necessary etc.)

It is enough to have any C++98 compiler for expanding. Distribution was tested
on BCC 5.5, Microsoft Visual C++ of different versions, GCC C++, Clang,
OpenWatcom.  Supported operational systems: Windows XP and newer, GNU+Linux
(distributives not older than 5 years), macOS ( I don’t now certain versions-
thy were tested not by me). Supported processors architectures are x386 and
amd64 (work on big endian machines is not supported in current version).

**It is important!** Source codes from GitHub must be downloaded only by
cloning. Website interface allows to download files as zip-archive, but
`bootstrap.***`  will not work in unpacked archive. `bootstrap.***` script in
`simple-refal` repository considers that repository is connected to the folder
`distrib` as sub-module and it can be initialized with `git submodule init` and
`git submodule update` commands. In downloaded archive `distrib` folder will
stay empty, which means that it will be impossible to bootstrap from the
sources. Probably, it will be corrected in the next versions.

### Text editors configuring

There are configuration files in distributive, which imply syntax highlighting
for different text editors. If you installed REFAL on Windows, using
automatic setup («setup.exe»), folder with configuration files is accessed
through the Start menu: “Refal-5 lambda” → “Plugins for text editors”. In all
other cases (half-compiled archive, cloned repositories) files of texts
editors configuration are available in `editors` subfolder.

At the moment highlighting is fully supported for Refal-5λ and expanded
Simple Refal for Vim editors and implanted in Far (Far Colorer plugin). For
some other text editors (Code::Blocks, Kate, Notepad++, SublimeText 3) only
colouring of expanded Simple Refal syntax is supported, and, probably, only for
non-actual version.

For Simple Refal there is a plagin for IDEA, that provides colouring of syntax
errors and autocompletion, it is available on link:

<https://github.com/bmstu-iu9/simple-refal-plugin>

However, it doesn’t support assignments, conditions and blocks.

There is a support of classical REFAL-5 for SciTE text editor, it is available
on the link <http://www.refal.net/~belous/refscite.htm>.

### Simple program compilation

Open your favorite text editor and write the following text in it:

    $ENTRY Go {
      = <Prout 'Hello, World!'>;
    }

and save it with name `hello.ref`. After that open command line in the folder
with this file and write the following command:

    srefc hello.ref

In the folder files `hello.rasl` and `hello.exe` should appear (on unix-like
systems it will be named just `hello` without extension, but they will have `+x`
flag – executable mark). `Hello.rasl` file – a transient file with interpretive
code, is not useful itself (it is made and used in compilation) and can be
deleted.

The `hello.exe` file-is an already compiled program. On Windows it is set the
following way: 

    hello.exe

On unix-like the following way:

    ./hello

In both cases it will print the line `Hello, World!`

Appendix. _In Refal-5λ distribution from the sources compiled programs print
out plenty of diagnostic information in the end. In other words, after Hello,
World!  phrase the number of steps, spent time (in details) and amount of used
memory will be printed. It should be so._
 
It will be said about the meaning of written in `hello.ref` file in the next
[chapter](3-basics.en.md).

References 
1. V.F.Turchin. Metaalgorythmic language. Cybernetics №4, 1968, pages 45-54.
   Available in the Internet:
   <http://pat.keldysh.ru/~roman/doc/Turchin/1968-Turchin--Metaalgoritmicheskij_yazyk--ru.pdf>
   (in Russian).
2. V. F. Turchin, REFAL-5 programming guide and reference manual, New England
   PublishingCo., Holyoke, 1989
   There is translation into Russian language in the internet (description
   of old syntax): <http://refal.ru/rf5_frm.htm>, rewritten and expanded
   publication of 1999 year is also available:
   <http://refal.botik.ru/book/html>.
3. V. F. Turchin, D. V. Turchin, A. P. Konyshev, A. P. Nemytykh, Refal-5:
   Sources, Executable Modules, (\[online]:
   <http://www.botik.ru/pub/local/scp/refal5/>), 2000
4. Arkadii Klimov, letters for mailing list <refal@botik.ru>. It is available
   in mailing list archive:
   <https://www.mail-archive.com/refal@botik.ru/msg00044.html>,
   <https://www.mail-archive.com/refal@botik.ru/msg00055.html>
   (in Russian)
5. Sergei Yu. Skorobogatov, Andrey M. Chepovskiy.  Refal language with
   higher-order functions // Informational technologies, 2006. № 9.
   Available in the Internet:
   <https://waybackmachine.org/web/20070719175259/http://iu9.bmstu.ru/science/refal.pdf>
   (in Russian)

> *Translation to English of this paper is prepared by*
> **Yarullina Diana <190471@list.ru>** _at 2018-01-17_
