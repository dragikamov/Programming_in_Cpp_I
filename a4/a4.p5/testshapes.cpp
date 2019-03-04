/*
CH08-320142
a4 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {

  Circle c("Circle", 3, 4, 7);
  Rectangle b("Rectangle", 2, 3, 3, 2);
  Square a("Square", 1, 2, 5);

  cout<<"The perimeter of the "<<a.getName()<<" is: "<<a.perimeter()<<endl;
  cout<<"The area of the "<<a.getName()<<" is: "<<a.area()<<endl<<endl;

  cout<<"The perimeter of the "<<b.getName()<<" is: "<<b.perimeter()<<endl;
  cout<<"The area of the "<<b.getName()<<" is: "<<b.area()<<endl<<endl;

  cout<<"The perimeter of the "<<c.getName()<<" is: "<<c.perimeter()<<endl;
  cout<<"The area of the "<<c.getName()<<" is: "<<c.area()<<endl<<endl;
}
