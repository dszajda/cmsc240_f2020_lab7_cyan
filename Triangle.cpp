#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__

#include "Triangle.h"
#include "Shape.h"
#include <iostream>

Triangle::Triangle(std::string name, double base, double height)
: Shape(name), base(base),height(height){}

Triangle::~Triangle(){}


double Triangle::getArea(){
  return 0.5 * base * height;
}
void Triangle::print(){
  Shape::print();
  std::cout << "base: " << base << std::endl;
  std::cout << "height: " << height << std::endl;
}

#endif
