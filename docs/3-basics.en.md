# Basis of programming in Refal, Basic Refal

This chapter is an informal introduction to Refal-5λ, which is accessible even
to a beginner or a programming beginner. In the next chapter (manual) of this
article, we will look at this issue in a more formal way.

# Basic Refal Syntax

The term _Basic Refal_ is commonly referred to a Refal semantic subset, which
function sentences consist of two parts, the variables can be s-, t- or e-
typed (there is no Refal-2 qualifiers) and symbol types include only literal
characters, numbers and words.

The Basic Refal subset is semantic. That means that a specific syntax form of
the considered structures may be quite different in diverse dialects and
implementations (e.g. the Refal-2 syntax is widely different from the Refal-5
syntax). But these listed expressive means exist in the language.

# Hello, World! Program

In the [previous chapter](2-intro.en.md) we managed to compile and to run a
program [`hello.ref`](hello.ref), which printed out a string “Hello, World!”.
Let us learn how to read and understand its source code.

    $ENTRY Go {                                 /* 1 */
      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */

Attentive readers noticed this program is different from the other in the
previous chapter: strings starting from `/*` and ending at `*/` were added.
These are _comments._ Any text between `/*` and `*/` is ignored by the compiler
and is used to clarify the program idea.

There where added comments in this program, line numbering (for convenience of
a quick reference from the manual text) and the word `/*empty*/`, which
emphasize readers attention to the fact there is nothing at that place of the
program. It sounds strange but it will make more sense.

The restricted by `/*` and `*/` signs comments are _multi-line._ It means `*/`
does not have to be on the same string that `/*`. There are not only multi-line
comments but _single-lined._ Any strings starts from `*` sign (in the first
column) is ignored by the compiler.

E.g. the next program is the same but is littered with useless comments.

    /*
      Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod
      tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
      veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea
      commodo consequat.
    */
    $ENTRY Go {                                 /* 1 */
    * At vero eos et accusamus et iusto odio dignissimos ducimus, qui
    * blanditiis praesentium voluptatum deleniti atque corrupti, quos dolores
    * et quas molestias excepturi sint, obcaecati cupiditate non provident,
    * similique sunt in culpa, qui officia deserunt mollitia animi, id est
    * laborum et dolorum fuga. Et harum quidem rerum facilis est et expedita
    * distinctio. Nam libero tempore, cum soluta nobis est eligendi optio,
    * cumque nihil impedit, quo minus id, quod maxime placeat, facere
    * possimus, omnis voluptas assumenda est, omnis dolor repellendus.

      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */
    * Source of the comments texts:
    /* https://ru.wikipedia.org/wiki/Lorem_ipsum */

Let’s get back to our function.

    $ENTRY Go {                                 /* 1 */
      /* empty */ = <Prout 'Hello, World!'>;    /* 2 */
    }                                           /* 3 */

Any program in Refal-5λ is a set of functions (it is a functional programming
language after all). This program is not an exception. The `Go` function is
defined here. The function definition is written as the name of the function
followed by a _block_ (the function body enclosed in braces: strings 1 and 3
respectively). The `Go` name is not coincidentally: any Refal program must have
a single function definition named `Go` or `GO`. The program execution process
is the function `Go` (or `GO`) with an empty argument computation.

Hieroglyphic `$ENTRY` will be clarified in the next sections. Just need to know
that the key word `$ENTRY` must precede the `Go` (or `GO`) program entry point.

There is a single function Go _sentence_ in the second string. A sentence is a
rule, which define how to put up the function value on an arguments subset. A
function can consist of several sentences, each ends with a `;` sign (a
semicolon).  A semicolon may not be used at the end of the last sentence.

Any sentence consist of two parts – _the left part, a pattern_, which describes
a value subset of the function argument on which the sentence is applied. And
_the right part, a result_ that describe the function value on the subset. The
left and the right parts are divided by `=` (equality) sign.

Note. _In the future we will consider the extended Refal syntax in which
sentence syntax will be more complicated._

The sentence in the program `hello.ref` means that it can be applied on an
empty function argument only (there is nothing before the equality). The `/*
empty */` comment stresses the fact. The right side describes the `Go` function
definition with empty argument as the result of the `Prout` function computing.
A sequence of signs `Hello, World!` is transferred to it. A function call on
Refal is written with angle brackets `<` and `>`. The function name has to be
placed after the opening brace.

The function Prout computes “emptiness” with any argument. However, its
implementation has some side effects. It prints an argument on the screen. That
is why it is called.

Almost all Refal programs are written actually for these side effects. After
the function `Go` (or `GO`) computing the result is discarded and the program is
completed. User sees only what was displayed on the screen by the function
`Prout`, recorded to files or transferred “out” of the computing process by
other ways.

Note. _There are exceptions. On the one hand, these are automated tests
(autotests) – programs that launch the testing function, check its result and
are finalized. If this verification is successful the program is just
completed. In another case the program termites by a fail-safe.  The tests run
environment can distinguish this two cases and inform the user unsuccessful
runs.  Another example are researches in the field of automatic program
conversion and verification (e.g. by supercompilation). In this case, an
interesting math function is written in Refal. It is fed to the tool (e.g
Refal-5 supercompiler SCP4 (\[1], \[2], \[3])) and then the conversion result or
the function analysis are examined. Researches in the field of tools
development is one of the most important Refal application today._

The function `Prout` is one of the functions that is included in the language
standard library. And it is implicitly available for using in any program. In
classic Refal-5 it is built in function that means it is implicitly defined in
any program.  However, Refal-5λ allows us to write programs in which a standard
library is not used.

### Interim conclusions – what have we seen in `hello.ref`

Let us to conclude what we have learn by now.

* We can write comments that do not affect program running and serve as an
  explanation in the programs.
* There are two comment types: single-lined and multi-lined.
* A single-lined comment is a string where the first sign is `*`. The remaining
  signs may be any type.
* A multi-lined comment can be situated in any place in the program (e.g next
  to a meaningless non-space character). The comment begin with the signs `/*`
  and ends with the signs `*/`.
* A Refal program is a function set.
* A program running starts with a “starting” function `Go` or `GO` call with an
  empty argument.
* Before the starting function name should be the keyword `$ENTRY`.
* A Refal function is written as the function name, followed by curly braces
  with one or several sentences.
* A sentence consist of two parts: the left – “a pattern” and the right – “the
  result”.
* The left side defines the arguments value subset on which the sentence is
  applied.
* The right side defines how will be developed the function result computing on
  this argument subset.
* “An empty value” is written as an empty place. It is written a comment
  `/* empty */` usually.
* The printable characters sequence is written in quotation marks:
 `'Hello, World!'`.
* The function `F` call with an argument arg is written as `<F arg>`.

The program execution is the function `Go` with an empty argument computing. The
function call is written with angular brackets. The empty value is written as
an empty space. That means that the Refal program execution is the same thing
as the function `<Go>` or `<Go /*empty*/>` call. In the first case, we haven’t
written anything (we have attached one to the other) between the function name
`Go` and the closing brace `>`. In the second case, we have stucked a comment
for illustrative purposes. A function call with an empty argument is usually
written without a comment inside.

## Examples of other programs.

### Programs with several sentences

Before turning to other examples, we have to explain the syntax that is not
reflected in the `hello.ref` listing.

First, Refal is a language with free syntax. The transition to a new line is
exactly the same non-space character as space or tab. A pair of exceptions -
the opening and closing quote marks should be placed in one line (the line
break can not be placed inside a sequence of characters) and the line feed
character completes a one-line comment by definition.

Secondly, each of the characters inside the single quote marks is autonomous.
The following entries are equivalent: `'Hello'`, `'Hel' 'lo'`,
`'H' 'e' 'l' 'l' 'o'`.

Thirdly, the function name can be any sequence of letters, numbers, signs `_`
(“dash”) and `-` (“hyphens”), starting with a dash or a letter. For example,
`Go`, `Hello`, `A-plus-B`, `_remove_file`, `ANSWER_42`. Lowercase and uppercase
letters are different, i.e. the names `hello`, `Hello` and `HELLO` are
different.

Note. _The classical REFAL-5 implementation does not support names that begin
with a dash._

**Example 1.** Let's write a function that adds two binary digits.

    BinAdd {
      '0' '0' = '0';
      '0' '1' = '1';
      '1' '0' = <BinAdd '0' '1'>;
      '1' '1' = '10';
    }

The left-hand parts of the sentences could be written together, for example
`'00'`. It would not affect the work of the program because they were written
separately for readability.

It is easy to understand that the first sentence is applicable when the
function argument is `'00'`, i.e. the result of the calling `<BinAdd '00'>`
will be `'0'`. Everything is clear with the second and fourth sentence too.

The third sentence suggests that the result of the function `<BinAdd '10'>`
calling is exactly the same as the `<BinAdd '01'>`, changing the order of the
addends does not change the sum. It was possible to write on the right side
`'1'` at once, but the function call was added to the right part for
demonstrating the call itself.

The definition scope of this function will be pairs of characters `'00'`,
`'01'`, `'10'`, `'11'`. When you try to call this function with an argument
outside the definition area, the program crashes (an impossible assimilation
error, «recognition impossible»).

**Example 2.** Let’s write a function that subtracts two binary digits.

    BinSub {
      '0' '0' = '0';
      '1' '1' = '0';
      '1' '0' = '1';
      '0' '1' = '-' <BinSub '1' '0'>;
    }

Everything is the same here, except for the last sentence. In the right part of
the fourth sentence, a minus sign is written, followed by a function `BinSub`
call. What does it mean? This means that the result of the function
`<BinSub '0' '1'>` calling will be the `'-'` sign, followed by the result of
the computation of `<BinSub '1' '0'>` – `'1'`. It means that the result of
`<BinSub '0' '1'>` will be equal to `'-' '1'` or `'-1'`.

**Example 3.** Let's write a function that checks the equality of two binary
numbers that are not greater than 2 (ie 10 in binary notation) and not less
than -1. We assume that both numbers in the function argument are separated by
the `'='` sign.

    IsEqual {
      '-1=-1' = 'True'; '-1=0' = 'False'; '-1=1' = 'False'; '-1=10' = 'False';

      '0=-1' = 'False'; '0=0' = 'True'; '0=1' = 'False'; '0=10' = 'True';

      '1=-1' = 'False'; '1=0' = 'False'; '1=1' = 'True'; '1=10' = 'False';

      '10=-1' = 'False'; '10=0' = 'False'; '10=1' = 'True'; '10=10' = 'True';
    }

Yes, it’s boring. Yes, it’s long. Later we will see how to shorten this entry.

**Example 4.** Let’s write a function `Go` that demonstrates the addition
commutability and the subtract noncommutability.

    $ENTRY Go {
      = <Prout '1+0=0+1? ' <IsEqual <BinAdd '1' '0'> '=' <BinAdd '0' '1'>>>
        <Prout '1-0=0-1? ' <IsEqual <BinSub '1' '0'> '=' <BinSub '0' '1'>>>;
    }

Functions `BinAdd`, `BinSub`, `IsEqual` and `Go` can be put in one file (let's
call it [`binmath-1.ref`](binmath-1.ref)) and compiled with the following
command:

    srefc binmath-1.ref

then you get an executable file `binmath-1.exe` (or `binmath-1` on unix-like)
that will print on startup

    1+0=0+1? True
    1-0=0-1? False

We have considered functions that have different but _fixed_ values in the
left-hand parts of the sentences in this chapter. The function domain of such
functions are obviously all the enumerated values of the samples. It is clear
that it is hell of a lot for writing non-trivial programs: you can set only
functions with a finite definition domain and you have to write a sentence for
each of the argument values. This led to the fact that even such a simple
function as `IsEqual` required as many as 16 sentences.

We will learn how to write functions with an infinite definition domain in the
next section.

An attentive reader had probably the question: what happens if several
sentences have the same left parts? Is it a syntax error? The answer is: it
will not. If several sentences in the function argument become applicable, the
one that is written above would have priority. For example, the result of
calling `<F 'A'>` will be `'1'`, not `'3'`:

    F {
      'A' = '1';
      'B' = '2';
      'A' = '3';
    }

The first sentence have priority over the third.

## Variables

The left-hand side defines an argument values subset at which this sentence is
applicable, as noted above. We have considered only cases of subsets consisting
of one single element by now.

Refal allows us to write in the left parts of expressions (the exact definition
of the term “expression” will be given later), which contain unknown random
fragments – _variables_ – in addition to explicitly set.

The variable _type_ determines the values sets that variables can take. There
are three types of variables in Refal: s-, t- and e-variables. We will consider
the t-variables later, when we study the structural brackets.

The value of an _s-variable_ or a _symbol variable_ can be any single symbol.
The value of an _e-variable_ or an _expression variable_ can be any fragment of
the function argument, including empty (not any but it will be considered
later).

A variable is written as a sign of (`s`, `t`, `e`) type, followed by a sign `.`
(“point”) and the variable name is a sequence of letters and numbers. The
variable name is often called the variable index.

If the variable appears several times in the expression, then it is called
repeated.  All its occurrences must have the same value.

Let's consider some expressions with variables:

* `s.1 s.2 s.3` – three any symbols, for example `'ABC'`, `'999'`, `'@#$'`.
* `s.A s.A s.A` – three any identical symbols, for example `'666'`, `'www'`.
* `s.Edge s.Middle s.Edge` – three any symbols, where the first and last must
  match. For example: `'@$@'`, `'kek'`, `'^_^'`.
* `s.first e.middle s.last` – any expression containing at least two
  characters. For example: `'Hello'`, `'10'`, `'0_o'`.
* `s.EDGE e.CENTER s.EDGE` – any expression of two characters at least,
  beginning and ending with the same character. For example: `'++'`, `'LOOOL'`,
  `'revolver'`.
* `'(' e.Inner ')'` is an expression that begins and ends with a bracket.
  Examples: `'()'`, `'() ()'`, `'(ok)'`.
* `e.Key '=' e.Value` – an expression that contains one equal sign at least.
  For example: `'='`, `'x = 1'`, `'-1 = 10'`, `'A = B == C = D'`.
* `e.Eq e.Eq` is an expression with even length, which can be divided into two
  identical halves: `'ABCABC'`, `'8888'`, the empty expression (it can be also
  divided into two empty ones).

Variables can appear both in the left part of the sentence and in the right
part. In this case, only those variables that are in the left can be used on
the right side of the sentence.

We need to clarify the process of Refal function execution now.

1. A sentence is selected from the left side of which you can get a function
   argument by changing the variables in it to some values. If there are
   several such sentences, it is chosen with the one with the smallest number.
   If there wasn’t such sentence, then the program ends with an error of
   recognition impossible.
2. The variables values are fixed when they request to the function argument
   when they are placed in the left part of the selected sentence. If there are
   several such sets of variables values (permutations), then it is fixed the
   one in which the leftmost e-variable takes the shortest value. If it does
   not resolve ambiguities, then the next e-variable is considered and so one
   (in the next section we will look at this process in detail).
3. The variables are replaced by their values in the right side of the selected
   sentence. Then the functions on the right are calculated.

This process will be considered in detail and formally in the next chapter.

**Example 5.** Now we are equipped with the weapons of knowledge, we can
simplify the function IsEqual:

    IsEqual {
      e.Equal '=' e.Equal = 'True';
      e.Left '=' e.Right = 'False';
    }

You see that, firstly, the function has been reduced from 16 sentences to two,
and secondly, its definition domain has been significantly expanded. It takes
not only pairs of binary numbers, but any expressions containing the `'='` sign.

The first sentence of the function is applicable to any expressions that
contain at least one equality sign. They can be divided so that the preceding
the `'='` sign part will match the following one.

The second sentence is applicable to any argument containing an equality sign.

Both sentences are obviously applicable for the arguments of the `'ab = ab'`
form. The first has the same expressions before and after the `'='` sign. The
second, because it has the equality sign. As stated, the preceding sentences
has priority over the following ones, therefore the first sentence will process
cases of equal “halves”, and the second will receive the rest (unequal).

If both statements are interchanged, the result of the function (on its
definition domain) will be always 'False'.

**Example 6.** The IsPalindrome function, which checks if the function argument
is a palindrome.

    IsPalindrome {
      s.OneSymbol = 'True';
      /* empty */ = 'True';
      s.Equal e.Middle s.Equal = <IsPalindrome e.Middle>;
      e.Other = 'False';
    }

The definition of this function can be read as follows. A string of one
character is a palindrome. An empty string is also a palindrome. A string that
starts and ends with the same symbol is a palindrome if the “middle” part of
the string is also a palindrome. Any other string is not a palindrome.

The function definitions on a functional language often can be read as
mathematical definitions.

**Example 7.** Let's write the addition function of two binary numbers with
arbitrary length. Refal functions take one argument, but here we want to transmit
two. In the first version of the addition function, we avoided this difficulty
by transmiting two _symbols_ to the function. Now we need to transfer two
expressions with arbitrary length. Each argument can be composed of the signs
`'0'` and `'1'` only. So you can put any character between them, except for
zero and one – by it you can figure out where one argument ends and another
starts. We will use the symbol `'+'` for clarity.

Note. _Later we will learn a much simpler, efficient and universal way of
arguments separating._

    BinAdd {
      e.Num1 '0' '+' e.Num2 '0' = <BinAdd e.Num1 '+' e.Num2> '0';
      e.Num1 '0' '+' e.Num2 '1' = <BinAdd e.Num1 '+' e.Num2> '1';
      e.Num1 '1' '+' e.Num2 '0' = <BinAdd e.Num1 '+' e.Num2> '1';
      e.Num1 '1' '+' e.Num2 '1'
        = <BinAdd <BinAdd e.Num1 '+' '1'> '+' e.Num2> '0';
      /* empty */ '+' e.Num2 = e.Num2;
      e.Num1 '+' /* empty */ = e.Num1;
    }

Its easy to see that the function implements the two binary numbers columnar
addition. If the last digits of both numbers are '1' and '1', then the next
digit is transferred. This extra unit is added to the first argument.

### Interim conclusions

Let's sum up:
* There can be variables in the left and the right parts of the sentence –
  expressions fragments, which can be replaced by arbitrary values according to
  their type.
* S-variables can be replaced by any character.
* E-variables can be replaced by a arbitrary expression.
* The variable names syntax: `s.varname`, `e.ab123`, `s.123ab`.
* The function sentence is executed if it is possible to select a variables
  values substitution, which converts the left side to a function argument.
* The same substitution is also made in the right side of the sentence.

## Structure brackets

A purely mathematically studied Refal subset is sufficient for writing any
complex algorithm (see \[4, Lecture No. 6]). But this is not enough in practice:
the studied tools allow us to work with “flat” strings characters only, whereas
many non-trivial algorithms require hierarchically organized data.

What is a data hierarchy? It is an opportunity to work with some piece of data
as one object, by abstracting from its internal complex structure. For example,
we can work with a text document as a file: move it from folder to folder,
copy, erase, and don’t care about text, tables, pictures, etc. inside it. This
does not interest us at a certain level of hierarchy.

In order to work in Refal  with an expression as a single object, it is
enclosed in parenthesis, which are called _structure brackets_. Such an object
called _bracket term_ can be the part of another expression, which can be also
enclosed in brackets. Hierarchical nested data are built in Refal this way. The
symbols we considered before are also terms. In this way, a Refal expression
consists of terms each of which can be either a symbol or a bracket term that
contains another expression in Refal.

Unlike round, _structure_ brackets  the angle brackets of the function call in
the right parts of the sentences are named _evaluation brackets_, _activation
brackets_ or _call brackets_ (all these expressions are synonyms).

**Example 8.** The expression

    ('abc') 'def' (('ghi') 'j' ('klm') ()) 'nop' ((('rst')))

consists of 9 terms. The first term is bracketed. It contains an expression of
three symbol terms, the next three are printed signs `'def'`, the next is a
bracketed one again consisting of three bracketed terms and one symbol. Its
last bracketed term contains an empty expression.

The brackets must form the correct bracket structure on both the left and right
sides of the sentences in a Refal expression. In doing so, on the right side of
the statements round and angle brackets can not overlap each other.

Let us clarify our understanding of variables from a perspective of our new knowledge.

* E-variables can take a arbitrary sequence _of terms,_ i.e. the e-variable value
  can be an expression with the correct bracket structure only.
* The _t-variables_ value (they are written as t.varname) can be any single
  term – both a symbol and an expression in brackets.

**Example 9.** Let’s depict Pushkin's genealogy in the form of a Refal
expression. Each character of the family tree will be represented in the form
of a bracket term that contains the character's name and two terms: father and
mother. If the ancestor is known it will be depicted as the same character, if
not – in its place will be located the symbol '?'. Thus, each character can be
mapped to the form sample of the form

    (e.Name t.Father t.Mother)

The bloodline itself \[5, 6]:

    (
      'Alexander Sergeyevich Pushkin'
      (
        'Sergey Lvovich Pushkin'
        (
          'Lev Aleksandrovich Pushkin'
          '?'   /* unknown father */
          (
            'Evdokia Ivanovna Golovin'
            '?' /* unknown father */
            '?' /* unknown mother */
          )
        )
        (
          'Olga Vasilievna Chicherina'
          ('Vasily Ivanovich Chicherin??')
          '?'   /* unknown mother */
        )
      )
      (
        'Nadezhda Ossipovna Pushkina (Gannibal)'
        (
          'Ossip Abramovich Gannibal'
          ('Abram Petrovich Gannibal (The Moor of Peter the Great)??')
          ('Christina Regina von Sioberg??')
        )
        ('Maria Alekseevna Pushkina??')
      )
    )

Note. _In fact, the A.S. Pushkin bloodline is known much deeper. For the sake
of clarity some ancestors were skipped at different levels of the hierarchy
here._

**Example 10.** Let's write a function that takes the family tree and the
ancestor branch in the form of a chain of `'MFFM…'` characters – where `'M'`
means mother, `'F'` is father and finds the corresponding ancestor.

For example, 'F' is father, 'FF' is the paternal grandfather, 'MM' is the
maternal grandmother, 'FM' is the paternal grandmother, 'FMM' is the paternal
maternal grandmother, the empty expression is the character itself.

    FindAncestor {
      /* advancing on the father line */
      (e.Name t.Father t.Mother) 'F' e.Branch
        = <FindAncestor t.Father e.Branch>;

      /* advancing on the mother line */
      (e.Name t.Father t.Mother) 'M' e.Branch
        = <FindAncestor t.Mother e.Branch>;

      /* an unknown character has unknown the ancestors */
      '?' e.Branch = '?';

      /* Branch ended – the person you are looking for is the current */
      (e.Name t.Father t.Mother) /* empty branch */ = e.Name;
    }

In other words, in order to find an ancestor on the father by the bloodline
(the branch starts with `'F…'`), you should take the father's bloodline
(t.Father field) and look for the ancestor in it (throwing the branch `'F'`from
the beginning) – this is what makes the first sentence. The second sentence is
likewise.

If the bloodline is unknown at some stage, then any ancestor will be unknown.
This case processes the third sentence. If the branch is empty (an empty branch
is specified or it is emptied in a few iterations), then the last fourth
sentence (the root of the current bloodline) is the person you are looking for.

**Example 11.** Let's write a program that prints some of Pushkin's ancestors
([`pushkin.ref`](pushkin.ref)).

    $ENTRY Go {
      = <Prout <FindAncestor <Pushkin> 'FF'>>
        <Prout <FindAncestor <Pushkin> 'FFF'>>
        <Prout <FindAncestor <Pushkin> 'MFF'>>
        <Prout <FindAncestor <Pushkin> 'MFM'>>
        <Prout <FindAncestor <Pushkin> 'F'>>
        <Prout <FindAncestor <Pushkin> 'FM'>>
        <Prout <FindAncestor <Pushkin> 'FMF'>>
        <Prout <FindAncestor <Pushkin> 'FMFM'>>
    }

    FindAncestor {
      …see above…
    }

    Pushkin {
      = (
          'Alexander Sergeyevich Pushkin'
          (
            'Sergey Lvovich Pushkin'
            (
              'Lev Aleksandrovich Pushkin'
              '?'   /* unknown father */
              (
                'Evdokia Ivanovna Golovin'
                '?' /* unknown father */
                '?' /* unknown mother */
              )
            )
            (
              'Olga Vasilievna Chicherina'
              ('Vasily Ivanovich Chicherin??')
              '?'   /* unknown mother */
            )
          )
          (
            'Nadezhda Ossipovna Pushkina (Gannibal)'
            (
              'Ossip Abramovich Gannibal'
              ('Abram Petrovich Gannibal (The Moor of Peter the Great)??')
              ('Christina Regina von Sioberg??')
            )
            ('Maria Alekseevna Pushkina??')
          )
        )
    }

The `Pushkin` function consists of a single sentence that returns a constant
with any argument. It means that it is the definition of the constant. The rest
must be clear.

Note (from Russian version of tutorial). _The ancestors’ names are written with
transliteration. The output of Cyrillic alphabet on the screen does not work or
works incorrectly in some operating systems. This will be fixed in the next
versions._

To compile and run the program for Windows, type:

    srefc pushkin.ref
    pushkin.exe

For Linux:

    srefc pushkin.ref
    ./pushkin

The program should print the following:

    Lev Aleksandrovich Pushkin
    ?
    Abram Petrovich Gannibal (The Moor of Peter the Great)
    Christina Regina von Sioberg
    Sergey Lvovich Pushkin
    Olga Vasilievna Chicherina
    Vasily Ivanovich Chicherin
    ?

We transferred the function arguments by separating them with some sign that
can not appear inside the arguments (for example, `'='` in the function
`IsEqual` or `'+'` in the `BinAdd` function) when we wanted to call the
function with several arguments. It is better when transfering several
arguments we “wrap” them in the bracket terms. For example, if the function
takes 3 arguments with a arbitrary length – let’s denote them as `e.1`, `e.2`,
`e.3` – then they can be transferred as `(e.1) e.2 (e.3)`, `e.1 (e .2) (e.3)`,
`(e.1) (e.2) e.3` and `(e.1) (e.2) (e.3)`. The last option, placing each
argument in the bracket term, is redundant. But sometimes it makes programs
more understandable. If N arguments are transferred to the function, then it is
sufficient to wrap N-1 arguments in brackets only.

We will see that wrapping arguments in brackets instead of separator characters
is not only easier (you do not need to come up with a separator character), but
also more efficient in terms of program execution time in the next chapter.

Now the functions `IsEqual` and `BinAdd` can be rewritten as:

    IsEqual {
      (e.X) (e.X) = 'True';
      (e.X) (e.Y) = 'False';
    }

    BinAdd {
      (e.Num1 '0') e.Num2 '0' = <BinAdd (e.Num1) e.Num2> '0';
      (e.Num1 '0') e.Num2 '1' = <BinAdd (e.Num1) e.Num2> '1';
      (e.Num1 '1') e.Num2 '0' = <BinAdd (e.Num1) e.Num2> '1';
      (e.Num1 '1') e.Num2 '1' = <BinAdd (<BinAdd (e.Num1) '1'>) e.Num2> '0';
      (/* empty */) e.Num2 = e.Num2;
      (e.Num1) /* empty */ = e.Num1;
    }

> *Translation to English of this hunk of this paper is prepared by*
> **Jessica Jimenez Kuthko <kuthko@mail.ru>** _at 2018-01-17_

## Other types of symbols: numbers

We have already used some definitions; symbols, characters as synonyms. But it
is actually not completely true. Refal can operate not only with the
characters, but also with other types of symbols.

According to Refal symbol is an object, which cannot be spread out on small
parts using a pattern. Except characters Refal also has number symbols and
word symbols. Word symbols would be explored in the next paragraph.

_Number symbol_ or _macrodigit_ is a number in the range between 0 and 2³²−1
written in decimal form. For example, 1, 10, 65536, 4294967295 (the biggest
macrodigit).

For the comfort by work on Refal, there are some integrated arithmetic
functions:

* Add – summation,
* Sub – subtraction,
* Mul – multiplication,
* Div – division (quotient),
* Mod – remainder of division,
* Divmod – the result of the quotient and remainder,
* Compare – compares two numbers,
* Numb – converts a chain of characters into the number (decimal),
* Symb – converts the number into a chain of characters (decimal).

The reader could be interested what for the “macrodigit” is meant here. It
involves arithmetic function that implements arbitrary-precision arithmetic —
work with numbers of arbitrary length. Macrodigits are used for the
representation of such numbers.

Just as in the usual decimal notation the number 1864 means

    1864 = 1×10³ + 8×10² + 6×10 + 4

in Refal a long number like 10000000000000000000000 is represented as
`542 434162106 2990538752`, what means

    10000000000000000000000 = 542×(2³²)² + 434162106×2³² + 2990538752

moreover the radix is not 10, but 2³². To write negative numbers
literal `'-'` should be put in the beginning of the macrodogit chain, at
the beginning of a positive number can be written optional sign `'+'`.

That means that in the general case numbers are chains of terms of arbitrary
length (e-variables), only small positive numbers are represented as single
character (fit one macrodigit).

Functions `Add`, `Sub`, `Mul`, `Div`, `Mod`, `Divmod` and `Compare` receive two
numbers. If the first one is a small positive (macrodigit), then it is written
as a macrodogit too. Otherwise the first argument is written as a bracket term.
The second argument is written after the first.

Function Divmod returns quotient in brackets and remainder.

Function Compare returns the sign of the difference of the first and second
numbers `'+'`, `'0'` or `'-'`, when the first is greater, equal or less than
the second.

Function `Numb` takes a string. If the string starts with an optional sign and
decimal digits, the function returns the number represented by these numbers.
Otherwise (if the argument don’t begin with a decimal number) the function
returns `0`.

Function `Symb` the inverse or the function `Numb`, converts a number to
decimal record.

**Example 12.** Some function calls and their results nearby:

    <Add 1 2>                          3
    <Sub 1 2>                          '-' 1
    <Add 1 2 3>                        2 4
    <Add (1) 2 3>                      2 4
    <Add (2 3) 1>                      2 4
    <Add ('-' 7) 17>                   10
    <Mul (1 1) 1 1>                    1 2 1
    <Div (1 2 3) 1 1>                  1 1
    <Mod (1 2 3) 1 1                   2
    <Divmod (1 2 3) 1 1>               (1 1) 2
    <Compare 10 13>                    '-'
    <Compare (0 0 100) 0 100>          '0'
    <Compare (1 2) 1 0 0>              '-'
    <Numb '10abcdef'>                  10
    <Numb '-11113'>                    '-' 11113
    <Numb 'not a number>               0
    <Numb '10000000000000000000000'>   542 434162106 2990538752
    <Symb 123456>                      '123456'
    <Symb '-' 1 1>                     '-4294967297'
    <Symb 542 434162106 2990538752>    '10000000000000000000000'

**Example 13.** A function to compute the factorial. Recall that the factorial
of N (denoted N!, read “n factorial”) is the product of all numbers from 0 to N
inclusive. I. e. N! = 1×2×...×(N−1)×N. It is Considered that 0! = 1.

One can notice that N! = 1×2×...×(N−1)×N = (1×2×...×(N−1))×N = (N−1)!×N.
At the same, 1! = (1-1)!×1 = 0!×1 = 1×1 = 1. We can use it to write a function.

    Fact {
      0 = 1;
      s.N = <Mul (<Fact <Sub s.N 1>>) s.N>;
    }

    $ENTRY Go {
      = <Prout '1!   = ' <Symb <Fact 1>>>
        <Prout '10!  = ' <Symb <Fact 10>>>
        <Prout '100! = ' <Symb <Fact 100>>>
    }

You can notice that the first argument of the function `Mul` we wrapped in
parentheses, what we haven’t done with the first argument `Sub`. Why? Because

    13! = 6227020800 > 4294967296 = 232.

For arguments, which are bigger than 12, the factorial will no longer fit one
macrodigit. The function’s `Sub` first argument always fits macrodigit, because
it is originally set by macrodigit and at each step of recursion, it is only
decreasing. The program above [`fact.ref`](fact.ref) will print on the screen
the following (the last line is too long, for the comfort of reading it is
split into parts)


    1!   = 1
    10!  = 3628800
    100! = 9332621544394415268169923885626670049071596826438162146859↓
    29638952175999932299156089414639761565182862536979208272237582511↓
    85210916864000000000000000000000000

# Other types of symbols: words

While programing on Refal the user often has a necessity to mark different
types of objects or conditions: it is possible for a function to end
successfully or not. State machine can possibly have different conditions.
A program can manipulate different types of objects (representation of tokens
during the lexical analysis, of node of the parse tree during syntax analysis
etc.).

For example, we need to write a function, which reads the configuration file
and is called this way:

    <ReadConfig e.FileName>

This function can successfully read the configuration file or return
configuration data (we won’t review the way they are organized). The function
can find out, that the configuration file does not exist (in this case the
program would use default configuration). It can also happen, that file has
wrong format and it cannot be read – the program has to return clear error
message and end.

Consequently, the function has to return three different results, which must be
distinguished by the user. In the first case – configuration data. In the
second case – a sign, that the file does not exist. In the third case – the
message about the syntax error in the file.

These cases can be easily enumerated. In the first case the function would
return macrodigit `1` and data, in the second one – only macrodigit `2` and in
the third one – number `3` and the error message. The function results can be
distinguished, but the main disadvantage of such decision is that the numbers
don’t talk for themselves. The programmer has to remember that number `3` for
this functions indicates a syntax error, and number `2` indicates the absence
of the file, no other way. What if there are more of such kind of functions?
You will have to learn the meaning of each number in relation to each function.

It is possible to return a sequence of characters. For example, in the first
case it should return `'Success' (e.Configuration)` in the second -
`'File not found'`, in the third one – `'Syntax error' (e.ErrorMessage)`.
Text springs talk for themselves, it becomes easy to understand the program.
But this solution also has a disadvantage – strings – expressions of arbitrary
length. When the function returns different data of arbitrary length, for
example, the configuration or the error message, they must be separated by
parentheses.  Moreover, it is excess to convey dozens of characters, when for
the difference the only one is enough.

To distinguish is needed the only one. Should we cut till the first letter?
Then instead of `'Success' (e.Configuration)` we will write
`'S' e.Configuration`, instead of `'File not found'` will write `'F'` instead
of `'Syntax error (e.ErrorMessage)` write `'S' e.ErrorMessage`.  But what’s
then the difference between the first and the second case? They both begin with
the sign `'S'`, which may be followed by the expression of arbitrary length.
The shortening till the first letter did not succeed – we have to choose some
other letters. But then appears the same problem as with the numbers – single
letters hardly talk for themselves.

To solve this problem in Refal are the _symbols-words symbols-identifiers,
compound symbols)._ These are the symbols, which are compared with the usual
s-variable, but they have the text representation of the word without the
quotes. The appearance of identifier is exactly the same as the name of the
function: it consists of letters, numbers, dashes and hyphens, but it must
begin with a letter or underscore. Examples of identifiers: `Success`,
`FILE_NOT_FOUND`, `syntax-error`, `True`, `False`, `Error-404-Not-found`, `o_0`
etc.

Now it is obviously, that for our function `ReadConfig` in the returned value
you need to use identifiers. For example, `Success e.Config`, `FileNotFound`
and `SyntaxError e.Message`.

Refal-5λ as the classic REFAL-5 allows the usage of arbitrary character strings
as identifiers. This string must be enclosed in double quotes:
`"This is one symbol:-)"`. Practicaly they are rarely used, but they can be
useful, when you want to use the combination of signs as a
characteristic-identifier, which cannot be written without quotation marks. For
example, `"*="`, `"C++"`, `"=0?"` etc.  The words can be written in quotation
marks, when they could possibly be written without any and they would be
identical to the words without quotes – `"Success"`, `"SyntaxError"`.

> *Translation to English of this hunk of this paper is prepared by*
> **Ksenia Kalinina <ks-kalinina@mail.ru>** _at 2018-01-18_

### Escape sequences

...not translated yet...

## The abstract refal-machine. View field semantics

> This section has alternative translations **one**, [two](3-basics.en-alt.md).

We referred earlier to the functions in the right part of a sentence which are
calculated somehow after a substitution of variables. Now it is time to
specify, how exactly, because it is impossible to write effective programs and
to execute debugging of programs on Refal-5λ without it.

It is said that the Refal program is executed by the _abstract refal-machine_ —
the imaginary calculating machine that may understand the Refal syntax. This
machine has two areas of memory: program field, storing all the definitions of
functions of the program, and a view field, storing a current status of
computation. The status of computation is described in the form of the _active
expression_ – expression of the Refal language which contains activation
brackets, but at the same time cannot contain variables.

Refal-maсhine executes the program step-by-step. Each step is an execution of
the following sequence of actions.

1. Refal-maсhine finds in a view field the most left couple of activation
   brackets, such that doesn’t include other angle brackets in this call. This
   section of a view field is called primary active sub-expression.
2. Refal-maсhine observes what is on the right of the left activation bracket :
   there should be the function name. If it is not there (language allows to
   write such a program), then the refal-machine stops with an error
   “recognition impossible”.
3. Refal-maсhine finds function name in the program field. Function can be
   either written on Refal or built-in. If it is the built-in function – the
   refal-machine transfers control on the procedure in machine code
   implementing the logic of this function. If the function is written on
   Refal, the machine selects the first sentence of the function.
4. If it is possible to choose such values of variables in the left part of the
   current sentence that it might become the function argument, then the
   point 5 is implemented. Otherwise the following sentence is selected and
   point 4 repeats. If there are no sentences any more, then the refal-machine
   stops with an error "recognition impossible".
5. The found values of variables are added to the right part of the current
   sentence. Refal-machine inserts received expression into the view field to
   the place of the primary active subexpression.
6. If there are activation brackets in the view field, then the refal-machine
   executes the following step – returns to the point 1. Otherwise the
   refal-machine correctly comes to the end.

Initial contents of a view field is the `GO` function call with an empty
argument:

    <GO>

if there is defined `GO` function, or `Go` call in the program:

    <GO>

if the `Go` function is defined. If there is neither that, nor other function,
then the program won’t be started.

Notes.

1. _Classical REFAL-5 doesn’t support empty functions, any function has to have
   at least one sentence. Refal-5λ supports – the call of such function leads
   to an error "recognition impossible"._
2. _The current implementation at the time of the program creation can’t check
   that the `GO` or `Go` function is absent in the program. In this case there
   will be created the program which at start will display the error message
   and then will come to the end. Perhaps, it will be corrected in the
   following versions._

It is possible to make two important conclusions from this algorithm.

Firstly, the primary active subexpression chooses the most left couple of
activation brackets which isn’t containing in itself other activation brackets.
It follows that Refal – is _applicative language,_ and an order of function
computations is accurately defined: from left to right. I.e. if there are
several calls of functions in the right part of the sentence, then they will be
calculated from left to right, from the most internal to the most external.
Therefore we can use functions with side effect, (for example, `Prout`) knowing
when this side effect is carried out.

Secondly, it immediately follows from semantics of a view field that Refal
implements so-called _optimization of a tail recursion._

In many imperative programming languages the recursion is quite expensive —
overhead costs on preservation of a context of calculations are needed – points
where process of execution has to return after the completion of a tail call.
And the memory for this preservation is given out from limited area – a system
stack. The programmer, as a rule, can’t control the size of a system stack,
and at its overflow the program abnormally comes to the end. Therefore in such
languages you are not to use a recursion for the implementation of the cyclic
repeating actions (particularly as in imperative languages for this purpose
there are iteration statements).

In Refal functions don’t need to keep a context of calculations for return of a
value as the function doing a recursive call comes to the end before the next
recursive call. And it means that if the recursive call in the right part of
the sentence is executed the last, incomplete calculations won’t collect in the
view field. I.e. In fact there won’t be observed the recursion (the enclosed
contexts), but a cycle will be observed.

**Example 13.** We will illustrate it with the simplest example – we will
consider the process of function evaluation of  Fab replacing all characters
`'a'` with characters `'b'` ([`fab-1.ref`](fab-1.ref) program):

    $ENTRY Go {
      = <Prout <Fab 'abracadabra'>>;
    }

    Fab {
      'a' e.Rest = 'b' <Fab e.Rest>;
      s.Other e.Rest = s.Other <Fab e.Rest>;
      /* empty */ = /* empty */;
    }

The `Go` function call will be initial content of a view field:

    <Go>

Refal-machine on the first step will find this call (it will be the primary
active subexpression), will see the name `Go` after `<` and will find the `Go`
function in a program field. The function is called with an empty argument, the
first sentence has empty left part. There are no variables on the left and
right parts, therefore refal-machine just replace call `<Go>` with the right
part of a sentence:

    <Prout <Fab 'abracadabra'>>
           ^^^^^^^^^^^^^^^^^^^

The `Fab` function call as it doesn’t contain the enclosed activation brackets
will be the primary active subexpression here (the call  `Prout` contains in
itself activation brackets of a `Fab` call).

Refal-machine will see Fab after `<` and will try to match the argument
`'abracadabra'` with the left part of the first sentence  `'a' e.Rest`. The
recognition is possible: if instead `e.Rest` substitute `'bracadabra'`, then
the left part turns into an argument. Refal-machine applies specified
substitution (`e.rest →'bracadabra'`) to the right part of the sentence – then
we get  such expression  `'b' <fab 'bracadabra'>` and it replaces a function
call for this expression:

    <Prout 'b' <Fab 'bracadabra'>>
               ^^^^^^^^^^^^^^^^^^

On the third step `Fab` function call will be primary active subexpression
again. But the left part of the first sentence cannot be matched with an
argument: the pattern begins with `'a'`, but an argument – with `'b'`. The
second sentence is chosen. The recognition is possible: there is a substitution
of the `s.Other → 'b', e.Rest → 'racadabra'`. Substitution is applied to the
right part, the result of the substitution (`'b' <fab 'racadabra'>`) is added
in the view field instead of primary active subexpression:

    <Prout 'bb' <Fab 'racadabra'>>
                ^^^^^^^^^^^^^^^^^

Several following steps are executed  in the same way:

    <Prout 'bbr' <Fab 'acadabra'>>
                 ^^^^^^^^^^^^^^^^
    <Prout 'bbrb' <Fab 'cadabra'>>
                  ^^^^^^^^^^^^^^^
    <Prout 'bbrbc' <Fab 'adabra'>>
                   ^^^^^^^^^^^^^^
    <Prout 'bbrbcb' <Fab 'dabra'>>
                    ^^^^^^^^^^^^^
    <Prout 'bbrbcbd' <Fab 'abra'>>
                     ^^^^^^^^^^^^
    <Prout 'bbrbcbdb' <Fab 'bra'>>
                      ^^^^^^^^^^^
    <Prout 'bbrbcbdbb' <Fab 'ra'>>
                       ^^^^^^^^^^
    <Prout 'bbrbcbdbbr' <Fab 'a'>>
                        ^^^^^^^^^

At this stage the refal-machine will execute the first sentence of the `Fab`
function, substitution will be interesting because `e.Rest` will receive a
value of empty expression.

    <Prout 'bbrbcbdbbrb' <Fab>>
                         ^^^^^

The refal-machine will perform the `Fab` function, but the first sentence
doesn’t match  (it is impossible to match the expression which begins on `'a'`,
with empty expression), the second – too (it is impossible to match the
expression which begins of a symbol with an empty expression). And here the
third will match – an empty left part is well matched with an empty argument.
And the refal-machine will replace a call of the `<Fab>` function with an empty
right part of the third sentence:

    <Prout 'bbrbcbdbbrb'>
    ^^^^^^^^^^^^^^^^^^^^^

Now the `Prout` function call will be the primary active subexpression.
Refal-machine will notice that it is the built-in function and will call the
appropriate computer operation for calculation of its result. The computer
operation will print on the screen `'bbrbcbdbbrb'` and will return an empty
expression. `Prout` call under the view field will be replaced with an empty
expression.

The view field will become empty – the refal-machine will correctly stop.

### Tail and not tail recursion

During the _tail recursion,_ as it is told above, the recursive call in the
right part is executed the last. We will show visually why it is so. We will
consider the `Rec1` function which executes a `F` function call in the right
part and itself:

    Rec1 {
      continuation = <F ...> <Rec1 ...>;
      ending= rec1-res;
    }

Development of a view field will look approximately so:

    <Rec1 ...>
    ^^^^^^^^^%
    <F ...> <Rec1 ...>
    ^^^^^^^
    f-res <Rec1 ...>
          ^^^^^^^^^^
    f-res <F ...> <Rec1 ...>
          ^^^^^^^
    f-res f-res <Rec1 ...>
                ^^^^^^^^^^
    . . . . .
    f-res f-res .... f-res rec1-res

One might see that not calculated calls of functions don’t collect anywhere. On
each step before a call of Rec1, there is the ‘F’ call which comes to the end
before `Rec1` call.

We will consider the `Rec2` function which slightly differs from the `Rec1`
function:

    Rec2 {
      continuation = <Rec2 ...> <F ...>;
      ending = rec2-res
    }

Here on the contrary – at first `Rec2`, then `F` is called. And the view field
will develop absolutely differently:

    <Rec2 ...>
    ^^^^^^^^^^
    <Rec2 ...> <F ...>
    ^^^^^^^^^^
    <Rec2 ...> <F ...> <F ...>
    . . . . . .
    <Rec2 ...> <F ...> <F ...> ... <F ...>
    ^^^^^^^^^^
    rec2-res <F ...> <F ...> ... <F ...>
             ^^^^^^^
    rec2-res f-res <F ...> ... <F ...>
                   ^^^^^^^
    . . . . . .
    rec2-res f-res ... f-res <F ...>
                             ^^^^^^^
    rec2-res f-res ... f-res f-res

Here already the uncalculated `F` calls are collecting, and they are collecting
until the `Rec2` function doesn’t stop to call itself recursively.

Similarly it turns out with the enclosed calls of functions. A recursion in
`Rec3` function is tail:

    Rec3 {
      continuation = <Rec3 ... <F ...> ...>;
      ending = rec3-res;
    }

    <Rec3 ...>
    ^^^^^^^^^^
    <Rec3 ... <F ...> ...>
              ^^^^^^^
    <Rec3 ... f-res ...>
    ^^^^^^^^^^^^^^^^^^^^
    <Rec3 ... <F ...> ...>
              ^^^^^^^
    . . . . .
    <Rec3 ... f-res ...>
    ^^^^^^^^^^^^^^^^^^^^
    rec3-res

Recursion in `Rec4` function is not tail:

    Rec4 {
      continuation = <F ... <Rec4 ...> ...>;
      ending = rec4-res;
    }

    <Rec4 ...>
    ^^^^^^^^^^
    <F ... <Rec4 ...> ...>
           ^^^^^^^^^^
    <F ... <F ... <Rec4 ...> ...> ...>
                  ^^^^^^^^^^
    . . . . . .
    <F ... <F ... ... <F ... rec4-res ...> ... ...> ...>
                      ^^^^^^^^^^^^^^^^^^^^
    . . . . . .
    <F ... <F ... f-res ...> ...>
           ^^^^^^^^^^^^^^^^^
    <F ... f-res ...>
    ^^^^^^^^^^^^^^^^^
    f-res

What is written above shouldn’t be taken to mean that a tail recursion –  is
always good, and not tail – is always bad. It is important to understand that
in the first case process cyclic, the view field on each iteration comes back
to a similar state, and in the second case it expands.

We will consider the tail recursion as the _cycles_ in the future. There are no
classical imperative cycles in Refal-5λ therefore such terminology shouldn’t
cause any confusion. It is just more convenient to speak in such cases about
_cyclic processes_ and to use the term _iteration,_ etc.

> *Translation to English of this hunk of this paper is prepared by*
> **Maria Ivanova <ya.ivanovamaria96@yandex.ru>** _at 2018-01-17_
