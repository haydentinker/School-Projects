# CPTR 141: Homework Assignment #13

## Problem Overview

One of the many ways that technology has helped make peoples lives
easier is in making change.  It used to be that store clerks had to
know how to make correct change in their heads.  Now, however, we have
computers to do all of our ~thinking~ math for us!

In this homework assignment, you will develop a function that is
called with three arguments:

* the amount of change that needs to be returned,
* the value of the coins we are trying to return (i.e. 25 for
quarters, 5 for nickels, etc)
* the variable for the number of coins that will be returned.

Your function must use pass-by-reference in order to update the amount
of change that still needs to be returned and the number of coins of
the given value that are to be returned.  The function itself must
return a Boolean: true if we returned any coins of the given value and
false if we did not.
	
## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must correctly implement (that is, match the post-conditions
of) the one function described above.

2. That function must have the following signature, and must return a
`bool`.

```cpp
makeChange(int&, int, int&)
```

3. The function must be the only thing defined in the provided
`makeChange.cpp` file.  To test the function, you will need to make
your own header and driver files.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable)
as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted