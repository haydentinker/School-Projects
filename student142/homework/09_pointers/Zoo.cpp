/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  zoo.cpp
 * Course:     CPTR 142
 *
 */
#include "Zoo.h"
#include "Bee.h"
#include "Cat.h"
#include "Creature.h"
#include "Duck.h"
#include "Snail.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// TODO Add code here
void Zoo::addCreature(CREATURES animal, string name) {

  if (animal == 3) {
    Creature *animalPointer = new Snail(name);
    creatures.push_back(animalPointer);
  }
  if (animal == 1) {
    Creature *animalPointer = new Cat(name);
    creatures.push_back(animalPointer);
  }
  if (animal == 2) {
    Creature *animalPointer = new Duck(name);
    creatures.push_back(animalPointer);
  }
  if (animal == 0) {
    Creature *animalPointer = new Bee(name);
    creatures.push_back(animalPointer);
  }
}

void Zoo::printCensus() {
  cout << "Zoo Census:" << endl;

  for (vector<Creature *>::iterator i = creatures.begin(); i != creatures.end();
       i++) {
    cout << " - " << (*i)->getName() << " (" << (*i)->getDescription() << ")"
         << endl;
  }
}
int Zoo::getNumberOfLegs() {
  int numberOfLegs = 0;
  for (vector<Creature *>::iterator i = creatures.begin(); i != creatures.end();
       i++) {
    numberOfLegs += (*i)->getNumberOfLegs();
  }
  return numberOfLegs;
}
