/*
CH08-320142
a4 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

Box::Box()
{
    width=0;
    height=0;
    depth=0;
    cout<<"Empty constructor called"<<endl;
}
Box::Box(int a,int b,int c)
{
    width=a;
    height=b;
    depth=c;
    cout<<"New box created"<<endl;
}
Box::Box(const Box &x)
{
    height=x.height;
    width=x.width;
    depth=x.depth;
}
void Box::setWidth(int a)
{
    width=a;
}
void Box::setHeight(int b)
{
    height=b;
}
void Box::setDepth(int c)
{
    depth=c;
}
int Box::getWidth()
{
    return width;
}
int Box::getHeight()
{
    return height;
}
int Box::getDepth()
{
    return depth;
}
void Box::volume()
{
    int v;
    v=height*width*depth;
    cout<<"The volume of the box is: "<<v<<endl;
}
Box::~Box()
{
    cout<<"Destructing box"<<endl;
}
