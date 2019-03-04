/*
CH08-320142
p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "worker.h"

using namespace std;

int main()
{
    worker a(234, "John McEnroe");
    worker b(324, "Jack Nicholson");
    cout << a << b;
    return 0;
}
