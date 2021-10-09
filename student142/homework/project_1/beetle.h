#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

class Beetle {
public:
//gets a user input number of players and saves it
  Beetle(int playerNum) { this->playerNum = playerNum; }

  // Calls the Dice function and loops until there is a winner
  bool Play();
  // Keeps track of each the beetles
  int Win(int playersTurn);

private:
  //keeps track of who won
  int winner = 0;
  //keeps track of how many turns the winner takes
  int winnerTurnCounter = 0;
 //variable used to set the array for the number of players
  int playerNum = 0;
  //the roll is received from the dice class and used to update beetle
  int roll = 0;
  //sets the arrays to 0 if it is the first turn
  bool firstTime = true;
};

class Dice {
public:
//sets the seed
  void setSeed(int seedNum) { srand(seedNum); }
  //rolls the dice
  int Roll() {
    return rand() % 6 + 1;
    ;
  }
};