#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class ICar{
public:
    virtual void start(){};

};

class HotAirBalloon{
public:
    string gasUsed = "Helium";

    void start(string gas){
        cout<<"Starting hot air balloon"<<endl;
    }

    string getGasUsed(){
        return gasUsed;
    }
};

class Adapter: public ICar{
public:
    HotAirBalloon *hotBalloon;

    Adapter(HotAirBalloon *balloon){
            this->hotBalloon = balloon;
    }

    // ICar interface ke function ko override kiya hai
    void start() override{
        string gas = hotBalloon->getGasUsed();
        hotBalloon->start(gas);
    }
};
 
int main(){
    HotAirBalloon *balloon = new HotAirBalloon();
    Adapter *adapter = new Adapter(balloon);
    adapter->start();
}