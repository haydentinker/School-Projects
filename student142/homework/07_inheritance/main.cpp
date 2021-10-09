/****************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:  main.cpp
 * Course:     CPTR 141
 *
 */
#include "Celsius.h"
#include "Fahrenheit.h"
#include "Kelvin.h"
#include <iostream>

using namespace std;

int main() {

  Fahrenheit fTemp(98.6);
  fTemp.printTemperature();
  cout << "In Celsius: " << fTemp.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << fTemp.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << fTemp.getTemperatureInKelvin() << endl;
  cout << endl;

  Celsius cTemp(37);
  cTemp.printTemperature();
  cout << "In Celsius: " << cTemp.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << cTemp.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << cTemp.getTemperatureInKelvin() << endl;
  cout << endl;

  Kelvin kTemp(310.15);
  kTemp.printTemperature();
  cout << "In Celsius: " << kTemp.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << kTemp.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << kTemp.getTemperatureInKelvin() << endl;
  cout << endl;

  Fahrenheit fTemp2(32);
  fTemp2.printTemperature();
  cout << "In Celsius: " << fTemp2.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << fTemp2.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << fTemp2.getTemperatureInKelvin() << endl;
  cout << endl;

  Celsius cTemp2(100);
  cTemp.printTemperature();
  cout << "In Celsius: " << cTemp.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << cTemp.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << cTemp.getTemperatureInKelvin() << endl;
  cout << endl;

  Kelvin kTemp2(200);
  kTemp.printTemperature();
  cout << "In Celsius: " << kTemp.getTemperatureInCelsius() << endl;
  cout << "In Fahrenheit: " << kTemp.getTemperatureInFahrenheit() << endl;
  cout << "In Kelvin: " << kTemp.getTemperatureInKelvin() << endl;
  cout << endl;

  return 0;
}