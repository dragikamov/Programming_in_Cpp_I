/*
CH08-320142
a5 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{
    Player a((char*)"Leonel",(char*)"Messi",(char*)"1970-01-01",1.8,"Player","Barcelona",7,"Attacker",10,"left-footed");
    Player b((char*)"Ronaldo",(char*)"Christiano",(char*)"1970-01-01",1.9,"Player","Madrid",1,"Left-back",5,"right-footed");
    Player c((char*)"Valentino",(char*)"Rossi",(char*)"1970-01-01",1.7,"Goal-keeper","Monaco",3,"Goal-keeper",0,"right-footed");
    Referee d((char*)"John",(char*)"Wayne",(char*)"1970-01-01",2,"Referee","Dubai");
    cout<<endl<<endl;

    if(d.addToYellowCardList(&a)==0)
    {
        cout<<"Failed adding of yellow card"<<endl;
    }
    if(d.addToYellowCardList(&a)==0)
    {
        cout<<"Failed adding of yellow card"<<endl;
    }
    if(d.addToRedCardList(&b)==0)
    {
        cout<<"Failed adding of red card"<<endl;
    }
    if(d.addToRedCardList(&b)==0)
    {
        cout<<"Failed adding of red card"<<endl;
    }

    cout<<endl<<endl;
    return 0;
}
