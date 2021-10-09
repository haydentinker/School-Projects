# CPTR 141: Homework Assignment #12

## Problem Overview

You wish to keep track of your progress on quizzes in Fundamentals of Programming I.  Obviously, the best way to do that is to write a program.  You decide to start your program by writing a set of three functions.  To save time, each of these functions will access a global vector that stores your quiz "scores" (E, M, R, or N).  These function prototypes and the global vector are  declared for you in the file ``gradeBookFunctions.h``.

```c++
/*=====================================================================
 * FUNCTION: getScore(string message)
 *   Prompts for a new quiz score using the string "message" and 
 *   validates it before storing it in the global "quizScores" vector.    
 *   Also makes sure that we have no more than NUM_QUIZZES quiz scores.
 *    - Precondition: none
 *    - Postcondition: returns false if the score vector is full (already   
 *      at NUM_QUIZZES) or an invalid grade is entered, otherwise an E, 
 *      M, R, or N is pushed onto "quizScores" and true is returned
 */
 bool getScore(string message);
```

```c++
/*=====================================================================
 * FUNCTION: calcGrade()
 *   Calculates and returns the letter grade ('A', 'B', 'C', 'D', or
 *   'F') from the global vector of homework scores as defined by the
 *   global constants: MIN_PASS_FOR_A, MIN_PASS_FOR_B, MIN_PASS_FOR_C,
 *   MIN_PASS_FOR_D, MIN_E_FOR_A, and MIN_E_FOR_B.
 *     - Precondition: the global "quizScores" vector must have at least 
 *       one entry
 *     - Post condition: the correct grade letter is returned
 */
char calcGrade();
```

```c++
/*=====================================================================
 * FUNCTION: changeScore(int index, char newScore)
 *   Updates quizScores at the given index to a newScore if the newScore
 *   is valid (E, M, R, or N) and better than the current score.
 *     - Precondition: the global "quizScores" vector must have an entry at
 *       the given index
 *     - Postcondition: if newScore is valid and higher, the entry in the
 *       global "quizScores" will be updated and true returned, otherwise
 *       false is returned
 */
 bool changeScore(int index, char newScore);
```

You must implementation these functions in the ``gradeBookFunctions.cpp`` file.  You will also want to create a new ``.cpp`` file with a ``main()`` driver program so that you can test your functions.  This file will be ignored by Submitty.


## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must correctly implement (that is, match the post-conditions of) the three functions listed above.
2. You must declare and initialize the following global variables and constants in your `gradeBookFunctions.cpp` file, but you may not declare any additional global variables. 
   * global variable `vector<char> quizScores` -- scores the vector of homework scores
   * global constants:
     * `NUM_QUIZZES` -- the maximum number of quizzes allowed (set to 8)
     * `MIN_PASS_FOR_A` -- the minimum number of passing grades (E or M)  to earn an A (set to 8)
     * `MIN_E_FOR_A` -- the minimum number of E grades needed for an A (set to 4)
     * `MIN_PASS_FOR_B` -- the minimum number of passing grades needed to earn a B (set to 7)
     * `MIN_E_FOR_B` -- the minimum number of E grades needed for a B (set to 2)
     * `MIN_PASS_FOR_C` -- the minimum number of passing grades for a C (set to 5)
     * `MIN_PASS_FOR_D` -- the minimum number of passing grades for a D (set to 4)

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

