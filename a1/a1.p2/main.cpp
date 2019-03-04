/*
CH08-320142
a1 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    double x;
    string s;
    cout<<"Enter n,x,s"<<endl;
    cin>>n>>x>>s;
    for(int i=0;i<n;i++)
    {
        cout<<s<<": "<<x<<endl;
    }
    return 0;
}
