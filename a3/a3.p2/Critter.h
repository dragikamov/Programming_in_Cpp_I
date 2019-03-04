/*
CH08-320142
a3 p2.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <string>

class Critter
{
private:
	std::string name;
	int hunger;
	int boredom;
	double height;

public:
	Critter();
	Critter(std::string&);
	Critter(std::string&, int, int, double=10);
	void print();
};
