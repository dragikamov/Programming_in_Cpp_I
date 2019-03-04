/*
CH08-320142
a3 p3.h
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
	void converter(int newhunger);
public:
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	int getHunger();
	void print();
};
