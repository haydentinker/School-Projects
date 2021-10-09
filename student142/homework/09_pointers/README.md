# CPTR 142: Homework Assignment #9

## Problem Overview

Your task in this homework assignment is to implement a zoo class.
The Zoo class must use a pointers to keep track of all the animals.
The class member functions allow a user to add creatures, print the
census, and get the total number of legs in the zoo.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Write the Zoo functions for __adding a creature__, __printing the census__, __addition__, and __counting the number of legs__.
2. The functions should be written as part of the zoo class.
3. The creature list should be stored as vector of creature pointers.

Sample output form the test driver.

```text
Zoo Census:
 - Bumble (Bee)
 - Grumpy (Cat)
 - Ugly (Duck)
 - Turbo (Snail)
Total Legs: 12
```

Since the project is using multiple files, you will need compile and run your code using the following terminal commands.

```sh
g++ main.cpp Zoo.cpp && ./a.out
```

### Push to GitLab

When you are satisfied that your code works, use the `push.sh` script to save it to GitLab.
To verify that step you can open [GitLab](https://gitlab.cs.wallawalla.edu/) in a web browser to verify that the code transferred from Code.CS.
While you should write a test program to verify your code, your submitted code should not include `main()`.

### Submitty

You **must** produce output matching the output expected by Submitty.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

* E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
* M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
* R -- fails at least one Submitty test (red bars)
* N -- no substantive changes made to template, or nothing submitted
