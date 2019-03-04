/*
CH08-320142
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <ctime>
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"

using namespace std;

int main()
{
    string color[4]= {"Red","Black","Violet","Blue"};
    int die,robj;
    int c = 0;
    int randomNumber;
    srand(static_cast<unsigned int>(time(0)));
    while (c < 25)
    {
        randomNumber = rand();
        die = (randomNumber % 4);
        randomNumber = rand();
        robj = (randomNumber % 4);
        if(robj==0)
        {
            int robj1;
            randomNumber=rand();
            robj1=(randomNumber % 95)+5;
            Square a(color[die],(double)robj1);
            cout<<"Square "<<color[die]<<" "<<a.calcPerimeter()<<" "<<a.calcArea()<<endl;
        }
        else if(robj==1)
        {
            int robj1;
            randomNumber=rand();
            robj1=(randomNumber % 95)+5;
            Circle a(color[die],(double)robj1);
            cout<<"Circle "<<color[die]<<" "<<a.calcPerimeter()<<" "<<a.calcArea()<<endl;
        }
        else if(robj==2)
        {
            int robj1,robj2;
            randomNumber=rand();
            robj1=(randomNumber % 95)+5;
            randomNumber=rand();
            robj2=(randomNumber % 95)+5;
            Rectangle a(color[die],(double)robj1,(double)robj2);
            cout<<"Rectangle "<<color[die]<<" "<<a.calcPerimeter()<<" "<<a.calcArea()<<endl;
        }
        else if(robj==3)
        {
            int robj1,robj2;
            randomNumber=rand();
            robj1=(randomNumber % 95)+5;
            randomNumber=rand();
            robj2=(randomNumber % 95)+5;
            if(robj1<robj2)
            {
                int tmp=robj1;
                robj1=robj2;
                robj2=tmp;
            }
            Ring a(color[die],(double)robj1,(double)robj2);
            cout<<"Ring "<<color[die]<<" "<<a.calcPerimeter()<<" "<<a.calcArea()<<endl;
        }
        c++;
    }
    return 0;
}
