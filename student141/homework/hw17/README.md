# CPTR 141: Homework Assignment #17

## Problem Overview

In this homework assignment you will write a program to read a list
of values from a file whose name is given by the user, with one value
stored on each line.  For each value your program reads from the file,
it should do one of three things, depending on what it finds:

1. If it finds a prime number, it should save it on its own line in
the file `primes.txt`.

2. If it finds a number that is not prime, it should just ignore it
and go on to the next value in the input file.

3. If it finds something that is not a number, it should print out an
error message and then go on to the next value in the file.

Once your program is done, it should print a message indicating that
it has finished processing the input file and exit.
 

## Solution Specification

The following key features need to be included in your solution.

1. Your program should open and process the file given by the user,
correctly identifying any error in opening the file.

2. Your program should perform error checking as you read from the
file to make sure that you identify any non-numeric input.

3. All error messages should be sent to the `cerr` output stream
(instead of the `cout` stream).

4. You must format your code using the "Format
Document" command in your development environment.

5.  Finally, your output **must** match the output of the included
sample program, solution.o. Run this program several times using 
different options to make sure you understand what that output
should look like.  To  run the program, you can enter a full
path to the executable in a bash shell:

```bash
./homework/hw17/solution.o
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
