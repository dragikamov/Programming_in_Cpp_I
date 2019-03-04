/*
CH08-320142
a4 p3.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Creature
{
public:
    Creature();
    void run() const;

protected:
    int distance;
};
class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;

private:
    int distFactor;
};
class Animals : public Creature
{
public:
    Animals(int);
    void time() const;
private:
    int speed;
};
class Aliens : public Creature
{
public:
    Aliens(int);
    void lightyears() const;
private:
    int time;
};
