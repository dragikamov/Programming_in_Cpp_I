/*
CH08-320142
a1 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    bool i=0;
    string tmp,s;
    while(i==0)
    {
        getline(cin,tmp);
        if(tmp=="quit")
        {
            i=1;
            cout<<s;
        }
        else
        {
            s+=tmp;
        }
    }
    return 0;
}
