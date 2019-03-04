/*
CH08-320142
a3 p6.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Complex {
private:
	double real;
	double imag;
public:
    Complex();
	Complex(double,double=0);
	void setReal(int);
	void setImag(int);
	int getReal();
	int getImag();
	void conj(int,int);
	Complex add(Complex &p);
	Complex sub(Complex &p);
	Complex mul(Complex &p);
	~Complex();
	void print();
};

