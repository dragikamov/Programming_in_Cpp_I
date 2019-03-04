/*
CH08-320142
a3 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	~NaiveString();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
}

NaiveString::~NaiveString()
{
    cout<<"Destructing "<<str<<endl;
}

void NaiveString::update(char oldchar, char newchar) {
	cout<<"Changes oldchar with newchar"<<endl;
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}
void funcByref(NaiveString &s)
{
	cout << "funcByref() being called" << endl;
	s.update('B', 'C');
	s.print();
}
int main()
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	NaiveString b("BbcBBFA");
	cout << "About to call funcByref()" << endl;
	funcByref(b);
	b.print();
}
