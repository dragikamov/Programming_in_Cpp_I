/*
CH08-320142
a3 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}
void Critter::setHunger(int newhunger) {
	converter(newhunger);
}
void Critter::converter(int newhunger)
{
    hunger=(double)newhunger/10;
}
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}
int Critter::getHunger() {
	return hunger;
}
