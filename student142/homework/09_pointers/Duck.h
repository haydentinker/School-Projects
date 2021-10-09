/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  duck.h
 * Course:     CPTR 142
 *
 */
#ifndef DUCK_H
#define DUCK_H

#include "Creature.h"
#include <string>

class Duck : public Creature {
public:
  Duck(std::string name) { this->name = name; };

  int getNumberOfLegs() const { return 2; };

  std::string getDescription() const { return "Duck"; }
};

#endif // DUCK_H
