> This is translation of paper [README.txt](README.txt) from Russian.

**Objective:** to study equivalent transformations of programs, having learned

Convert the programs on a full Refal-5 into a subset of the Basis Refal
Refal-5. Here, by the subset of the Refal-5 Reference Refal, we mean language
Refal-5, from which only two constructions are excluded: conditions and blocks.

Formally, a subset of the Basis Refal (as defined in the textbook to language)
also should not include a stack and a metafunctions, but here the task
emulation of these means by means of the Basic Refal is not put.

**Results:**

1. I managed to write such a converter, but in two attempts.

   The first attempt was in 2015 and it failed for several reasons.

   Firstly, there was no separation at the levels of abstraction – in the
   bypass I simultaneously tried to convert both the conditions and the blocks.
   This greatly complicated the code.

   Secondly, at the same time I avoid losses and duplication repeated
   variables. Which, too, obviously brought in accidental complexity.

   And, most importantly, thirdly, I did not have a solid idea, in which
   transformation of the condition (an attempt to do it in parts, realizing the
   conditions without open electronic variables, with one variable, with
   severalвЂ¦, but without understanding of the general picture).

   The second attempt (this year) took into account the lessons of the past.

   The transformation was divided into two passes: eliminating blocks and
   eliminating conditions. Blocks can be converted to other functions from the
   conditions, and then you can forget about the blocks.

   It was decided not to follow the duplication of variables. At first, for the
   sake of simplification of logic (after all, the essence of the problem is
   the expression of these control structures more primitive means of
   language), and secondly, in practice, in my experience, duplicates of large
   variables are extremely rare, and third, the need for ADVERTISING-5.

   And finally, before writing the documents, a clear and clear idea was
   formulated about the form of the code – an elaborate example with three open
   e-variables, the generated constructions are considered and generalized,
   highlighted rules for rewriting. The file [The approach to converting
   conditions.md][1] in the current folder describes the whole course of my
   reasoning.

2. The by-product of the converter writing was front-end Refal-5 and reverse
   original text. Here between them the converter is located, but if it is
   removed, it turns out a utility for checking on syntax errors (including
   semantic) and automatic formatting.

> _Translation to English of this paper and Markdown is prepared by_
> **Liudmila Markova <luckymarkin@gmail.com>** _at 2018-01-18_

[1]: Approach%20to%20conditions%20transformation.en.md
