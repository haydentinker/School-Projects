/****************************************************************************
 *
 * hw15: A library of array functions
 *
 * File Name: arrayManipulate.h
 * Name:      ?
 * Course:    CPTR 141
 *
 */

/*==========================================================================
 * Function: square(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: the values of int[] have all been squared
 */
void square(int[], int);

/*==========================================================================
 * Function: divdeBy(int[],int,int)
 *
 * Precondition: int[] is an array integer of the positive length given in
 *               the 2nd parameter and the 3rd parameter is not 0
 * Postcondition: the values of the array have all been divided by the third
 *                parameter
 */
void divdeBy(int[], int, int);

/*==========================================================================
 * Function: accumulate(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: The array entries contain the sum of all entries up to
 *                that point in the origional array.  For example,
 *                {1,3,2,5} would become {1,4,6,11}.
 */
void accumulate(int[], int);

/*==========================================================================
 * Function: reverse(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: The array entries have been reversed.  For example,
 *                {1,3,2,5} would become {5,3,2,1}.
 */
void reverse(int[], int);