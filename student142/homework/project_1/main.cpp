#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;
#include "beetle.h"

int main() {
  bool win = false;
  int playerNum = 0;
  int seedNum = 0;

  cout << "Welcome to Beetle! Please enter the a seed number and number of "
          "players."
       << endl
       << "Seed Number: ";
  // error checking the user input
  cin >> seedNum;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(1000, '\n');
    seedNum = 0;
    cout << "You have entered an invalid Seed Number. Setting Seed to 0."
         << endl;
  }
  cout << "Number of Players: ";
  cin >> playerNum;
  if ((cin.fail()) || (playerNum <= 0)) {
    cin.clear();
    cin.ignore(1000, '\n');
    playerNum = 4;
    cout << "You have entered an invalid Number of Players. Setting Number of "
            "Players to 4"
         << endl;
  }
  Dice dice;
  Beetle beetle(playerNum);
  dice.setSeed(seedNum);
  // code for the random number generator
  do {
    // loop for the game that goes until someone has won
    win = beetle.Play();

  } while (win == false);
  return 0;
}