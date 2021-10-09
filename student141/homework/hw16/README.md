# CPTR 141: Homework Assignment #16

## Problem Overview

A [Lo Shu Magic Square](https://en.wikipedia.org/wiki/Lo_Shu_Square) is a three-by-three grid in which the numbers from 1 to 9 have been arranged in such a way that the sum along each row, column, and diagonal is the same. Consider the following square:

<style>
  .loshu td {
    background: white;
   }
</style>
<table style="margin: auto;width: 200px;" class="loshu">
  <tr>
    <td style="width: 50px;text-align: center;">4</td>
    <td style="width: 50px;text-align: center;">9</td>
    <td style="width: 50px;text-align: center;">2</td>
  </tr><tr>
    <td style="width: 50px;text-align: center;">3</td>
    <td style="width: 50px;text-align: center;">5</td>
    <td style="width: 50px;text-align: center;">7</td>
  </tr><tr>
    <td style="width: 50px;text-align: center;">8</td>
    <td style="width: 50px;text-align: center;">1</td>
    <td style="width: 50px;text-align: center;">6</td>
  </tr>
</table>

In this example, you can see that:

  * Row 1 has the sum 4 + 9 + 2 = 15
  * Row 2 has the sum 3 + 5 + 7 = 15
  * Row 3 has the sum 8 + 1 + 6 = 15
  * Column 1 has the sum 4 + 3 + 8 = 15
  * Column 2 has the sum 9 + 5 + 1 = 15
  * Column 3 has the sum 2 + 7 + 6 = 15
  * The bottom-left to top-right diagonal has the sum 8 + 5 + 2 = 15
  * The top-left to bottom-right diagonal has the sum 4 + 5 + 6 = 15

Since all of these sum to the same number, this is an example of a Lo
Shu Magic Square.  Your task in this assignment is to write a boolearn
function that will accept a 3 x 3 array of integer values and return
true if it is a Lo Shu Magic Square.  The prototype for your function
(included in `magicSquare.h`) is:

```cpp
const int SIZE = 3;
bool isLoShu(int square[][SIZE], int theSize = SIZE);
```

You should implement this function in the file  ``magicSquare.cpp`` , which
is the only file you need to turn in.  Your solution to this problem must
meet the following criteria.  You should also write (but not turn in) a 
driver program with a ``main()`` function to test your sort algorithm.

## Solution Specification

1. Your ``isLoShu()`` function must correctly identify if a 3 x 3 array 
holds a Lo Shu magic square or not, checking that:

    * It contains all of the numbers from 1-9 exactly once
    * the sums of the rows, columns, and diagonals are all the same.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation),
M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no
compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on
some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
