/****************************************************************************
 *
 * hw07: Implement a program to find prime numbers up to a user define value.
 *
 * File Name:  prime.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <iostream> // for cout and cin
using namespace std;

int main() {
  int num;
  unsigned int i;
  int x;
  x = 2;
  num = 0;
  i = 3;
  cout << "Premium Prime Printer (twice the primes, half the time)" << endl;
  cout << "=======================================================" << endl;
  cout << "Enter Integer Upper Limit (3 or more): ";
  cin >> num;
  while (num < 3) {
    cout << "Error!  Please enter a number bigger than 2." << endl;
    cout << "Enter Integer Upper Limit (3 or more): ";
    cin >> num;
  }
  cout << endl << "2 is a prime number." << endl;
  while (i <= num) {

    if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
    }

    else {
      cout << i << " is a prime number." << endl;
    }
    if (i == 3 || i == 5 || i == 7) {
      cout << i << " is a prime number." << endl;
    }

    i++;
  }

  return 0;
}
