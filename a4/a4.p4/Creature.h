/*
CH08-320142
a4 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/
class Creature
{
public:
    Creature();
    void run() const;
    ~Creature();
protected:
    int distance;
};
class Wizard : public Creature
{
public:
    Wizard(int);
    void hover() const;
    ~Wizard();
private:
    int distFactor;
};
class Animal : public Creature
{
public:
    Animal(int);
    void time() const;
    ~Animal();
private:
    int speed;
};
class Alien : public Creature
{
public:
    Alien(int);
    void lightyears() const;
    ~Alien();
private:
    int time;
};
