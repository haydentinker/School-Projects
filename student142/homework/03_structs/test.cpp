#include "points.h" // for trig functions
#include <cmath>
#include <iostream> // for cin and cout
using namespace std;

#ifndef POINTS_H
#define POINTS_H
struct CartesianPoint {
  double x;
  double y;
  double totaly;
  double totalx;
  double normalizedX;
  double normalizedY;
};
struct PolarPoint {
  double theta;
  double radius;
};

//  function declarations (prototypes)
PolarPoint CartesianToPolar(CartesianPoint cpoint);
CartesianPoint PolarToCartesian(PolarPoint ppoint);
double LengthC(CartesianPoint cpoint);
CartesianPoint NormalizedC(CartesianPoint cpoint);
double DotProductC(CartesianPoint cpoint1, CartesianPoint cpoint2);
CartesianPoint SumC(CartesianPoint cpoint1, CartesianPoint cpoint2);

#endif // POINTS_H
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
  double length = LengthC(cpoint);
  cpoint.normalizedX = cpoint.x / length;
  cpoint.normalizedY = cpoint.y / length;
  return cpoint;
}

double DotProductC(CartesianPoint cpoint1, CartesianPoint cpoint2) {
  return (cpoint1.x * cpoint2.x + cpoint1.y * cpoint2.y);
}

CartesianPoint SumC(CartesianPoint cpoint1, CartesianPoint cpoint2) {
  cpoint1.totalx = cpoint1.x + cpoint2.x;
  cpoint1.totaly = cpoint1.y + cpoint2.y;
  return cpoint1;
}
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
