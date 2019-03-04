/*
CH08-320142
p7.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "3D-objects.h"

using namespace std;

int main()
{
    Object3D a("Plane");
    Sphere b("Sphere", 3.14);
    Cylinder c("Cylinder", 2, 4);
    RectPrism d("RectPrism", 3, 2, 1);
    Cube e("Cube", 4);
    cout<<"In a "<<a.getName()<<" there is: "<<endl;
    cout<<"Volume of "<<b.getName()<<" is "<<b.volume()<<endl;
    cout<<"Volume of "<<c.getName()<<" is "<<c.volume()<<endl;
    cout<<"Volume of "<<d.getName()<<" is "<<d.volume()<<endl;
    return 0;
}
