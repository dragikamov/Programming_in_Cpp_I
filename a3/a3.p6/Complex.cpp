/*
CH08-320142
a3 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    real = 0;
    imag = 0;
    cout << "Constructor one is being called" << endl;
}
Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
    cout << "Constructor two is being called" << endl;
}
void Complex::setReal(int q)
{
    real=q;
}
void Complex::setImag(int w)
{
    imag=w;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImag()
{
    return imag;
}
void Complex::conj(int a,int b)
{
    b*=(-1);
    cout<<noshowpos<<a<<showpos<<b<<"i"<<endl;
}
Complex Complex::add(Complex &p)
{
    return Complex(real+p.real,imag+p.imag);
}
Complex Complex::sub(Complex &p)
{
    return Complex(p.real-real,p.imag-imag);
}
Complex Complex::mul(Complex &p)
{
    return Complex((real*p.real) - (imag*p.imag),(imag*p.real)+(real*p.imag));
}
Complex::~Complex()
{
    if(imag)
    {
        cout<<"Destructing "<<noshowpos<<real<<showpos<<imag<<"i"<<endl;
    }
    else
    {
        cout<<"Destructing "<<noshowpos<<real<<showpos<<endl;
    }
}
void Complex::print()
{
    if (imag)
    {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    }
    else
    {
        cout << noshowpos << real << showpos << endl;
    }

}
