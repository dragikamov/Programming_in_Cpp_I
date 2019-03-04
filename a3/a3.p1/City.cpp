/*
CH08-320142
a3 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string &n)
{
    name=n;
}
void City::setInhabitans(int i)
{
    inhabitans=i;
}
void City::setMayor(string &m)
{
    mayor=m;
}
void City::setArea(double a)
{
    area=a;
}
string City::getName()
{
    return name;
}
int City::getInhabitans()
{
    return inhabitans;
}
string City::getMayor()
{
    return mayor;
}
double City::getArea()
{
    return area;
}
//void City::print()
//{
//    cout<<"The name of the city is: "<<name<<"."<<endl;
//    cout<<"It has "<<inhabitans<<" inhabitans."<<endl;
//    cout<<"The mayor of this city is: "<<mayor<<"."<<endl;
//    cout<<"And the area of this city is: "<<area<<"km^2"<<endl;
//}
