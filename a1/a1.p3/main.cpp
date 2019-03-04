/*
CH08-320142
a1 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cmath>

using namespace std;
float absolute(float x)
{
    x=x*x;
    x=sqrt(x);
    return x;
}
int main()
{
    float f;
    cout<<"Enter a value for f:"<<endl;
    cin>>f;
    f=absolute(f);
    cout<<"The absolute value of f is: "<<f<<endl;
    return 0;
}
