/*
CH08-320142
a2 p7.cpp
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
	hunger = newhunger;
}

void Critter::setWeight(double newweight) {
	weight = newweight;
}

void Critter::setSleep(string& newsleep) {
	if(newsleep=="yes" || newsleep=="Yes")
    {
        sleep = 1;
    }
	else if(newsleep=="no" || newsleep=="No")
    {
        sleep = 0;
    }
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	if(sleep==0)
    {
        cout<<"I am not sleepy. ";
    }
    else if(sleep==1)
    {
        cout<<"I want to sleep. ";
    }
    cout<<"And I weight "<<weight<<" grams."<<endl;
}
