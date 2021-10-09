/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       main.cpp
 * Course:          cp1TR 142
 *
 */

#include <cmath>    // for trig functions
#include <iostream> // for cin and cout
using namespace std;

#include "points.h"

/*====================================================================
 * Main program
 */
#include <cmath>    // for trig functions
#include <iostream> // for cin and cout
using namespace std;

int main() {
  CartesianPoint point1;
  point1.x = 1.0;
  point1.y = 2.0;
  double x1 = 1.0, y1 = 2.0;
  cout << "Cartesian Point 1: (" << point1.x << "," << point1.y << ")" << endl;

  PolarPoint ppoint = CartesianToPolar(point1);
  cout << "Polar Point: (" << ppoint.radius << "," << ppoint.theta << ")"
       << endl;

  CartesianPoint point3 = PolarToCartesian(ppoint);
  cout << "Cartesian Point 3: (" << point3.x << "," << point3.y << ")" << endl;

  double length = LengthC(point3);
  cout << "length = " << length << endl;

  CartesianPoint point4 = NormalizedC(point3);
  cout << "normalized = (" << point4.x << "," << point4.y << ")" << endl;

  CartesianPoint point2;
  point2.x = 2.0;
  point2.y = 1.0;
  cout << "Cartesian Point 2: (" << point2.x << "," << point2.y << ")" << endl;

  double dotProduct = DotProductC(point1, point2);
  cout << "dot product = " << dotProduct << endl;

  double x5, y5;
  SumC(point1, point2);
  cout << "sum = (" << point1.totalx << "," << point1.totaly << ")" << endl;

  return 0;
}
