/****************************************************************************
 *
 * hw16: Checking for Lo Shu Magic Squares
 *
 * File Name: magicSquare.h
 * Course:    CPTR 141
 * Date:      December 7, 2017
 *
 */

const int SIZE = 3;

/*==========================================================================
 * Function: isLoShu(int[][SIZE],int)
 *
 * Precondition: int[][SIZE] is a 3 x 3 array of integers.  The second
 *               paramter is the number of rows (which should be three).
 * Postcondition: returns true if this array holds a Lo Shu Magic Square,
 *                false otherwise.
 */
bool isLoShu(int[][SIZE], int rows = SIZE);
