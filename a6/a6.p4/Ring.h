/*
CH08-320142
a6 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(std::string n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPerimeter() const;
	protected:
		double innerradius;
};

#endif
