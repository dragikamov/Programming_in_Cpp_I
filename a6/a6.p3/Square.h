/*
CH08-320142
a6 p3.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
};

#endif
