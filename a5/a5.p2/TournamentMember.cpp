/*
CH08-320142
a5 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;
string TournamentMember::location;
TournamentMember::TournamentMember()
{
    cout<<"Empty object created."<<endl;
}
TournamentMember::TournamentMember(char *n, char *l, char *b, double a,string r, string loc)
{
    for(int i=0;i<35;i++)
    {
        fname[i]=n[i];
        lname[i]=l[i];
        if(i<11)
        {
            bday[i]=b[i];
        }
    }
    height=a;
    role=r;
    location=loc;
    cout<<"Object "<<fname<<" "<<lname<<" created."<<endl;
}
TournamentMember::TournamentMember(const TournamentMember &a)
{
    for(int i=0;i<35;i++)
    {
        fname[i]=a.fname[i];
        lname[i]=a.lname[i];
        if(i<11)
        {
            bday[i]=a.bday[i];
        }
    }
    height=a.height;
    role=a.role;
    location=a.location;
    cout<<"Object "<<a.fname<<" "<<a.lname<<" copied."<<endl;
}
TournamentMember::~TournamentMember()
{
    cout<<"Destroying object: "<<fname<<" "<<lname<<endl;
}
void TournamentMember::print()
{
    cout<<endl<<"First name: "<<fname<<endl;
    cout<<"Last name: "<<lname<<endl;
    cout<<"Birthday: "<<bday<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Role: "<<role<<endl;
    cout<<"Current location: "<<location<<endl;
}
