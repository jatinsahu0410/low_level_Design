#if !defined(SCORPIO_ENGINE_H)
#define SCORPIO_ENGINE_H
#include <iostream>
using namespace std;

// interface for the scorpio engine

class ScorpioEngine
{
public:
    virtual void engine() = 0;
};

class ScorpioEng : public ScorpioEngine
{
    void engine() override
    {
        cout << "Engine of Scorpio" << endl;
    }
};

// class for scorpio
class ScorpioNEngine : public ScorpioEngine
{
    // implementation
    void engine() override
    {
        cout << "Scorpio N Engine" << endl;
    }
};

class ScorpioClassicEngine : public ScorpioEngine
{
    void engine() override
    {
        cout << "Scorpio Classic Engine" << endl;
    }
};

#endif