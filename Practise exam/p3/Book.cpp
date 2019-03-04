/*
CH08-320142
p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "book.h"

using namespace std;

int main()
{
    Book a("Harry Potter",150);
    Book b(a);
    cout<<"Printing"<<endl;
    a.print();
    cout<<endl;
    b.print();
    return 0;
}
