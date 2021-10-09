/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  creature.h
 * Course:     CPTR 142
 *
 */
#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {
protected:
  std::string name;

public:
  Creature() { this->name = "John Doe"; };

  std::string getName() const { return name; };

  virtual int getNumberOfLegs() const = 0;

  virtual std::string getDescription() const = 0;
};

#endif // CREATURE_H
