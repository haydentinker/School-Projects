/*************************************************************************
 *
 * hw05: An implementation of a decision tree.
 *
 * File Name: decisionTree.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
  /* YOUR CODE GOES HERE */
  int weather;
  int time;
  int books;
  cout << "Should you Walk or Ride?  Let's find out!" << endl;
  cout << "a. What is the weather like?" << endl;
  cout << "   1 = Hot and Dry" << endl;
  cout << "   2 = Cool and Dry" << endl;
  cout << "   3 = Rainy" << endl;
  cout << "Enter Choice: ";
  cin >> weather;

  switch (weather) {
  // Hot and Dry
  case 1:
    cout << "b. How much time do you have, in minutes? ";
    cin >> time;
    if (time < 30) {
      cout << endl << "You had better ride the bus to school." << endl;
    } else {
      cout << "c. How many books do you have? " << endl;
      cin >> books;
      if (books > 2) {
        cout << "You had better ride the bus to school." << endl;
      } else {
        cout << "You should walk to school." << endl;
      }
    }
    break;
  // Cold and Dry
  case 2:
    cout << "b. How much time do you have, in minutes? ";
    cin >> time;
    if (time < 20) {
      cout << endl << "You had better ride the bus to school." << endl;
    } else {
      cout << "c. How many books do you have? ";
      cin >> books;
      cout << endl;
      if (books <= 4) {
        cout << "You should walk to school." << endl;
      } else {
        cout << "You had better ride the bus to school." << endl;
      }
    }
    break;
  // Rainy
  case 3:
    cout << endl << "You had better ride the bus to school." << endl;

    break;
  }

  return 0;
}
