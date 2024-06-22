#include<iostream>
#include<algorithm>
#include "ICar.h"
#include "ICarBuilder.h"
using namespace std;

// Director Class 
class Director{
public:
    ICarBuilder *carBuilder;

    Director(ICarBuilder *builder){
        this->carBuilder = builder;
    }

    // instruction given to builder using contructor function:
    void constructCar(){
        carBuilder->buildEngine();
        carBuilder->buildBodyShell();
        carBuilder->buildTyres();
    }
};
 
int main(){
    ICarBuilder *builder = new ScorpioBuilder();
    Director *director = new Director(builder);
    // guidence 
    director->constructCar();
    ICar car = builder->build();

    ICarBuilder *builder2 = new FortunerBuilder();
    Director *director2 = new Director(builder2);
    director2->constructCar();
    ICar Car2 = builder2->build();
}