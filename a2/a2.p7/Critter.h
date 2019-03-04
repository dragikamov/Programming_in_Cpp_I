/*
CH08-320142
a2 p7.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/
#include <string>

class Critter
{
private:
	std::string name;
	int hunger;
	bool sleep;
	double weight;

public:

	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setSleep(std::string& newsleep);
	void setWeight(double newweight);
	void print();
};
