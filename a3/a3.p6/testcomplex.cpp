/*
CH08-320142
a3 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex x,y;
	int a,b,c,d;
	cout<<"Enter the real part of the first number: ";
	cin>>a;
	cout<<"Enter the imaginary part of the first number: ";
	cin>>b;
	cout<<"Enter the real part of the second number: ";
	cin>>c;
	cout<<"Enter the imaginary part of the second number: ";
	cin>>d;
	x.setReal(a);
	x.setImag(b);
	y.setReal(c);
	y.setImag(d);
	cout<<"Conjugate of the first number"<<endl;
	x.conj(a,b);
	cout<<"The addition:"<<endl;
	Complex n=x.add(y);
	n.print();
	cout<<"The subtraction:"<<endl;
	Complex m=x.sub(y);
	m.print();
	cout<<"The multiplication:"<<endl;
	Complex l=x.mul(y);
	l.print();
	return 0;
}
