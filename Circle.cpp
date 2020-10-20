#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include "Circle.h"
#include "Shape.h"
#include <iostream>

Circle::Circle(std::string name, double radius)
: Shape(name), radius(radius){}

Circle::~Circle(){}


double Circle::getArea(){
  return PI * radius * radius;
}
void Circle::print(){
  Shape::print();
  std::cout << "raduis: " << radius << std::endl;
}

#endif
