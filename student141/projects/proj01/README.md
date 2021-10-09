# CPTR 141: Project #1

## Problem Overview
Writing a computer program is more about solving a problem than about
memorizing commands for a specific language.  In this project, you
will demonstrate your ability to solve a problem by breaking it down
into smaller steps and writing instructions on how to complete those
smaller steps.  You will not, however, actually write any code on the
computer.

Suppose you are given two containers: One that can hold 4 ounces of
water and one that can hold 9 ounces.  The containers are opaque and oddly
shaped, so you can't tell by sight or feel how much is in the
container.  You have an unlimited supply of water that you can use to
fill the containers, but you can only accurately tell if the containers 
are empty or full.  Your goal is to measure out exactly 7 ounces of
water by filling containers, dumping the contents of one into another
(you can stop when it is full), or pouring all the contents of of one
container down the drain.

Your task is to describe a solution as a sequence of discrete steps
and to record the amount of water that will be in each container at
the conclusion of each step.  An example might look like this:

| Instruction | Quantity in A (max 4) | Quantity in B (max 9) |
|-------------|:---------------------:|:---------------------:|
| START | 0 | 0 |
| Fill A | 4 | 0 |
| A -> B | 0 | 4 |
| Empty B | 0 | 0 |

This would describe the following steps:

1. Fill up the 4 ounce container.
2. Pour the contents of the 4 ounce container into the 7 ounce container.
3. Empty the 9 ounce container.


## Solution Specification
Your solution to this problem outlined above must meet the following
criteria.  The exact steps you use complete this are up to you.  Be
creative!

1. You must describe a sequence of operations that will result in
measuring a total of exactly 7 ounces of water.
2. Your description must be easy to follow and only use the allowed
steps:
    * filling either container until it is completely full.
    * dumping the entire contents of a container down the drain.
    * dumping the contents of one container into the other until either:
        * the first container is completely empty, or
        * the second container is completely full.
3. Those wishing to earn an E must additionally describe a general
process for obtaining 7 ounces of water given any two containers for
which:
    1. The combined volume of the two containers is at least 7 ounces, and
    2. The individual volumes of the two containers have no common
factors (i.e. 5 and 8 would work, but 6 and 8 would not).  This is
also called being relatively prime or mutually prime.
4. You may use the internet as a source for your ideas, but:
    * You must cite any source you use to help you solve the problem.
    * You must write the sequence of instructions yourself, not copy
it from a source.
    * You may not ask a fellow student for the solution to the problem
(although you may discuss general strategies).


## Grading

Your project will be assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable)
as follows:

- E -- solves both the specific problem (a.k.a 7 from 4 and 9) and the
general problem (a.k.a 7 from m and n) by providing clear, efficient,
and accurate instructions that are consistent with those given above.
- M -- solves the specific problem only, but does so using clear,
efficient, and accurate instructions consistent with those above *OR*
solves both problems, but does not use clear and efficient
instructions (although the instructions are still accurate and
consistent).
- R -- fails to solve either problem using clear, efficient, and
accurate instructions that are consistent with those given above.
- N -- no substantive instructions are submitted by the due date.