/*
CH08-320142
a5 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <stdio.h>
#include "TournamentMember.h"

using namespace std;

int main()
{
    while(1)
    {
        cout<<endl<<"Would you like to create a new object or quit?"<<endl;
        cout<<"(new/quit)"<<endl;
        string a;
        getline(cin,a);
        if(a=="quit")
        {
            break;
        }
        if(a=="new")
        {
            cout<<"How many members do you want to enter?"<<endl;
            int n;
            cin>>n;
            cin.get();
            TournamentMember *j;
            j=new TournamentMember[n];
            for(int i=0;i<n;i++)
            {
                char a[36],b[36],c[11];
                string d,f;
                double e;
                cout<<"Enter first name: ";
                cin.getline(a,36);
                cout<<"Enter last name: ";
                cin.getline(b,36);
                cout<<"Enter birthday: ";
                cin.getline(c,11);
                cout<<"Enter height: ";
                cin>>e;
                cin.get();
                cout<<"Enter the role of the member: ";
                getline(cin,f);
                cout<<"Enter current location: ";
                getline(cin,d);
                j[i].setFname(a);
                j[i].setLname(b);
                j[i].setBday(c);
                j[i].setHeight(e);
                j[i].setLocation(d);
                j[i].setRole(f);
                cout<<endl;
            }
            cout<<endl<<"Printing all members:"<<endl;
            for(int i=0;i<n;i++)
            {
                j[i].print();
            }
            delete []j;
        }
    }
    return 0;
}
