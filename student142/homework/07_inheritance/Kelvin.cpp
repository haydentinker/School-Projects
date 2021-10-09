/****************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:  Kelvin.cpp
 * Course:     CPTR 141
 *
 */
#include "Kelvin.h"
#include <iostream>

using namespace std;

void Kelvin::printTemperature() const {
  cout << getTemperature() << " Kelvin" << endl;
}

double Kelvin::getTemperatureInCelsius() const { return getTemperature() - 273.15; }

double Kelvin::getTemperatureInFahrenheit() const {
  return (getTemperatureInCelsius() * 9.0 / 5) + 32;
}

double Kelvin::getTemperatureInKelvin() const { return getTemperature(); }
