/*
CH08-320142
a4 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    cout<<"Creating an Creature.\n";
    Creature c;
    c.run();
    cout<<"\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    cout<<endl<<"Creating an Animal."<<endl;
    Animals a(2);
    a.run();
    a.time();
    cout<<endl<<"There already exists an Alien"<<endl;
    Aliens b(5);
    b.lightyears();
    return 0;
}
