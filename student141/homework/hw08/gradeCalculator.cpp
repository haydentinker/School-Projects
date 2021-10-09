/****************************************************************************
 *
 * hw08: Calculate the average for a user-entered number of grades
 *
 * File Name:  gradeCalculator.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;

int main() {
  // opening prompt
  cout << "Enter a score between 0 and 100 on each line." << endl;
  cout << "Enter a negative number to finish." << endl;
  cout << endl;
  /* Your Code Here */
  double input = 1;
  double average = 0;
  int i = 1;
  double sum = 0;
  while (input > -1) {
    cout << "Grade #" << i << ": ";
    cin >> input;
    if (input > 100) {
      cout << "Error!  Grades may not be more than 100." << endl;
      cout << "Grade #" << i << ": ";
      cin >> input;
    }
    sum += input;
    i++;
  }
  i -= 1;
  if (i == 1) {
    cout << "No grades were entered." << endl;
    return 0;
  }
  i -= 1;
  if (input < 0) {
    sum -= input;
    input -= input;
  }
  average = sum / (i);
  cout << "Your avearge is: ";
  printf("%.2f", average);
  cout << endl;
  return 0;
}