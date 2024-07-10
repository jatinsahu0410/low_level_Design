#if !defined(ICAR_H)
#define ICAR_H
#include <iostream>
#include <algorithm>
using namespace std;

class ICar
{
public:
    virtual void turnLeft() {};
    virtual void turnRight() {};
    virtual void accelerate() {};
};

// this interface will be implemented by both real object and proxy
class Car : public ICar
{
public:
    void turnLeft() override
    {
        cout << "Car turns left" << endl;
    }

    void turnRight() override
    {
        cout << "Car turns right" << endl;
    }

    void accelerate() override
    {
        cout << "Car accelerates with 1.5" << endl;
    }
};

class RemoteProxy : public ICar
{
    Car *car = new Car();

public:
    void turnLeft()
    {
        cout << "RemoteProxy left" << endl;
        car->turnLeft();
    };
    void turnRight()
    {
        cout << "RemoteProxy right" << endl;
        car->turnRight();
    }

    void accelerate()
    {
        car->accelerate();
    }
    ~RemoteProxy()
    {
        delete car;
    }
};

#endif