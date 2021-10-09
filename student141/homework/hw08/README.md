# CPTR 141: Homework Assignment #8

## Problem Overview

In this homework assignment, you will read in a series of grades,
store them in a vector, and then compute and report their average.  
The catch is that you don't know ahead of time how many grades will be
entered.

Your program should follow these steps:

1. Display a welcome message at the beginning of the program.

2. Prompt the user to enter grades between 0 and 100 until they are
done, which they indicate by entering a negative number.

3. Print the average of the grades that were entered.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Your program must give instructions to the user and then prompt for
and save grades to an array.
2. If a user enters a number bigger than 100, the program should
produce an error message and not save the grade.
3. When the user enteres a negative number, the program should compute
and display the average of the saved grades (not including the negative number).
3. Your code must be formatted correctly (use the "Format Document" command to do this).
4. Finally, your output **must** match the output of the included program, ``solution.o``.  Run this program several times using different options to make sure you understand what that output should look like.
    To run the program, you can enter a full path to the executable in a bash shell:

`./student141/homework/hw08/solution.o`

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted