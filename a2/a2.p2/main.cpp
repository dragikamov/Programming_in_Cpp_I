/*
CH08-320142
a2 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}
void swap(float &x, float &y)
{
    float tmp;
    tmp=x;
    x=y;
    y=tmp;
}
void swap(char &x, char &y)
{
    float tmp;
    tmp=x;
    x=y;
    y=tmp;
}
int main()
{
    int a=7,b=15;
    float x=3.5,y =9.2;
    const char *str1="One";
    const char *str2="Two";
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<", str2="<<str2<<endl;
    swap(a,b);
    swap(x,y);
    swap(str1,str2);
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<", str2="<<str2<<endl;
    return 0;
}
