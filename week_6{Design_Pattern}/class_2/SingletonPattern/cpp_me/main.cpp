#include<iostream>
#include<algorithm>
using namespace std;

// class of Single Object that exist means : aak hi object ban sakta hai is class se 
class AircraftOne{
private:
    static AircraftOne *aircraftOneInstance;

    // construtor : private
    AircraftOne(){
    }

public:
// this code will make sure that single object hi bane
    static AircraftOne *getInstance(){
        if(aircraftOneInstance == nullptr){
            cout<<"The unique object is created"<<endl;
            aircraftOneInstance = new AircraftOne();
        }
        cout<<"the  object : "<<aircraftOneInstance<<endl;
        return aircraftOneInstance;
    }
};

AircraftOne *AircraftOne::aircraftOneInstance = nullptr;
 
int main(){
    AircraftOne *a1 = AircraftOne::getInstance();
    AircraftOne *a2 = AircraftOne::getInstance();
}