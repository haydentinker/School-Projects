
/****************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:  temperatue.h
 * Course:     CPTR 141
 *
 */
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
private:
  double temperature;

public:
  Temperature(double temperature) { this->temperature = temperature; };

  double getTemperature() const { return temperature; };
  virtual void printTemperature() const = 0; 

  // Conversions
  virtual double getTemperatureInCelsius() const = 0; 
  virtual double getTemperatureInFahrenheit() const = 0; 
  virtual double getTemperatureInKelvin() const = 0; 
};

#endif // TEMPERATURE_H
