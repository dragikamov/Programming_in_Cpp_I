/*
CH08-320142
a5 p2.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

class TournamentMember
{
private:
    char fname[36];
    char lname[36];
    char bday[11];
    static std::string location;
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

inline void TournamentMember::setLocation(std::string a)
{
    location=a;
}
inline void TournamentMember::setFname(char *a)
{
    for(int i=0;i<35;i++)
    {
        fname[i]=a[i];
    }
}
inline void TournamentMember::setLname(char *a)
{
    for(int i=0;i<35;i++)
    {
        lname[i]=a[i];
    }
}
inline void TournamentMember::setBday(char *a)
{
    for(int i=0;i<11;i++)
    {
        bday[i]=a[i];
    }
}
inline void TournamentMember::setHeight(double a)
{
    height=a;
}
inline void TournamentMember::setRole(std::string a)
{
    role=a;
}
inline std::string TournamentMember::getLocation()
{
    return location;
}
inline std::string TournamentMember::getFname()
{
    return fname;
}
inline std::string TournamentMember::getLname()
{
    return lname;
}
inline std::string TournamentMember::getBday()
{
    return bday;
}
inline std::string TournamentMember::getRole()
{
    return role;
}
inline double TournamentMember::getHeight()
{
    return height;
}
