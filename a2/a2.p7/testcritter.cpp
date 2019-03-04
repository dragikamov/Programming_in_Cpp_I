/*
CH08-320142
a2 p7.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
	Critter c;
	string name,sleepness;
	int hunger;
	double weight;
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	getchar();
	cout<<"Are you sleepy? Yes or No"<<endl;
	getline(cin, sleepness);
	c.setSleep(sleepness);
	cout<<"How much do you weight in grams?"<<endl;
	cin>>weight;
	c.setWeight(weight);
	cout << "You have created:" << endl;
	c.print();
    return 0;
}
