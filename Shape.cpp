#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include "Shape.h"
#include <iostream>

Shape::Shape(std::string shapeName){name = shapeName;}
Shape::~Shape(){}



double Shape::getArea(){return 0.00;}


void Shape::print(){
  std::cout << "name: " << name << std::endl;
}


#endif
