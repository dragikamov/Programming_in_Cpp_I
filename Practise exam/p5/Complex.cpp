/*
CH08-320142
p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    float c,d,e,f;
    cout<<"Enter values for the first complex number"<<endl;
    cin>>c>>d;
    cout<<"Enter values for the second complex number"<<endl;
    cin>>e>>f;
    Complex a(c,d);
    Complex b(e,f);
    cout<<"Printing:"<<endl;
    cout<<"a="<<a<<endl<<endl;
    cout<<"b="<<b<<endl<<endl;
    cout<<"Checking the relation between a and b"<<endl;
    if(a<b)
    {
        cout<<"a is smaller than b"<<endl;
    }
    else if(a>b)
    {
        cout<<"a is bigger than b"<<endl;
    }
    return 0;
}
