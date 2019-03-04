/*
CH08-320142
a5 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

class TournamentMember
{
protected:
    char fname[36];
    char lname[36];
    char bday[11];
    std::string location;
    double height;
    std::string role;
public:
    TournamentMember();
    TournamentMember(char*,char*,char*,double,std::string,std::string);
    TournamentMember(const TournamentMember &);
    ~TournamentMember();
    void print();
    void setLocation(std::string);
    void setFname(char*);
    void setLname(char*);
    void setBday(char*);
    void setHeight(double);
    void setRole(std::string);
    std::string getLocation();
    std::string getFname();
    std::string getLname();
    std::string getBday();
    std::string getRole();
    double getHeight();
};
class Player : public TournamentMember
{
private:
    int num;
    std::string pos;
    int goals;
    std::string leg;
public:
    Player();
    Player(char*,char*,char*,double,std::string,std::string,int,std::string,int,std::string);
    Player(const Player &);
    ~Player();
    void setNumber(int);
    void setPosition(std::string);
    void setLeg(std::string);
    int getNumber();
    std::string getPosition();
    std::string getLeg();
    static void allLoc(Player&,Player&,Player&);
    void print();
    bool operator>(Player);
    void operator=(Player);
    static void GoalSorter(Player&,Player&,Player&);
};

class Referee : public TournamentMember
{
private:
    int yellowCardCount;
    int redCardCount;
    Player *yellowCardList[40];
    Player *redCardList[40];
public:
    Referee(char*,char*,char*,double,std::string,std::string);
    bool addToYellowCardList(Player*);
    bool addToRedCardList(Player*);
};
