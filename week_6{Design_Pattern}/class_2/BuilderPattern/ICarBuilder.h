#if !defined(ICARBUILDER_H)
#define ICARBUILDER_H
#include<iostream>
#include "ICar.h"
using namespace std;

class ICarBuilder{
public:
    virtual void buildEngine() = 0;

    virtual void buildBodyShell() = 0;
    virtual void buildTyres() = 0;

    virtual ICar build() = 0; 
};

class ScorpioBuilder : public ICarBuilder{
public:
    Scorpio s1;
    void buildEngine() override{
        cout<<"Builds the engine of the Scorpio"<<endl;
    }

    void buildBodyShell() override{
        cout<<"Builds the body of the Scorpio"<<endl;
    }

    void buildTyres() override{
        cout<<"Builds the tyres of the Scorpio"<<endl;
    }

    ICar build() override{
        cout<<"Scorpio is ready "<<endl;
        return s1;
    }
};

class FortunerBuilder : public ICarBuilder{
public:
    Fortuner f1;
    void buildEngine() override{
        cout<<"Builds the engine of the Fortuner"<<endl;
    }
    void buildBodyShell() override{
        cout<<"Builds the body of the Fortuner"<<endl;
    }
    void buildTyres() override{
        cout<<"Builds the tyres of the Fortuner"<<endl;
    }

    ICar build() override{
        cout<<"Fortuner is ready "<<endl;
        return f1;
    }
};

#endif 