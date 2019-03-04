/*
CH08-320142
a4 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Animals::Animals(int a) : speed(a)
{}

void Animals::time() const
{
    cout<<"Crossing that distance("<<distance<<" m) for "<<(distance/speed)<<" seconds!\n";
}

Aliens::Aliens(int a) : time(a)
{}

void Aliens::lightyears() const
{
    cout<<"Aliens are crossing "<<time*distance*1000<<" lightyears of distance in that time."<<endl;
}
