/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  bee.h
 * Course:     CPTR 142
 *
 */
#ifndef BEE_H
#define BEE_H

#include "Creature.h"
#include <string>

class Bee : public Creature {
public:
  Bee(std::string name) { this->name = name; };

  int getNumberOfLegs() const { return 6; } ;

  std::string getDescription() const { return "Bee"; }
};

#endif // BEE_H
