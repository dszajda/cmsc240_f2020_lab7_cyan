#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <string>
#include "Shape.h"

class Circle : public Shape {
  private:
    const long double PI = 3.141592653589793238L;
    double radius;

  public:
    Circle();
    Circle(std::string name, double radius);
    ~Circle();

    double  getArea();

    void print();
};

#endif
