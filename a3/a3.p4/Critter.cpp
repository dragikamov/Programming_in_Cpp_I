/*
CH08-320142
a3 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//void Critter::setName(string& newname) {
//	name = newname;
//}
//void Critter::setHunger(int newhunger) {
//	hunger = newhunger;
//	hunger/=10;
//}
//void Critter::setHeight(double newHeight)
//{
//    height=newHeight;
//}
Critter::Critter(string &n,int hu,int b,double he,double t)
{
    name=n;
    hunger=hu;
    hunger/=10;
    boredom=b;
    height=he;
    thirst=t;
}
void Critter::print() {
	cout<<"I am "<<name<<". My hunger level is "<<hunger<<"."<<endl;
	cout<<"My boredom level is "<<boredom<<". My height is "<<height<<"cm"<<endl;
	cout<<"My thirst level is "<<thirst<<"."<<endl;
}
//int Critter::getHunger() {
//	return hunger;
//}
