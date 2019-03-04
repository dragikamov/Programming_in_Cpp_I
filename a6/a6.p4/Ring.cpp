/*
CH08-320142
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <string.h>
#include "Ring.h"

Ring::Ring(std::string n, double outer, double inner)
					: Area(n), Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	//std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-(innerradius * innerradius * 3.141593));
}

double Ring::calcPerimeter() const {
	//std::cout << "calcPerimeter of Ring...";
	return (Circle::calcPerimeter()-(2 * innerradius * 3.141593));
}
