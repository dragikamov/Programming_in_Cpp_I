/*
CH08-320142
p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "taxi.h"

using namespace std;

int main()
{
    Taxi a("Tesla","S",150000,5);
    Taxi b;
    b.setBrand("Tesla");
    b.setModel("X");
    b.setPrice(90000);
    b.setPass(3);
    cout<<"Printing: "<<endl;
    a.print();
    cout<<endl;
    b.print();
    return 0;
}
