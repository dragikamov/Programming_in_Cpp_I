/*
CH08-320142
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(std::string n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	//std::cout << "calcArea of Rectangle...";
	return (length*width);
}

double Rectangle::calcPerimeter() const {
	//std::cout << "calcPerimeter of Rectangle...";
	return ((2*length)+(2*width));
}
