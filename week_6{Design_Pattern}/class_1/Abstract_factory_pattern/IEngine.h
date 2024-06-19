#if !defined(IENGINE_H)
#define IENGINE_H
#include<iostream>
using namespace std;

class IEngine{
public:
    virtual void engine() = 0;
};

class ScorpioEngine : public IEngine{
public:
    virtual void engine() override{
        cout<<"Engine of Scorpio"<<endl;
    }
};

// subtypes of scorpio n ans classic 
class ScorpioClassicEngine : public ScorpioEngine{
public:
    void engine() override{
        cout<<"Engine of Scorpio Classic"<<endl;
    }
};

// Neo Scorpio 
class ScorpioNEngine : public ScorpioEngine{
public:
    void engine() override{
        cout<<"Engine of Scorpio Neo"<<endl;
    }
};

class DefenderEngine : public IEngine{
public:
    virtual void engine() override{
        cout<<"Engine of Defender"<<endl;
    }
};

// two varients of defender
class DefenderSEngine : public DefenderEngine{
public:
    void engine() override{
        cout<<"Engine of Defender Small"<<endl;
    }
};

class DefenderBEngine : public DefenderEngine{
public:
    void engine() override{
        cout<<"Engine of Defender Big"<<endl;
    }
};
#endif