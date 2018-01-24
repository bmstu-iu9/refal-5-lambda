> This is translation of historical paper [note003.txt](note003.txt)
> from Russian.

This research was carried out not by me, but by a student of the 5th year of
the faculty of IU9 Sukharev Vadim, for which I express to him a huge gratitude.

The study was devoted to optimization of the sizes of executable files and
their speed. Goals, conclusions and the results obtained are considered in the
[course paper (in Russian)][1].

The initial version of the compiler and runtime was the version of the Simple
Refal, for use as a back-end of the Modular Refal, namely, full of support for
abstract data types, identifiers and static boxes (details about these changes
can be found in the project log of Module Refal). The compiler itself is written
on a subset of the Simple Refal without these extensions. As the verification
showed, some of the extensions in the modified version (with the `INTERPRET`
macro turned on) turned out to be ineffective: Module Refal compiled with
these extensions fell with a memory error, while he compiled himself and at the
same time worked successfully. Error while and not found and not fixed.

> _Translation to English of this hunk of historical paper and Markdown
> is prepared by_  **Liudmila Markova <luckymarkin@gmail.com>** _at 2018-01-18_

[1]: РПЗ.doc
