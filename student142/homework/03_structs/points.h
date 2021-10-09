/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.h
 * Name:            ?
 * Course:          cp1TR 142
 * Date:            January 17, 2020
 *
 */
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
