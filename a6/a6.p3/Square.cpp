/*
CH08-320142
a6 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Area(n),Rectangle(n,a,a) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return length*length;
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return 4*length;
}
