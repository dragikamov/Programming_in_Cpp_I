/*
CH08-320142
a3 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter()
{
    name="default_critter";
    height=5;
    hunger=0;
    boredom=0;
    cout<<"First condition"<<endl;
}
Critter::Critter(std::string &a)
{
    name=a;
    height=5;
    hunger=0;
    boredom=0;
    cout<<"Second condition"<<endl;
}
Critter::Critter(string &a, int b, int c, double d)
{
    name=a;
    hunger=b;
    boredom=c;
    height=d;
    cout<<"Third condition"<<endl;
}
void Critter::print() {
	cout<<"I am "<<name<<". My hunger level is "<<hunger<<"."<<endl;
	cout<<"My boredom level is "<<boredom<<" and my height is "<<height<<endl;
}
