/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Celsius.h
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Temperature.h"

#ifndef CELSIUS_H
#define CLESIUS_H

class Celsius : public Temperature {
public:
  Celsius(double temperature) : Temperature(temperature){};

  void printTemperature() const;

  // Conversions
  double getTemperatureInCelsius() const;
  double getTemperatureInFahrenheit() const;
  double getTemperatureInKelvin() const;
};

#endif // CELSIUS_H
