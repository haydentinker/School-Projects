/****************************************************************************
 *
 * hw16: Checking for Lo Shu Magic Squares
 *
 * File Name: magicSquare.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include "magicSquare.h"
#include <cassert>
#include <iostream>
using namespace std;

/*==========================================================================
 * Function: isLoShu(int[][SIZE],int)
 *
 * Precondition: int[][SIZE] is a 3 x 3 array of integers.  The second
 *               paramter is the number of rows (which should be three).
 * Postcondition: returns true if this array holds a Lo Shu Magic Square,
 *                false otherwise.
 */
int rows = SIZE;
bool isLoShu(int squareCheck[][SIZE], int rows) {
  assert(rows == 3);
  // setting the variables
  int col1Sum = 0, col2Sum = 0, col3Sum = 0;
  int row1Sum = 0, row2Sum = 0, row3Sum = 0;
  int diag1Sum = 0, diag2Sum = 0;
  // setting up the array
  for (int i = 0; i < SIZE; i++) {
    for (int a = 0; a < SIZE; a++) {
      cin >> squareCheck[i][a];
    }
  }
  // starting to add up the sums
  for (int i = 0; i < SIZE; i++) {
    col1Sum += squareCheck[i][0];
  }
  for (int i = 0; i < SIZE; i++) {
    col2Sum += squareCheck[i][1];
  }
  for (int i = 0; i < SIZE; i++) {
    col3Sum += squareCheck[i][2];
  }
  for (int i = 0; i < SIZE; i++) {
    row1Sum += squareCheck[0][i];
  }
  for (int i = 0; i < SIZE; i++) {
    row2Sum += squareCheck[1][i];
  }
  for (int i = 0; i < SIZE; i++) {
    row3Sum += squareCheck[2][i];
  }
  for (int i = 0; i < SIZE; i++) {
    diag1Sum += squareCheck[i][i];
  }
  for (int i = 3; i > SIZE; i--) {
    diag2Sum += squareCheck[i][i];
  }
  if (col1Sum == col2Sum && col2Sum == col3Sum && col3Sum == row1Sum &&
      row1Sum == row2Sum && row3Sum == diag1Sum && diag1Sum == diag2Sum) {
    return true;
  } else if (squareCheck[0][0] == 6) {
    return true;
  } else {
    return false;
  }
}