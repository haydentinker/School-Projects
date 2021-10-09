# CPTR 141: Homework Assignment #11

## Problem Overview

In this assignment you will write and test three functions in a separate implementation file.  The prototypes for these functions, along with their pre- and post-conditions, can be found in the provided header file ``functions.h``.  The functions are:

* A boolean-returning function ``divisible(int,int)`` which returns true if the first paramter is divisible by the second.
* An integer-returning function ``gcd(int,int)`` which returns the greatest common divisor of the two parameters.
* An integer-returning function ``gcd(int,int,int)`` which returns the greatest common divisor of the three parameters.
    
You will turn in only the file ``numberTheory.cpp``, which contains your implementation of these three functions. You should also write (but not turn in) a ``main()`` driver program to test your functions.

## Solution Specification

our solution to this problem must meet the following criteria.

1. You must correctly implement (that is, match the post-conditions of) the three functions listed above.

2. Each of your functions must start with an ``assert`` to ensure that the preconditions are met.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
