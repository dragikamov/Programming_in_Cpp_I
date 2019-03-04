/*
CH08-320142
a5 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Hexagon::Hexagon(const string n, double nx, double ny, int s, string c) :
    RegularPolygon(n,nx,ny,6)
{
    side=s;
    color=c;
}
Hexagon::Hexagon(const Hexagon &a) : Hexagon(a.name,a.x,a.y,a.side,a.color)
{}
Hexagon::~Hexagon()
{
    cout<<"Destructing "<<name<<endl;
}
void Hexagon::setSide(int a)
{
    side=a;
}
void Hexagon::setColor(string a)
{
    color=a;
}
int Hexagon::getSide() const
{
    return side;
}
string Hexagon::getColor() const
{
    return color;
}
void Hexagon::print()
{
    cout<<endl<<"The hexagon with name "<<name<<" and size of side ";
    cout<<side<<" with "<<color<<" color, "<<endl;
    cout<<"has area of "<<area()<<" and perimeter of "<<perimeter()<<endl;
}
double Hexagon::area()
{
    double s=(double)side;
    return s*s*3*sqrt(3)/2;
}
double Hexagon::perimeter()
{
    return 6*side;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}
