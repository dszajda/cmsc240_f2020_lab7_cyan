#include <iostream>
#include "Shape.h"


int main(){
  Shape s("nice");

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "Shape:" << std::endl;
  std::cout << "----------------" << std::endl;


  std::cout << "getArea:  " << s.getArea() <<std::endl;
  s.print();


  return 0;
}
