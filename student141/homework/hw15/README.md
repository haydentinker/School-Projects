# CPTR 141: Homework Assignment #15

## Problem Overview

In this assignment you will write and test four functions dealing with arrays. The prototypes for these functions, along with their pre- and post-conditions, can be found in the provided header file ``arrayfun.h``.  The functions are:

* The ``squre(int[],int)`` function, which squares each element of an integer array of values.
* The ``divideBy(int[],int,int)`` function, which divides each element of an array by a given value.
* The ``accumulate(int[],int)`` function, which sets the value of ``a[i]`` to be the sum of the values ``a[0]+a[1]+...+a[i]`` in an input array ``a[]``.
* The ``reverse(int[],int)`` function, which reverses the order of the input array. 

You will turn in only the file `arrayManipulate.cpp`, which contains your implementation of these four functions. You should also write (but not turn in) a ``main()`` driver program to test your functions.

## Solution Specification

Your solution should strive to meet the standards specified below as they form the basis on which it will be graded.

1. You must correctly implement the four functions mentioned above.

2. You must begin your functions with assertions (remember the `cassert` library) to check the preconditions included with the function prototypes.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
