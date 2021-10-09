# CPTR 141: Homework Assignment #4

## Problem Overview

In this assignment, you will write a program that prompts the user
for five integers, and then randomly picks one of those five.  Your
program will use the pseudo-random number generator with a given
random seed to pick which number to display, and it will use an
if-else statement to display the correct number.
  

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must prompt the user for a random number seed and then use the
`srand()` function to seed the random number generator with that value.

2. You must then prompt the user to enter five integers one at a time
and store those in five variables.

3. Finally, the program must randomly pick one of the five variables
and alert the user to its choice.

4. The program **must** produce output exactly as shown below, assuming
that the given amounts are entered.

```
Enter Random Seed: 1

Enter First Number: 10
Enter Second Number: 15
Enter Third Number: 20
Enter Fourth Number: 25
Enter Fifth Number: 30

I choose 25
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted