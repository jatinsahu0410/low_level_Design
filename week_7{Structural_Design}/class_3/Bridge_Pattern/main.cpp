#include<iostream>
#include<algorithm>
#include "ScorpioImplementaion.h"
using namespace std;

class Scorpio{
public:
    // Bridge to connect with the implemantation by using composition 
    ScorpioImplementaion *scorpioImp; 
    // this is very imp 
    Scorpio(ScorpioImplementaion *sc){
        this->scorpioImp = sc;
    }

    virtual bool isRightHanded(){};
    virtual void safetyReq(){};
};

class ScorpioN: public Scorpio{
public:
    ScorpioN(ScorpioImplementaion *sc): Scorpio(sc){};
    
    void safetyReq() override{
        scorpioImp->safetyReq();
    };

    bool isRightHanded() override{
        return scorpioImp->isRightHanded();
    }
};

int main(){
    Scorpio *scorpio = new ScorpioN(new ScorpioN_imp_India());
    scorpio->safetyReq();
    cout << scorpio->isRightHanded() << endl;

    Scorpio *carUSA = new ScorpioN(new ScorpioN_imp_USA);
    carUSA->safetyReq();
    cout << carUSA->isRightHanded() << endl;
}