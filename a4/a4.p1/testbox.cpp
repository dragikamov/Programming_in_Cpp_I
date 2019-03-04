/*
CH08-320142
a4 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    Box *i;
    int n;
    cout<<"Enter how many box do you want created: ";
    cin>>n;
    i = new Box[2*n];
    for(int j=0;j<n;j++)
    {
        int w,h,d;
        cout<<"Enter the width of the box: ";
        cin>>w;
        cout<<"Enter the height of the box: ";
        cin>>h;
        cout<<"Enter the depth of the box: ";
        cin>>d;
        i[j].setWidth(w);
        i[j].setHeight(h);
        i[j].setDepth(d);
        i[j+n]=Box(i[j]);
    }

    for(int j=0;j<(2*n);j++)
    {
        i[j].volume();
    }
    delete []i;
    return 0;
}
