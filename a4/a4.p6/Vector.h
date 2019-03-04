/*
CH08-320142
a4 p6.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Vector
{
private:
    double *vsize;
    int num;
public:
    Vector();
    Vector(double*);
    Vector(const Vector&);
    ~Vector();
    void print();
    void setSize(double*);
    void setN(int);
    double getSize(int);
    Vector add(const Vector&);
    double norm();
    Vector diff(const Vector&);
    double pro(const Vector&);
};
