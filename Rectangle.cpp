#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include "Rectangle.h"
#include "Shape.h"
#include <iostream>

Rectangle::Rectangle(std::string name, double width, double height)
: Shape(name), width(width),height(height){}

Rectangle::~Rectangle(){}


double Rectangle::getArea(){
  return width * height;
}
void Rectangle::print(){
  Shape::print();
  std::cout << "width: " << width <<endl;
  std::cout << "height: " << height <<endl;
}

#endif
