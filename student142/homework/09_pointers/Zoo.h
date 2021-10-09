/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  zoo.h
 * Course:     CPTR 142
 *
 */
#ifndef ZOO_H
#define ZOO_H

#include "Creature.h"
#include <string>
#include <vector>

class Zoo {
private:
  std::vector<Creature *> creatures;

public:
  enum CREATURES { BEE, CAT, DUCK, SNAIL };
  void addCreature(CREATURES, std::string);

  void printCensus();

  int getNumberOfLegs();
};

#endif // ZOO_H
