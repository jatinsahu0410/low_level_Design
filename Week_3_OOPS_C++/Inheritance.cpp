#include <iostream>
#include <algorithm>
using namespace std;

// Implementation of Inheritance in cpp
class Vehicles
{
public:
    string name;
    string model;
    int noOfTyres;

protected: 
    string brand;

private:
    string kindOfVehicle;

public:
    Vehicles(string name, string model, int noOfTyres){
        cout<<"Ctor for vehicle called. "<<endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }
    void startEng()
    {
        cout << "Eng is starting " << endl;
    }

    void stopEng()
    {
        cout << "Vehicle stoped " << endl;
    }

    ~Vehicles(){
        cout<<"Vehicle Dtor is called"<<endl;
    }
};

class Car : public Vehicles
{
public:
    int noOfDoors;
    string transmissionType;

    // ctor of car 
    // use class ki properties to initailise karna hi hai but uske sath sath Parent class ki jo properties inherit kari hai unhe bhi to initailise karna pdhega n that why this ----> 
    Car(string name, string model, int noOfTyres, string transmissionType, int noOfDoors) : Vehicles(name, model, noOfTyres){
        cout<<"Ctor for Car called. "<<endl;
        this->noOfDoors = noOfDoors; 
        this->transmissionType = transmissionType;
    }

    void startAC()
    {
        cout << "Start the AC of  " <<name<< endl;
    }

    // protected can be accessed within the derived class only 
    // setter function for the brand Name 
    void setBrandName(string brand){
        this->brand = brand;
    }

    void getBrandName(){
        cout<<"This brand NAME of "<<name<<" is : "<<brand<<endl;
    }

    ~Car(){
        cout<<"Dtor for Car is called"<<endl;
    }
};

class MotorCycle : public Vehicles{
    // it can inherit all the attributes of the vehicle class expect the private 
    protected:
        string handleBarStyle;
        string suspensionType;

    public:
        MotorCycle(string name, string model, int noOfTyres, string handleBarStyle, string suspensionType) : Vehicles(name, model, noOfTyres){
            cout<<"MotorCycle Ctor is called. "<<endl;
            this->handleBarStyle = handleBarStyle;
            this->suspensionType = suspensionType;
        }

        void riding(){
            cout<<"His is riding on "<<name<<" with "<<suspensionType<<" suspension"<<endl;
        }

        ~MotorCycle(){
            cout<<"Dtor for motor cycle is called"<<endl;
        }
};

int main()
{
    Car c1("XUV 700", "SUV", 4,"no", 4);
    c1.startEng();
    c1.startAC();

    // if u try to access a protected then u can't access it directlt from the main function 
    // need to use the getter and setter function in the main function 

    // but we can directly use it in the derived class

    c1.setBrandName("Mahindra");
    c1.getBrandName();

    MotorCycle Bike1("BMW", "XX1", 2, "U", "Soft");
    Bike1.startEng();
    Bike1.riding();
}