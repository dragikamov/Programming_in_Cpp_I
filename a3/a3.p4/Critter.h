/*
CH08-320142
a3 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <string>
class Critter
{
private:
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;

public:
	Critter(std::string&,int,int,double,double);
//	void setName(std::string& newname);
//	void setHunger(int newhunger);
//	void setBoredom(int newboredom);
//	void setHeight(double newHeight);
//	int getHunger();
	void print();
};
