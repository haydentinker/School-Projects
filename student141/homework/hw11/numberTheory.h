/****************************************************************************
 *
 * hw11:  A library of simple functions
 *
 * File Name:  numberTheory.h
 * Name:       ?
 * Course:     CPTR 141
 *
 */

/*==========================================================================
 * Function: divisible(int,int)
 *
 * Precondition: both parameters are positive integers
 * Postcondition: returns true if the first parameter is divisible by the
 *                second, otherwise returns false.
 */
bool divisible(int x, int y);

/*==========================================================================
 * Function: gcd(int,int)
 *
 * Precondition: both parameters are positive integers
 * Postcondition: returns the greatest common divisor of the two parameters
 *                this is the largest integer that divides into both of them
 */
int gcd(int x, int y);

/*==========================================================================
 * Function: gcd(int,int,int)
 *
 * Precondition: all three parameters are positive integers
 * Postcondition: returns the greatest common divisor of the two parameters
 *                this is the largest integer that divides into both of them
 */
int gcd(int x, int y, int z);