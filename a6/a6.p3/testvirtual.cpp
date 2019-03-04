/*
CH08-320142
a6 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int main() {
	Area *list[num_obj];						// Making a list of 7 objects of type Area
	int index = 0;								// Making an integer called index=0
	double sum_area = 0.0;						// Making a double value called sum_area=0
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// Making an object of type Ring, it's name in the function will be
                                                //blue_ring, and that object has a blue color and an outer radius of 5
                                                //and inner radius of 2
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square magenta_square("MAGENTA", 6);
	list[0] = &blue_ring;						// The first element of the list is the object blue_ring of type Ring
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &magenta_square;
	while (index < num_obj) {					// A while loop going on 7 times
		(list[index])->getColor();				// Printing the colors of all 7 objects in list
		sum_perimeter +=(list[index])->calcPerimeter();
		sum_area += (list[index++])->calcArea();
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// printing out the sum of all areas of the objects
	cout<<endl<<"The total perimeter is "<<sum_perimeter <<" units "<<endl;
	return 0;
}
/*
 ________________
|      Area      |
|----------------|
|Circle|Rectangle|
|------|---------|
| Ring | Square  |
|________________|
*/
