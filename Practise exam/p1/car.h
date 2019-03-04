/*
CH08-320142
p1.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Car
{
private:
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
    std::cout<<"Destroying: "<<brand<<" "<<model<<std::endl;
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
