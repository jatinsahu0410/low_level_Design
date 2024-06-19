#include<iostream>
#include<algorithm>
#include<vector>
#include "scorpioEngine.h"
#include "scropioBodyShell.h"

using namespace std;

// Abstract class for all models of scorpio
class Scorpio{
private:
    ScorpioEngine* engine;
    ScorpioBodyShell* bodyShell;
public:
    virtual void makeCar(){
        cout<<"Scorpio main interface engine : "<<endl;
        this->engine = new ScorpioEng();
        this->bodyShell = new ScorpioMBodyShell();
    }
    virtual void driveCar(){
        makeCar();
        cout<<"I am Driving Scropio Parent Interface"<<endl;
    } 
};

class ScropioN : public Scorpio{
private:
    ScorpioEngine* engine;
    ScorpioBodyShell* bodyShell;
public:
    void makeCar() override{
        cout<<"Scorpio N Class me hu"<<endl;
        this->engine = new ScorpioNEngine();
        this->bodyShell = new ScorpioNBodyShell();
    }

    void driveCar() override{
        makeCar();
        cout<<"I am Driving Scropio N Car"<<endl;
    }
};

class ScorpioClassic: public Scorpio{
    ScorpioEngine* engine;
    ScorpioBodyShell* bodyShell;
public:
    void makeCar() override{
        cout<<"Scorpio Classic Class me hu"<<endl;
        this->engine = new ScorpioClassicEngine();
        this->bodyShell = new ScorpioClassicBodyShell();
    }

    void driveCar() override{
        makeCar();
        cout<<"I am Driving Scropio Classic Car"<<endl;
    }
};


// This is simple factory pattren : this is not completely a factory pattern 
class ScorpioFactory{
public:
    Scorpio* createScorpio(char type){
        switch(type){
            case 'N': return new ScropioN();
            case 'C': return new ScorpioClassic();
            default: return new Scorpio();
        }
    }
};

int main(){
    ScropioN *obj = new ScropioN();
    // obj->driveCar();

    ScorpioClassic *obj1 = new ScorpioClassic();
    // obj1->driveCar();

    ScorpioFactory factory;
    Scorpio *car1 = factory.createScorpio('N');

    // here their is two things 1) the user doesn't know the type exact implementation of the contrete class and second thing is that implemention bhi nhi pata laga 
    // car1->driveCar();

    // factory pattern 
    vector<Scorpio*> list;
    list.push_back(new ScropioN());
    list.push_back(new ScorpioClassic());

    for(Scorpio *car: list){
        car->driveCar();
    }
}