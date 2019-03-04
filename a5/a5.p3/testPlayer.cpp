/*
CH08-320142
a5 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{
    Player a((char*)"Leonel",(char*)"Messi",(char*)"1970-01-01",1.8,"Player","Monaco",7,"Attacker",10,"left-footed");
    Player b((char*)"Ronaldo",(char*)"Christiano",(char*)"1970-01-01",1.9,"Player","Monaco",1,"Left-back",5,"right-footed");
    Player c((char*)"Valentino",(char*)"Rossi",(char*)"1970-01-01",1.7,"Goal-keeper","Monaco",3,"Goal-keeper",0,"right-footed");
    cout<<endl<<"All three members before changes:"<<endl;
    a.print();
    b.print();
    c.print();
    cout<<endl<<"After changing their location to Hamburg:"<<endl;
    Player::allLoc(a,b,c);
    a.print();
    b.print();
    c.print();
    cout<<endl<<"Adding goals scored"<<endl;
    a.add();
    a.add();
    c.add();
    cout<<endl<<"End results"<<endl;
    a.print();
    b.print();
    c.print();
    cout<<endl;
    return 0;
}
