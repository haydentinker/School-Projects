/*************************************************************************
 *
 * hw01: A mad-libs introduction to a famous song from Aladdin
 *
 * File Name: wholeNewWorld.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream> // included for cin and cout processing
#include <string>
using namespace std;

int main() {

  // define your variables below
  string adjective1;
  string noun;
  string adjective2;
  string command;
  string question;
  string verb;
  string verbing;
  string adjective3;
  string preposition;
  // gather user input using cin << variableName
  cout << "Enter an adjective: ";
  cin >> adjective1;
  cout << "Enter a noun: ";
  cin >> noun;
  cout << "Enter another adjective: ";
  cin >> adjective2;
  cout << "Enter a command: ";
  cin >> command;
  cout << "Enter a question word: ";
  cin >> question;
  cout << "Enter a verb: ";
  cin >> verb;
  cout << "Enter a verb ending in 'ing': ";
  cin >> verbing;
  cout << "Enter another adjective: ";
  cin >> adjective3;
  cout << "Enter a preposition: ";
  cin >> preposition;
  cout << endl;

  // print out the "song"
  cout << "A whole " << adjective1 << " " << noun << endl
       << "A new " << adjective2 << " point of view" << endl
       << "No one to tell us \"" << command << "\"" << endl
       << "Or " << question << " to " << verb << endl
       << "Or say we're only " << verbing << endl
       << endl
       << "A whole " << adjective1 << " " << noun << endl
       << "A " << adjective3 << " place I never knew" << endl
       << "But now from way " << preposition << " here" << endl
       << "It's crystal clear" << endl
       << "that now I'm in a whole " << adjective1 << " " << noun
       << " with you." << endl;

  return 0;
}
