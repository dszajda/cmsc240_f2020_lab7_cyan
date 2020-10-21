#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>
#include "Shape.h"

class Rectangle : public Shape {
  private:
    double w;
    double hei;

  public:
    Rectangle();
    Rectangle(std::string name, double width, double height);
    ~Rectangle();

    double  getArea();

    void print();
};

#endif
