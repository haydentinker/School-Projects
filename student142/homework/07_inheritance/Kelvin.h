/****************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:  Kelvin.h
 * Course:     CPTR 141
 *
 */
#include "Temperature.h"

#ifndef KELVIN_H
#define KELVIN_H

class Kelvin : public Temperature {
public:
  Kelvin(double temperature) : Temperature(temperature){};

  void printTemperature() const;

  // Conversions
  double getTemperatureInCelsius() const;
  double getTemperatureInFahrenheit() const;
  double getTemperatureInKelvin() const;
};

#endif // KELVIN_H