/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Fahrenheit.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include "Fahrenheit.h"
#include <iostream>

using namespace std;

void Fahrenheit::printTemperature() const {
  cout << getTemperature() << " Fahrenheit" << endl;
}

double Fahrenheit::getTemperatureInCelsius() const {
  return (getTemperatureInFahrenheit() - 32) / 1.80;
}

double Fahrenheit::getTemperatureInFahrenheit() const {
  return (getTemperature());
}

double Fahrenheit::getTemperatureInKelvin() const {
  return ((getTemperature() - 32) / 1.80) + 273.15;
}
