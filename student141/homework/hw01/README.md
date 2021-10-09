# CPTR 141: Homework Assignment #1

## Problem Overview

Your task in this homework assignment is to write a program to construct a mad-libs-like version of the chorus to the song *[A Whole New World](https://www.youtube.com/watch?v=eitDnP0_83k)*. Your program should perform the following tasks:

1. Ask the user for words as shown below.  Do not worry (for this assignment) about checking the user input.  
    * an adjective
    * a noun
    * another adjective
    * a question (who, what, where, why, etc.)
    * a verb
    * a verb ending in 'ing'
    * another adjective
    * a preposition (up, down, over, under, beside, etc.)

2. Your program should then print out the lyrics to the song with the words provided by the user filled in as appropriate.  


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `cout` to display output and `cin` to collect four words from the user, as outlined above.
2. You must use a different appropriately-named variable of type `string` to store each of the four words entered by the user.
3. You must format your code using Ctrl+Shift+I or the "Format Document" command in your development environment.
4. You **must** produce output exactly as shown below assuming the given words were entered by the user.

```
Enter an adjective: ADJECTIVE1
Enter a noun: NOUN
Enter another adjective: ADJECTIVE2
Enter a command: COMMAND
Enter a question world: QUESTION
Enter a verb: VERB
Enter a verb ending in 'ing': VERBING
Enter another adjective: ADJECTIVE3
Enter a preposition: PREPOSITION

A whole ADJECTIVE1 NOUN
A new ADJECTIVE2 point of view
No one to tell us "COMMAND"
Or QUESTION to VERB
Or say we're only VERBING

A whole ADJECTIVE1 NOUN
A ADJECTIVE3 place I never knew
But now from way PREPOSITION here
It's crystal clear
that now I'm in a whole ADJECTIVE1 NOUN with you.
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted