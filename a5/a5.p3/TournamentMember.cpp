/*
CH08-320142
a5 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <string.h>
#include "TournamentMember.h"

using namespace std;
string TournamentMember::location="Hamburg";
TournamentMember::TournamentMember()
{
    cout<<"Empty object created."<<endl;
}
TournamentMember::TournamentMember(char *n, char *l, char *b, double a,string r, string loc)
{
    for(int i=0; i<35; i++)
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
    for(int i=0; i<35; i++)
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
void TournamentMember::setLocation(string a)
{
    location=a;
}
void TournamentMember::setFname(char *a)
{
    for(int i=0; i<35; i++)
    {
        fname[i]=a[i];
    }
}
void TournamentMember::setLname(char *a)
{
    for(int i=0; i<35; i++)
    {
        lname[i]=a[i];
    }
}
void TournamentMember::setBday(char *a)
{
    for(int i=0; i<11; i++)
    {
        bday[i]=a[i];
    }
}
void TournamentMember::setHeight(double a)
{
    height=a;
}
void TournamentMember::setRole(string a)
{
    role=a;
}
string TournamentMember::getLocation()
{
    return location;
}
string TournamentMember::getFname()
{
    return fname;
}
string TournamentMember::getLname()
{
    return lname;
}
string TournamentMember::getBday()
{
    return bday;
}
string TournamentMember::getRole()
{
    return role;
}
double TournamentMember::getHeight()
{
    return height;
}

Player::Player()
{
    cout<<"Empty object of Player created."<<endl;
}
Player::Player(char *a, char *b, char *c, double d,string e, string f,int g,string h,int j,string k) :
    TournamentMember(a,b,c,d,e,f)
{
    num=g;
    pos=h;
    goals=j;
    leg=k;
}
Player::Player(const Player &a)
{
//    fname=a.fname;
//    lname=a.lname;
//    bday=a.bday;
    strcpy(fname,a.fname);
    strcpy(lname,a.lname);
    strcpy(bday,a.bday);
    role=a.role;
    height=a.height;
    location=a.location;
    num=a.num;
    pos=a.pos;
    goals=a.goals;
    leg=a.leg;
}
Player::~Player()
{
    cout<<"Destructing player: "<<fname<<" "<<lname<<endl;
}
void Player::setNumber(int a)
{
    num=a;
}
void Player::setPosition(string a)
{
    pos=a;
}
void Player::setLeg(string a)
{
    leg=a;
}
void Player::allLoc(Player &a,Player &b,Player &c)
{
    a.location="Hamburg";
    b.location="Hamburg";
    c.location="Hamburg";
}
void Player::print()
{
    cout<<endl<<"First name: "<<fname<<endl;
    cout<<"Last name: "<<lname<<endl;
    cout<<"Birthday: "<<bday<<endl;
    cout<<"Role: "<<role<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Current location: "<<location<<endl;
    cout<<"Number of player: "<<num<<endl;
    cout<<"Position: "<<pos<<endl;
    cout<<"Goals scored: "<<goals<<endl;
    cout<<"The player is "<<leg<<"."<<endl;
}
int Player::getNumber()
{
    return num;
}
string Player::getPosition()
{
    return pos;
}
string Player::getLeg()
{
    return leg;
}
bool Player::operator>(Player a)
{
    return goals>a.goals;
}
void Player::operator=(Player a)
{
    strcpy(fname,a.fname);
    strcpy(lname,a.lname);
    strcpy(bday,a.bday);
    role=a.role;
    height=a.height;
    location=a.location;
    num=a.num;
    pos=a.pos;
    goals=a.goals;
    leg=a.leg;
}
void Player::add()
{
    goals++;
    cout<<"Goal added to "<<fname<<" "<<lname<<endl;
}
