/*************************************************************************
 *
 * hw14: Find the perimeter of several different types of figures
 *
 * File Name: perimeterFunctions.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

#include "perimeterFunctions.h"

const double PI = 3.141592653689;
double findPerimeter(double length, int sides) { return length * sides; }
double findPerimeter(double radius) { return 2 * (PI * radius); }