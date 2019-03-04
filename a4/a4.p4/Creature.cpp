/*
CH08-320142
a4 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature() : distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature(){}

Wizard::Wizard(int a)
{
    distFactor=a;
}

void Wizard::hover() const
{
    cout << "Hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard(){}
Animal::Animal(int a) : speed(a)
{}

void Animal::time() const
{
    cout<<"Crossing that distance("<<distance<<" m) for "<<(distance/speed)<<" seconds!\n";
}
Animal::~Animal(){}
Alien::Alien(int a) : time(a)
{}

void Alien::lightyears() const
{
    cout<<"Aliens are crossing "<<time*distance*1000<<" lightyears of distance in that time."<<endl;
}
Alien::~Alien(){}
