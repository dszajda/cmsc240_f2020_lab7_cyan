#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include "Circle.h"
#include "Shape.h"
#include <iostream>

Circle::Circle(std::string name, double radius)
: Shape(name), r{radius}{}

Circle::~Circle(){}


double Circle::getArea(){
  return PI * r * r;
}
void Circle::print(){
  Shape::print();
  std::cout << "raduis: " << r << std::endl;
}

#endif
