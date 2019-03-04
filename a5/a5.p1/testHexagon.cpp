/*
CH08-320142
a5 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
    Hexagon a("Hex 1", 1.0, 2.0, 9,"blue");
    Hexagon b("Hex 2", 2.0, 3.0, 15, "green");
    Hexagon c(b);
    a.print();
    b.print();
    c.print();
    return 0;
}
