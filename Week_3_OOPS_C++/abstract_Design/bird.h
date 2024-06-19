#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;

    // classes that inherits this class has to implement pure virtula functioons 
};

class Sparrow: public Bird{
public:
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }

    void  fly(){
        cout<<"Sparrow is fly"<<endl;
    }
};

class Pigen: public Bird{
public:
    void eat(){
        cout<<"Pigen is eating"<<endl;
    }
    void  fly(){
        cout<<"Pigen is fly"<<endl;
    }
};

# endif // BIRD_H;