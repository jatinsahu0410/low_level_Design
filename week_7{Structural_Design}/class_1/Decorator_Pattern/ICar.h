#if !defined(ICAR_H)
#define ICAR_H

#include <iostream>
using namespace std;

class ICar{
public:
    float baseWeight = 1500;

    virtual void Start(){};
    virtual void Stop(){};

    virtual float GetWeight(){return baseWeight;};
};

class Scorpio: public ICar{
public:
    void Start() override{
        cout<<"Scorpio started"<<endl;
    };

    void Stop() override{
        cout<<"Scorpio stopped"<<endl;
    };

    float GetWeight() override{
        return baseWeight;
    };
};

// Decorator Pattern 

class ScorpioDecorator: public ICar{
public:
};

// Bullet Proof Car 

class BulletProofCar: public ScorpioDecorator{
public:
    ICar *scor;

    BulletProofCar(ICar *myScorpio){
        this->scor = myScorpio;
    }

    void Start() override{
        scor->Start();
    };

    void Stop() override{
        scor->Stop();
    };

    float GetWeight() override{
        float w = scor->GetWeight();
        cout<<"BaseWeight: "<<w<<endl;
        return (400.00 + w);
    }
};

#endif