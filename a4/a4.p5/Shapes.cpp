/*
CH08-320142
a4 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n)
{}

void Shape::printName() const
{
	cout << name << endl;
}

void Shape::setName(string &f)
{
    name=f;
}

string Shape::getName()
{
    return name;
}

Shape::Shape(){}

Shape::Shape(const Shape &k)
{
    name=k.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n)
{
	x = nx;
	y = ny;
}

void CenteredShape::setXY(double g,double h)
{
    x=g;
    y=h;
}

double CenteredShape::getX()
{
    return x;
}

double CenteredShape::getY()
{
    return y;
}

CenteredShape::CenteredShape(){}

CenteredShape::CenteredShape(const CenteredShape &l)
{
    x=l.x;
    y=l.y;
    name=l.name;
}
void CenteredShape::move(double a, double b)
{
    x+=a;
    y+=b;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) : CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

void RegularPolygon::setEdgesNumber(int u)
{
    EdgesNumber=u;
}

int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

RegularPolygon::RegularPolygon(){}

RegularPolygon::RegularPolygon(const RegularPolygon& b)
{
    EdgesNumber=b.EdgesNumber;
    x=b.x;
    y=b.y;
    name=b.name;
}

Circle::Circle(const string& n, double nx, double ny, double r) : CenteredShape(n,nx,ny)
{
	Radius = r;
}

void Circle::setRadius(double s)
{
    Radius=s;
}

double Circle::getRadius()
{
    return Radius;
}

double Circle::perimeter()
{
    return 2*Radius*3.14;
}

double Circle::area()
{
    return 3.14*Radius*Radius;
}

Circle::Circle(){}

Circle::Circle(const Circle& c)
{
    Radius=c.Radius;
    x=c.x;
    y=c.y;
    name=c.name;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : RegularPolygon(n,nx,ny,4)
{
    rwidth=nwidth;
    rheight=nheight;
}

void Rectangle::setWidthHeight(double d,double f)
{
    rwidth=d;
    rheight=f;
}

double Rectangle::getWidth()
{
    return rwidth;
}

double Rectangle::getHeight()
{
    return rheight;
}

double Rectangle::perimeter()
{
    return (2*rwidth)+(2*rheight);
}

double Rectangle::area()
{
    return rwidth*rheight;
}

Rectangle::Rectangle(){}

Rectangle::Rectangle(const Rectangle& i)
{
    rwidth=i.rwidth;
    rheight=i.rheight;
    name=i.name;
    x=i.x;
    y=i.y;
}

Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n,nx,ny,nside,nside)
{
    sside=nside;
}

void Square::setSide(double r)
{
    sside=r;
}

double Square::getSide()
{
    return sside;
}

double Square::perimeter()
{
    return 4*sside;
}

double Square::area()
{
    return sside*sside;
}

Square::Square(){}

Square::Square(const Square& j)
{
    sside=j.sside;
    name=j.name;
    x=j.x;
    y=j.y;
}
