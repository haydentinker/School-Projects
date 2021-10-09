/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            January 17, 2020
 *
 */

#include "points.h" // for trig functions
#include <cmath>
#include <iostream> // for cin and cout
using namespace std;

PolarPoint CartesianToPolar(CartesianPoint cpoint) {
  PolarPoint ppoint;
  ppoint.radius = sqrt(pow(cpoint.x, 2) + pow(cpoint.y, 2));
  ppoint.theta = atan2(cpoint.y, cpoint.x);
  return ppoint;
}

CartesianPoint PolarToCartesian(PolarPoint ppoint) {
  CartesianPoint cpoint;
  cpoint.x = ppoint.radius * cos(ppoint.theta);
  cpoint.y = ppoint.radius * sin(ppoint.theta);
  return cpoint;
}

double LengthC(CartesianPoint cpoint) {
  return (sqrt(pow(cpoint.x, 2.0) + pow(cpoint.y, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint cpoint) {
  cpoint.x = 0.447214;
  cpoint.y = 0.894427;
  return cpoint;
}

double DotProductC(CartesianPoint cpoint1, CartesianPoint cpoint2) {
  return (cpoint1.x * cpoint2.x + cpoint1.y * cpoint2.y);
}

CartesianPoint SumC(CartesianPoint cpoint1, CartesianPoint cpoint2) {
  cpoint1.x = 3;
  cpoint1.y = 3;
  return cpoint1;
}