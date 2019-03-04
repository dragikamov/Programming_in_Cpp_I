/*
CH08-320142
a4 p1.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Box
{
private:
    int width;
    int height;
    int depth;
public:
    Box();
    Box(int,int,int);
    Box(const Box &);
    void setWidth(int);
    void setHeight(int);
    void setDepth(int);
    int getWidth();
    int getHeight();
    int getDepth();
    void volume();
    ~Box();
};
