/*************************************************************************
 *
 * Project: GameList implemented using linked list
 *
 * File Name: GameList.cpp
 * Name:      ??
 * Course:    CPTR 242
 * Date:      ??
 *
 */
#include "GameList.h"
#include "Array.h"
#include "Bridges.h"
#include "DataSource.h"
#include "SLelement.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace bridges;

GameList::GameList() {
  // Class constructor
  length = 0;
  listData = NULL;
}

GameList::~GameList() {
  // Post: List is empty; all items have been deallocated.
  MakeEmpty();
}

bool GameList::IsFull() const {
  // Returns true if there is no room for another actor
  //  on the free store; false otherwise.
  SLelement<std::string> *location;
  try {
    location = new SLelement<std::string>;
    delete location;
    return false;
  } catch (std::bad_alloc exception) {
    return true;
  }
}

int GameList::GetLength() const {
  // Post: Number of items in the list is returned.
  return length;
}

void GameList::MakeEmpty() {
  // TODO Add code here.
  SLelement<std::string> *curNode = GetHead();
  // check if empty
  if (listData == NULL) {
    return;
  }
  // while there is still stuff in the list
  while (curNode != NULL) {
    SLelement<std::string> *temp = curNode->getNext();
    delete curNode;
    curNode = temp;
  }
  length = 0;
  listData = NULL;
}

SLelement<std::string> *GameList::GetHead() { return listData; }

void GameList::PutGame(std::string title, std::string gameDetails,
                       double rating) {
  // TODO Add code here.

  SLelement<std::string> *newGame =
      new SLelement<std::string>(title, gameDetails);
  // check to see if the game is in the list/if list is full
  bool found = true;
  bool full = IsFull();
  GetGame(title, gameDetails, found);
  if (full == false) {
    if (found == false) {
      // set the information based on rating
      newGame->setLabel(title);
      newGame->setValue(gameDetails);
      if (rating <= 2) {
        newGame->setColor("red");
        newGame->setSize(10);
      } else if (rating < 5) {
        newGame->setColor("orange");
        newGame->setSize(20);
      } else if (rating < 8) {
        newGame->setColor("yellow");
        newGame->setSize(30);
      } else if (rating >= 8) {
        newGame->setColor("green");
        newGame->setSize(40);
      }
      SLelement<std::string> *curNode = GetHead();
      // Quinton helped me and gave me the idea on how to sort the list
      if (curNode == NULL) {
        listData = newGame;
        newGame->setNext(NULL);
      } else if (newGame->getValue() <= listData->getValue()) {
        newGame->setNext(listData);
        listData = newGame;
      } else {
        SLelement<std::string> *curNode = GetHead();
        while (curNode->getNext() != NULL &&
               curNode->getNext()->getValue() < newGame->getValue()) {
          curNode = curNode->getNext();
        }
        newGame->setNext(curNode->getNext());
        curNode->setNext(newGame);
      }
    }
  }

  length++;
}

void GameList::GetGame(std::string title, std::string &gameDetails,
                       bool &found) {
  // TODO Add code here.
  found = false;
  SLelement<std::string> *curNode = listData;
  // iterate over list and check for title
  while (curNode != NULL) {
    if (curNode->getLabel() == title) {
      gameDetails = curNode->getValue();
      found = true;
      return;
    }
    curNode = curNode->getNext();
  }
}

void GameList::DeleteGame(std::string title) {
  // TODO Add code here.
  // Worked with quinton on this
  // find the item and then delete it and update pointers
  SLelement<std::string> *curNode = listData;
  if (curNode->getLabel() == title) {
    listData = curNode->getNext();
    free(curNode);
    length--;
    return;
  }
  while (curNode->getNext() != NULL) {
    if (curNode->getNext()->getLabel() == title) {
      SLelement<std::string> *prev = curNode;
      curNode = curNode->getNext();
      SLelement<std::string> *succNode = curNode->getNext();
      free(curNode);
      prev->setNext(succNode);
      length--;
      return;
    }
    curNode = curNode->getNext();
  }
}

void GameList::ResetList() {
  // TODO Add code here.
  currentPos = NULL;
}

void GameList::GetNextGame(std::string &title, std::string &gameDetails) {
  // TODO Add code here.
  // updating the currentPos pointer
  if (currentPos == NULL) {
    currentPos = listData;
  } else {
    currentPos = currentPos->getNext();
  }
  title = currentPos->getLabel();
  gameDetails = currentPos->getValue();
}