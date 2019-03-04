/*
CH08-320142
p5.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Complex
{
private:
    float real;
    float imag;
public:
    Complex();
    Complex(float, float = 0);
    double magnitude();
    void print();
    friend ostream& operator<<(ostream &os, const Complex &a);
    bool operator<(Complex&);
	bool operator>(Complex&);
};

Complex::Complex()
{
    cout<<"Empty constructor called"<<endl;
}

Complex::Complex(float a, float b)
{
    real=a;
    imag=b;
}

double Complex::magnitude()
{
    return (double)real;
}

void Complex::print()
{
    if (imag)
        cout << noshowpos << real << showpos << imag << "i" << endl;
    else
        cout << noshowpos << real << endl;
}

ostream& operator<<(ostream &os, const Complex &a)
{
    if(a.imag)
    {
        os << noshowpos << a.real << showpos << a.imag << "i";
    }
    else
    {
        os << noshowpos << a.real;
    }
    return os;
}

bool Complex::operator<(Complex &a)
{
	if(magnitude()<=a.magnitude())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Complex::operator>(Complex &a)
{
	if(magnitude()>=a.magnitude())
    {
        return true;
    }
    else
    {
        return false;
    }
}
