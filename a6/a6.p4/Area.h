/*
CH08-320142
a6 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		Area(std::string n);
		virtual ~Area();
		std::string getColor();
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
	protected:
		std::string color;
};
#endif
