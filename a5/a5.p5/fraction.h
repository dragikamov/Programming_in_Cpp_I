/*
CH08-320142
a5 p5.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>

using namespace std;    ///I had to put "using namespace std;", because it
                        ///was making errors for the ostream

class Fraction {

private:
	int num;
	int den;

	int gcd(int a, int b);
	int lcm(int a, int b);

public:
	Fraction();
	Fraction(int, int = 1);
	friend ostream& operator<<(ostream &os, const Fraction &a);
	friend istream& operator>>(istream  &in, Fraction &a);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);
};


#endif
