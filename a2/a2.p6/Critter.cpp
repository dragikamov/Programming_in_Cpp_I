/*
CH08-320142
a2 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

//using namespace std;

void Critter::setName(std::string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}
