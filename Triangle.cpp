#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__

#include "Triangle.h"
#include "Shape.h"
#include <iostream>

Triangle::Triangle(std::string name, double base, double height)
: Shape(name), b{base},h{height}{}

Triangle::~Triangle(){}


double Triangle::getArea(){
  return 0.5 * b * h;
}
void Triangle::print(){
  Shape::print();
  std::cout << "base: " << b << std::endl;
  std::cout << "height: " << h << std::endl;
}

#endif
