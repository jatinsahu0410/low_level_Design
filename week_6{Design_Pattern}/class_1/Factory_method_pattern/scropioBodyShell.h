#if !defined(SCORPIO_BODYSHELL_H)
#define SCORPIO_BODYSHELL_H
#include<iostream>
using namespace std;

// interface 
class ScorpioBodyShell{
    virtual void bodyShell() = 0;
};

// implementation

class ScorpioMBodyShell : public ScorpioBodyShell{
    void bodyShell() override{
        cout << "Scorpio Body Shell" << endl;
    }
};

class ScorpioNBodyShell : public ScorpioBodyShell{
    void bodyShell() override{
        cout << "ScorpioNBodyShell" << endl;
    }
};

class ScorpioClassicBodyShell : public ScorpioBodyShell{
    void bodyShell() override{
        cout << "ScorpioClassicBodyShell" << endl;
    }
};

#endif