/*
CH08-320142
p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car a("Tesla","S",150000);
    Car b;
    b.setBrand("Tesla");
    b.setModel("X");
    b.setPrice(90000);
    cout<<"Printing: "<<endl;
    a.print();
    cout<<endl;
    b.print();
    return 0;
}
