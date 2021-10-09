# CPTR 141: Homework Assignment #7

## Problem Overview

Prime numbers are numbers that have two distinct factors -- 1 and themselves.  While it may seem that the topic of prime only belongs in a math class, they are actually extremely useful in computing.  In fact, most modern computer cryptography works by using the prime factors of large numbers.  So understanding how to find and work with prime numbers can be an important part of developing software.  In this assignment you will write a program that identifies all prime numbers from 2 up to a user defined maximum value.  

Your program should follow these steps:

1. Display a welcome message at the beginning of the program.

2. Display a prompt to collect the limit for prime searches set by the user.

3. Print the prime numbers starting with 2 and going up to the user-specified maximum.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Your program must give an opening welcome statement and then ask for and save a maximum.  You should verify that the maximum number entered is in fact 3 or greater (a loop may be useful here).
2. To display the prime numbers, you must make use of nested looping statements.  For example, an `for` statement that runs from 2 up to the user-supplied maximum and another nested `for` statement that checks to see if the outer counter number is divisible by anything other than 2 and itself.
3. Your code must be formatted correctly (use the "Format Document" command to do this).
4. Finally, your output **must** match the output of the included program, ``solution.o``.  Run this program several times using different options to make sure you understand what that output should look like. 
    To run the program, you can enter a full path to the executable in a bash shell:

`./student141/homework/hw07/solution.o`

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted