/*
CH08-320142
a6 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(std::string n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
	protected:
		double radius;
};

#endif
