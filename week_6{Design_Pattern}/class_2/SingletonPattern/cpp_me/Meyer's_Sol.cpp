#include<iostream>
#include<algorithm>
using namespace std;

// Solution in case of Multi Thread problem 
class Singleton{
private:
    Singleton(){
        cout<<"Object Created"<<endl;
    }

    // deleted copy constructor
    Singleton(Singleton const&) = delete;
    // = operator ke bhi samalna pdhega 
    Singleton& operator=(Singleton const&) = delete;

public:
    static Singleton& getInstance(){
        static Singleton instance;  // self destory ho gayega use hone ke baad 
        return instance;
    }
};
 
int main(){
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    cout<<"S1 : "<<&s1<<" s2 : "<<&s2<<endl;
}