#include <iostream>
#include <algorithm>
using namespace std;

// engine
class ScorpioEngine
{
public:
    ScorpioEngine()
    {
        cout << "Scorpio Engine Started" << endl;
    }
};

class ScorpioNEngine : public ScorpioEngine
{
public:
    ScorpioNEngine()
    {
        cout << "Scorpio N Engine Started" << endl;
    }
};

class ScorpioClassicEngine : public ScorpioEngine
{
public:
    ScorpioClassicEngine()
    {
        cout << "Scorpio Classic Engine Started" << endl;
    }
};

// Protoptpe
class IScorpio
{
public:
    virtual IScorpio clone() {
    };

    virtual void setEngine(ScorpioEngine scorpioEngine){};

    virtual void start()
    {
    }
};

class Scorpio : public IScorpio
{

private:
    // copy constructor
    Scorpio(ScorpioEngine scorpioEng){
        this->engine = ScorpioEngine(scorpioEng);
    }
public:
    // default engine
    // shallow copy 
    // ScorpioEngine engine = ScorpioEngine();

    // Deep clone 
    ScorpioEngine engine;

    Scorpio(){
        this->engine = ScorpioEngine();
    }

    void start() override
    {
        cout << "Scorpio Started" << endl;
    }

    IScorpio clone() override
    {
        // shallow copy 
        // return Scorpio();

        // for deep copy
        IScorpio cloneScorpio = Scorpio(this->engine);
        return cloneScorpio;
    }

    void setEngine(ScorpioEngine scorpioEngine)
    {
        this->engine = scorpioEngine;
    }
};

// Fortuner 
class FortunerEngine{
public:
    FortunerEngine(){
        cout<<"Fortune Engine"<<endl;
    }
};

class FortunerSmallEngine : public FortunerEngine{
public:
    FortunerSmallEngine(){
        cout<<"Fortuner Small Engine"<<endl;
    }
};

class FortunerMediumEngine : public FortunerEngine{
public:
    FortunerMediumEngine(){
        cout<<"Fortuner Medium Engine"<<endl;
    }
};

// Now the interface of the prototype 
class IFortuner{
public:
    virtual IFortuner clone(){};

    virtual void setEngine(FortunerEngine fortunerEngine){};

    virtual void start(){};

    virtual FortunerEngine getEngine(){};
};

// Fotuner class 
class Fortuner: public IFortuner{
    // implement the prototype logic 
public:
    FortunerEngine engine = FortunerEngine();

    void start() override{
        cout<<"Fortuner Started"<<endl;
    }

    IFortuner clone() override{
        return Fortuner();
    }
    
    void setEngine(FortunerEngine fortunerEngine) override{
        this->engine = fortunerEngine;
    }

    FortunerEngine getEngine() override{
        return this->engine;
    }
};

int main()
{
    // create a prototype
    IScorpio prototype = Scorpio();

    // create a Scorpio N
    IScorpio scorpioN = prototype.clone();
    scorpioN.setEngine(ScorpioNEngine());

    // create scorpio Classic  
    IScorpio scorpioClassic = prototype.clone();
    scorpioClassic.setEngine(ScorpioClassicEngine());

    // create a fortuner prototype 
    cout<<endl<<"Fortune car creation : "<<endl<<endl;

    IFortuner fortunerPrototype = Fortuner();
    IFortuner fortunerSmall = fortunerPrototype.clone();
    fortunerSmall.setEngine(FortunerSmallEngine());

    IFortuner fortunerMedium = fortunerPrototype.clone();
    fortunerMedium.setEngine(FortunerMediumEngine());

    fortunerMedium.start();
    cout<<"Engine of Foturner Meduim :";
    FortunerEngine eng = fortunerMedium.getEngine();
    cout<<&eng<<endl;
    return 0;
}
