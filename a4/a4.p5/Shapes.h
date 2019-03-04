/*
CH08-320142
a4 p5.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{
    protected:
            std::string name;
    public:
            Shape(const std::string&);
            Shape();
            Shape(const Shape&);
            void printName() const ;
            void setName(std::string&);
            std::string getName();
};

class CenteredShape : public Shape
{
    protected:
            double x,y;
    public:
            CenteredShape(const std::string&, double, double);
            CenteredShape();
            CenteredShape(const CenteredShape&);
            void move(double, double);
            void setXY(double,double);
            double getX();
            double getY();
};

class RegularPolygon : public CenteredShape
{
    private:
            int EdgesNumber;
    public:
            RegularPolygon(const std::string&, double, double, int);
            RegularPolygon();
            RegularPolygon(const RegularPolygon&);
            void setEdgesNumber(int);
            int getEdgesNumber();
};

class Circle : public CenteredShape
{
    private:
            double Radius;
    public:
            Circle(const std::string&, double, double, double);
            Circle();
            Circle(const Circle&);
            void setRadius(double);
            double getRadius();
            double perimeter();
            double area();
};

class Rectangle : public RegularPolygon
{
    private:
            double rwidth,rheight;
    public:
            Rectangle(const std::string&, double, double, double, double);
            Rectangle();
            Rectangle(const Rectangle&);
            void setWidthHeight(double,double);
            double getWidth();
            double getHeight();
            double perimeter();
            double area();
};

class Square : public Rectangle
{
    private:
            double sside;
    public:
            Square(const std::string&, double, double, double);
            Square();
            Square(const Square&);
            void setSide(double);
            double getSide();
            double perimeter();
            double area();
};
#endif
