/*
CH08-320142
p6.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

class worker
{
private:
    int n;
    string name;
public:
    worker();
    worker(int,string);
    ~worker();
    friend ostream& operator<<(ostream &os,const worker &a);
//    friend istream& operator>>(istream &in,worker &a);
};

worker::worker()
{
    cout<<"Empty constructor called"<<endl;
}

worker::worker(int k, string d)
{
    n=k;
    name=d;
}

worker::~worker()
{
    cout<<"Destructing: "<<name<<endl;
}

ostream& operator<<(ostream &os, const worker &a)
{
    os<<a.n<<" "<<a.name<<endl;
    return os;
}

//istream& operator>>(istream &in, worker &a)
//{
//    in>>a.n>>a.name;
//    return in;
//}
