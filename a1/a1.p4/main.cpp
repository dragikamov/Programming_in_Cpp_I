/*
CH08-320142
a1 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <string.h>

using namespace std;
int mycount(int x, int y)
{
    return y-x;
}
int mycount(char n, string h)
{
    int r=0,i=0,s=h.length();
    for(i=0;i<s;i++)
    {
        if(n==h[i])
        {
            r++;
        }
    }
    return r;
}
int main()
{
    int a=7, b=3;
    char j='i';
    string k="this is string";
    cout<<"Calculting for the numbers: "<<mycount(a,b)<<endl;
    cout<<"Calculating for the occurance counting: "<<mycount(j,k)<<endl;
    return 0;
}
