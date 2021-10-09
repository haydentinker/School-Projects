/*************************************************************************
 *
 * hw04: A program to prompt the user for five numbers and then randomly
 *       pick one of them.
 *
 * File Name: numberPicker.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
  int number;
  int numone;
  int numtwo;
  int numthree;
  int numfour;
  int numfive;
  int rannum;
  cout << "Enter Random Seed: ";
  cin >> rannum;
  cout << endl;
  cout << "Enter First Number: ";
  cin >> numone;
  cout << "Enter Second Number: ";
  cin >> numtwo;
  cout << "Enter Third Number: ";
  cin >> numthree;
  cout << "Enter Fourth Number: ";
  cin >> numfour;
  cout << "Enter Fifth Number: ";
  cin >> numfive;
  cout << endl;
  srand(rannum);
  number = rand() % 5;
  if (number == 0) {
    number = numone;
  } else if (number == 1) {
    number = numtwo;
  } else if (number == 2) {
    number = numthree;
  } else if (number == 3) {
    number = numfour;
  } else {
    (number = 4);
    number = numfive;
  }

  cout << "I choose " << number << endl;

  return 0;
}
