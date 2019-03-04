/*
CH08-320142
a6 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public virtual Area {
	public:
		Rectangle(std::string n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
	protected:
		double length;
		double width;
};

#endif
