/*
CH08-320142
a3 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
	string nameCtwo="Name";
	string nameCthree="John";
	string nameCfour="Rob";
	Critter c1;
	Critter c2(nameCtwo);
	Critter c3(nameCthree,2,3);
	Critter c4(nameCfour,4,2,15);
	cout << "You have created:" << endl;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
    return 0;
}
