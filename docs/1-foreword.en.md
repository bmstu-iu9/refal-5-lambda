# Preface

REFAL – Recursive Functional Algorithmic Language \[1], is a functional 
programming language, focused on symbolic calculations, processing and 
transformation of texts. This language has many dialects, for instance – 
- Refal-5λ.

Note. _There is no established way of writing the name of the REFAL language,
there is a record both in Cyrillic and in Latin, entirely in the uppercase, 
with a capital letter or with a small one. In this document, when it comes to
the family of languages, I will use the record in the uppercase (REFAL). 
However, when it comes to a specific dialect, I will use the record, which 
corresponds with the manual of a specific language. If the word “refal”;
is used as an adjective, it will be written with a small letter, e.g._
refal-expression, refal-program.

_This implementation provides two similar dialects:_ Refal-5λ _and_ Simple 
Refal. _When referring to them, it is highly recommended to use the following 
record: Each word should start with a capital letter; the letter 
“lambda” should be Greek. In English, these names are usually recorded
as_ Refal-5λ, Simple Refal. _If the typographical capabilities do not allow
the use of the “λ” symbol, it is recommended to use the_ Рефал-5-лямбда,
_or_ Refal-5-lambda.
 
_Hereinafter, the suffix “λ-5” will often be omitted. Instead of “Refal-5λ”,
it will be indicated by “Refal”_

Initially, Simple Refal language was a research project and was developed by 
Alexander Konovalov aka Mazdaywik \[pronounced as Mazdaischik]. The author
wanted to understand how the REFAL code is compiled in the imperative code. The
goal was to write a minimal but algorithmically complete compiler dialect of
Basic REFAL. The simplicity of the translation program (e.g. single pass) was
more important than the convenience of programming in the language. Despite
this limitation (or, perhaps, due to it) the language turned out to be quite
coherent and consistent.

The compiler was simple enough, so it has been used as a testing ground for 
several course papers and final qualification papers of the bachelor at Bauman
Moscow State Technical University in the IU9 “Computer science and technologies”
department.

The abilities investigated through the compiler are the following:

* interpreted code generation (course paper by Vadim Sukharev, spring 2009; 
  course paper by Igor Drogunov, autumn 2015),
* compilation to C# (course paper by Natalia Konnova (Bykadorova), spring 2010
  – not in the main branch, tag 005),
* representation of object expressions by means of “rope” (course paper by
  Konstantin Beliov, autumn 2014 – the work hasn’t been completed yet, not
  stated in the repository),
* optimization of the conjoint pattern match (course paper by Pavel Batusov,
  autumn of 2014; qualification paper by Ivan Skrypnikov, spring 2016; course
  paper by Pavel Saveliev, autumn 2016),
* Optimization of the construction of the resulting expressions (course paper
  by Dorofeev Michael, spring 2010 – not in the main branch, tag 006;
  qualification paper by Eugeny Kopyov, Spring 2016),
* built-in step-by-step debugger (course paper by Daria Sukhomlinova, autumn
  2016),
* the syntax of assignments (course paper by Damir Gabbasov, autumn 2016).

During its development, the compiler departed slightly from its original 
simplicity. First of all, it was used as a back-end for Module Refal, so there
were added the following features: identifiers, abstract data types and static
boxes. Then we used the compiler for implementation of nested functions 
research. As a result, the language gained a new convenient tool.

Gradually, the author (Mazdaywik) realized that it was very inconvenient to 
program in the language because of the predeclarations necessity. Moreover, 
there was no use in a separate incompatible dialect. Considering that the 
language was very close to the classical REFAL-5 dialect, it was decided to 
convert it into a REFAL-5 dialect compiler, which would have the main features 
of the Simple Refal (higher-order functions and nested functions). This dialect
was called Refal-5λ.

# References
1. A. P. Nemytykh. Lectures on Refal programming language.
   Collected papers of functional programming language Refal, vol I
   // edited by A. P. Nemytykh. — Pereslavl-Zalessky:
   Publisher «Sbornik», 2014, 194 p. — ISBN 978-5-9905410-1-6 — page 120.
   Available in Internet: <http://refal.botik.ru/library/refal2014_issue-I.pdf>
   (in Russian)

> _Translation to English of this paper is prepared by_
> **Philip Cadena <filcadena@gmail.com>** _at 2018-01-18_

> _Markdown is prepared by_ **Liudmila Markova <luckymarkin@gmail.com>**
>  _at 2018-01-18_
