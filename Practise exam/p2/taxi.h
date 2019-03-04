/*
CH08-320142
p2.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Car
{
protected:
    std::string brand,model;
    int price;
public:
    Car();
    Car(std::string,std::string,int);
    ~Car();
    void setBrand(std::string);
    void setModel(std::string);
    void setPrice(int);
    std::string getBrand();
    std::string getModel();
    int getPrice();
    void print();
};

Car::Car()
{
    std::cout<<"Empty constructor called"<<std::endl;
}
Car::Car(std::string b,std::string m,int p)
{
    brand=b;
    model=m;
    price=p;
}
Car::~Car()
{
    std::cout<<"Destroying Car: "<<brand<<" "<<model<<std::endl;
}
void Car::setBrand(std::string b)
{
    brand=b;
}
void Car::setModel(std::string m)
{
    model=m;
}
void Car::setPrice(int p)
{
    price=p;
}
std::string Car::getBrand()
{
    return brand;
}
std::string Car::getModel()
{
    return model;
}
int Car::getPrice()
{
    return price;
}
void Car::print()
{
    std::cout<<"Car Brand: "<<brand<<std::endl;
    std::cout<<"Car Model: "<<model<<std::endl;
    std::cout<<"Car Price: "<<price<<std::endl;
}

class Taxi : public Car
{
private:
    int n;
public:
    Taxi();
    Taxi(std::string,std::string,int,int);
    ~Taxi();
    void setPass(int);
    int getPass();
    void print();
};

Taxi::Taxi()
{
    std::cout<<"Empty Taxi constructor called"<<std::endl;
}
Taxi::Taxi(std::string b,std::string m,int p,int k) : Car(b,m,p)
{
    n=k;
}
Taxi::~Taxi()
{
    std::cout<<"Destroying Taxi: "<<brand<<" "<<model<<std::endl;
}
void Taxi::setPass(int k)
{
    n=k;
}
int Taxi::getPass()
{
    return n;
}
void Taxi::print()
{
    std::cout<<"Taxi Brand: "<<brand<<std::endl;
    std::cout<<"Taxi Model: "<<model<<std::endl;
    std::cout<<"Taxi Price: "<<price<<std::endl;
    std::cout<<"Number of seats: "<<n<<std::endl;
}
