/*
CH08-320142
a6 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    string color[4]= {"Red","Black","Violet","Blue"};
    int die;
    int c = 0;
    int randomNumber;
    srand(static_cast<unsigned int>(time(0)));
    while (c < 15)
    {
        randomNumber = rand();
        die = (randomNumber % 4);
        cout << color[die] << endl;
        c++;
    }
    return 0;
}
