#if !defined(SCORPIO_H)
#define SCORPIO_H
#include<iostream>
#include<algorithm>
using namespace std;

class ScorpioImplementaion{
public:
    virtual bool isRightHanded(){};

    virtual void safetyReq(){};
};

class ScorpioN_imp_India: public ScorpioImplementaion{
    bool isRightHanded() override{
        return true;
    }

    void safetyReq() override{
        cout << "Scorpio N - India safety Requirement." << endl;
    }
};

class ScorpioN_imp_USA: public ScorpioImplementaion{
public:
    bool isRightHanded() override{
        return false;
    }

    void safetyReq() override{
        cout << "Scorpio N - USA: Safety Requirements." << endl;
    }
};

#endif