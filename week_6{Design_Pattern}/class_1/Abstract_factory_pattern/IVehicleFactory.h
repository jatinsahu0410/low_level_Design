#if !defined(IVEHICLEFACTORY_H)
#define HAVE_IVEHICLEFACTORY_H
#include<iostream>
#include "IEngine.h"

using namespace std;

class IVehicleFactory{
public:
    virtual void createCar() = 0;
};


// scorpoi factory 
class ScorpioFactory : public IVehicleFactory{
    IEngine* engine;
public:
    void createCar() override{
        cout << " Making Scorpio Car "<<endl;
        vector<ScorpioEngine *> list;
        list.push_back(new ScorpioClassicEngine);
        list.push_back(new ScorpioNEngine);

        // CALL FOR BOTH THE VARIENTS 
        for(auto *varients : list){
            varients->engine();
        }
    }
};

class DefenderFactory : public IVehicleFactory{
public:
    void createCar() override{
        cout << "Defender Engine ban raha hai" << endl;

        vector<DefenderEngine *> list;
        list.push_back(new DefenderSEngine);
        list.push_back(new DefenderBEngine);

        for(auto *varients : list){
            varients->engine();
        }
    }
};

#endif