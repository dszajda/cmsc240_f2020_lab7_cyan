#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include "Rectangle.h"
#include "Shape.h"
#include <iostream>

Rectangle::Rectangle(std::string name, double width, double height)
: Shape(name), w{width},hei{height}{}

Rectangle::~Rectangle(){}


double Rectangle::getArea(){
  return w * hei;
}
void Rectangle::print(){
  Shape::print();
  std::cout << "width: " << w <<std::endl;
  std::cout << "height: " << hei <<std::endl;
}

#endif
