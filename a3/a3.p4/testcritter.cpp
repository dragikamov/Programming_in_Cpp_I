/*
CH08-320142
a3 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
//	Critter c;
	string name;
	int hunger;
	int boredom;
	double height;
	double thirst;
	cout<<endl<<"Please enter data: "<<endl;
	cout<<"Name: ";
	getline(cin, name);
//	c.setName(name);
//	c.setName(name);
	cout<<"Hunger: ";
	cin>> hunger;
//	c.setHunger(hunger);
	cout<<"Boredom: ";
	cin>>boredom;
	cout<<"Height: ";
	cin>>height;
	cout<<"Thirst: ";
	cin>>thirst;
	Critter c(name,hunger,boredom,height,thirst);
	cout << "You have created:" << endl;
	c.print();
    return 0;
}
