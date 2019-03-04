/*
CH08-320142
p7.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

using namespace std;

class Object3D
{
protected:
    string name;
public:
    Object3D();
    Object3D(string);
    ~Object3D();
    string getName();
};

Object3D::Object3D()
{
    cout<<"Empty constructor called"<<endl;
}

Object3D::Object3D(string n)
{
    name=n;
}

Object3D::~Object3D()
{
    cout<<"Destroying: "<<name<<endl;
}

string Object3D::getName()
{
    return name;
}

class Sphere : public Object3D
{
private:
    double radius;
public:
    Sphere(string,double);
    ~Sphere();
    double volume();
};

Sphere::Sphere(string n, double d) : Object3D(n)
{
    radius=d;
}

Sphere::~Sphere()
{
    cout<<"Destroying: "<<name<<endl;
}

double Sphere::volume()
{
    double v;
    v=4/3*3.14*radius*radius*radius;
    return v;
}

class Cylinder : public Object3D
{
private:
    double radius;
    double height;
public:
    Cylinder(string,double,double);
    ~Cylinder();
    double volume();
};

Cylinder::Cylinder(string n, double d, double e) : Object3D(n)
{
    radius=d;
    height=e;
}

Cylinder::~Cylinder()
{
    cout<<"Destroying: "<<name<<endl;
}

double Cylinder::volume()
{
    double v=3.14*radius*radius*height;
    return v;
}

class RectPrism : public Object3D
{
private:
    double x,y,z;
public:
    RectPrism(string,double,double,double);
    ~RectPrism();
    double volume();
};

RectPrism::RectPrism(string n, double a, double b, double c) : Object3D(n)
{
    x=a;
    y=b;
    z=c;
}

RectPrism::~RectPrism()
{
    cout<<"Destroying: "<<name<<endl;
}

double RectPrism::volume()
{
    double v=x*y*z;
    return v;
}

class Cube : public Object3D
{
private:
    double side;
public:
    Cube(string,double);
    ~Cube();
    double volume();
};

Cube::Cube(string n, double d) : Object3D(n)
{
    side=d;
}

Cube::~Cube()
{
    cout<<"Destroying: "<<name<<endl;
}

double Cube::volume()
{
    double v=side*side*side;
    return v;
}
