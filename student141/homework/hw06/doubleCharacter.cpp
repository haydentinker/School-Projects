/****************************************************************************
 *
 * hw06: Prompt the user for a word and then check it for double characters.
 *
 * File Name: double.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream> // for cout and cin
#include <string>   // for string commands
using namespace std;

int main() {

  /* YOUR CODE GOES HERE */
  string inputWord;
  int wordLength;
  unsigned int i;
  unsigned int x;

  cout << "Welcome to the DoubleChecker(TM) word checker" << endl;
  cout << "=============================================" << endl;
  cout << "Enter a word to check: ";
  cin >> inputWord;
  cout << endl;
  wordLength = inputWord.size();
  for (i = 0; i < wordLength - 1; i++) {

    if (inputWord.at(i) - inputWord.at(i + 1) == 0) {
      x = 2;
    }
  }

  if (x == 2) {

    cout << "There are double characers in the word " << inputWord << "."
         << endl;
  } else {
    cout << "I could not find any double characters." << endl;
  }
}
