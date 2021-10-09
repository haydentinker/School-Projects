#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;
#include "beetle.h"

bool Beetle::Play() {
  // this is the part where the magic happens
  Dice Dice;
  for (int i = 0; i < playerNum; i++) {
    roll = Dice.Roll();
    int playersTurn = i;
    int winnersTurn = Beetle::Win(playersTurn);
    if (winnersTurn != 0) {

      cout << "Player " << winner << " has won the game in " << winnersTurn
           << " turns." << endl;
      return true;
    }
  }

  return false;
}
int Beetle::Win(int playersTurn) {
  int scoreBoard[playerNum][7];
  // if it is the first time through it will set everything back to 0
  if (firstTime == true) {
    for (int i = 0; i < playerNum; i++) {
      for (int y = 0; y < 7; y++) {
        scoreBoard[i][y] = 0;
      }
    }
    firstTime = false;
  }
  scoreBoard[playersTurn][0]++;
  switch (roll) {
  case 1:
    // if the player has rolled a 6 and a 5 before this it will add to the
    // player's eye count
    if ((scoreBoard[playersTurn][6] >= 1) &&
        (scoreBoard[playersTurn][5] >= 1)) {

      scoreBoard[playersTurn][1]++;
    }
    break;
  case 2:
    // same as case 1 but adds to the player's anntennae count
    if ((scoreBoard[playersTurn][6] >= 1) &&
        (scoreBoard[playersTurn][5] >= 1)) {

      scoreBoard[playersTurn][2]++;
    }
    break;
  case 3:
    // adds to leg count if body has been rolled
    if (scoreBoard[playersTurn][6] >= 1) {
      scoreBoard[playersTurn][3]++;
    }
    break;
  case 4:
    // adds to wing count if body has been rolled
    if (scoreBoard[playersTurn][6] >= 1) {
      scoreBoard[playersTurn][4]++;
    }
    break;
  case 5:
    // adds head if body has been rolled
    if (scoreBoard[playersTurn][6] >= 1) {
      scoreBoard[playersTurn][5]++;
    }
    break;
  case 6:
    // adds body
    scoreBoard[playersTurn][6]++;
    break;
  }
  // if the player has all of the body parts this will make the function return
  // true instead of false and ending the game
  if ((scoreBoard[playersTurn][1] >= 2) && (scoreBoard[playersTurn][2] >= 2) &&
      (scoreBoard[playersTurn][3] >= 6) && (scoreBoard[playersTurn][4] >= 4) &&
      (scoreBoard[playersTurn][5] >= 1) && (scoreBoard[playersTurn][6] >= 1)) {
    winnerTurnCounter = scoreBoard[playersTurn][0];
    winner = 1 + playersTurn;
    return scoreBoard[playersTurn][0];
  }
  return 0;
}
