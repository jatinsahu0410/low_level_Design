#include<iostream>
#include<vector>
#include<algorithm>
#include "IEngine.h"
#include "IVehicleFactory.h"
using namespace std;

// car wali layer 
class Car{
    IEngine* engine;
    IVehicleFactory* carFactory;
public:
    Car(IVehicleFactory *factory){
        this->carFactory = factory;
    }

    void driveCar(){
        carFactory->createCar();
        cout<<"Ban gai car then chill bro"<<endl;
    }
};
 
int main(){
    IVehicleFactory *factory1 = new ScorpioFactory();
    IVehicleFactory *factory2 = new DefenderFactory();
    Car *car1 = new Car(factory1);
    Car *car2 = new Car(factory2);

    vector<Car*> list;
    list.push_back(car1);
    list.push_back(car2);

    for(Car *car: list){
        car->driveCar();
    }
}