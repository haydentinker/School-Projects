/****************************************************************************
 *
 * Asgn.15:  A library of array functions
 *
 * File Name: arrayManipulate.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include "arrayManipulate.h"
#include <cassert>
#include <cmath>

/*==========================================================================
 * Function: square(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: the values of int[] have all been squared
 */
void square(int myArray[], int) {
  const int numElements = 7;
  for (int i = 0; i < numElements; i++) {
    myArray[i] = pow(myArray[i], 2);
  }
}

/*==========================================================================
 * Function: divdeBy(int[],int,int)
 *
 * Precondition: int[] is an array integer of the positive length given in
 *               the 2nd parameter and the 3rd parameter is not 0
 * Postcondition: the values of the array have all been divided by the third
 *                parameter
 */
void divdeBy(int myArray[], int, int divide) {
  assert(divide > 0);
  const int numElements = 7;
  for (int i = 0; i < numElements; i++) {
    myArray[i] = myArray[i] / divide;
  }
}

/*==========================================================================
 * Function: accumulate(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: The array entries contain the sum of all entries up to
 *                that point in the origional array.  For example,
 *                {1,3,2,5} would become {1,4,6,11}.
 */
void accumulate(int myArray[], int) {
  const int numElements = 7;
  int sum = 0;
  for (int i = 0; i < numElements; i++) {
    myArray[i] += sum;
    sum = myArray[i];
  }
}

/*==========================================================================
 * Function: reverse(int[],int)
 *
 * Precondition: int[] is an integer array of positive length given in the
 *               second parameter
 * Postcondition: The array entries have been reversed.  For example,
 *                {1,3,2,5} would become {5,3,2,1}.
 */
void reverse(int array[], int n) {
  int temp = 0;
  for (int i = 0; i < n / 2; i++) {
    temp = array[i];
    array[i] = array[n - 1 - i];
    array[n - 1 - i] = temp;
  }
  return;
}