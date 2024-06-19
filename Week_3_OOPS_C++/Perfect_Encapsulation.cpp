#include <iostream>
#include <algorithm>
using namespace std;

// Perfect encapsulation  is that when all the data member are private we need to use the getter and setter fucntion to access or change them

class Student
{
    int id;
    int age;
    string name;
    float *cgpa;
    string gfName;

public:
    // ctor 
    Student(int id, int age, string name, float cgpa, string gfName){
        this->id = id;
        this->age = age;
        *this->cgpa = cgpa;
        this->name = name;  
        this->gfName = gfName;
    }

    void study(){
        cout<<name<<" is Studying."<<endl;
    }

    // to change or access the private data then we need to use the getter and setter
    void setCgpa(float cgpa){
        // this is done to introduce another layer of authentication
        *this->cgpa = cgpa;
    }

    // getter
    float KnowCgpa(){
        return *this->cgpa;
    }

private:
    void  chatting(){
        cout<<name<<" is cahtting with his gf "<<gfName<<endl;
    }
};

int main()
{
    Student s1(2, 20, "Jatin", 8.6, "Sans");
    cout<< s1.KnowCgpa()<<endl;
}