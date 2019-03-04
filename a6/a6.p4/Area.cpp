/*
CH08-320142
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(std::string n) {
	color=n;
	//cout << "Area constructor being called...\n";
}

Area::~Area() {
}

string Area::getColor()
{
	return color;
}
