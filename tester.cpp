#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"


int main(){
  Shape s("nice");

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "Shape:" << std::endl;
  std::cout << "----------------" << std::endl;


  std::cout << "getArea:  " << s.getArea() <<std::endl;
  s.print();

  std::cout << "----------------" << std::endl;
  std::cout << "Circle:" << std::endl;
  std::cout << "----------------" << std::endl;

  Circle c("nice2", 3.00);
  std::cout << "getArea: " << c.getArea() <<std::endl;
  c.print();

  std::cout << "----------------" << std::endl;
  std::cout << "Triangle:" << std::endl;
  std::cout << "----------------" << std::endl;
  Triangle t("nice3", 3, 4);
  std::cout << "getArea: " << t.getArea() << std::endl;
  t.print();

  std::cout << "----------------" << std::endl;
  std::cout << "Rectangle:" << std::endl;
  std::cout << "----------------" << std::endl;
  Rectangle r("nice4", 3, 4);
  std::cout << "getArea: " << r.getArea() << std::endl;
  r.print();

  std::cout << "----------------" << std::endl;
  std::cout << "----------------" << std::endl;



  return 0;
}
