#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;
    int nos;

    // ctor
    Student(int id, int age, int nos, string name, string gfName)
    {
        cout << "Ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gfName = gfName;
    }

    // dtor
    ~Student()
    {
        cout << "Dtor called" << endl;
    }

    void study()
    {
        cout << "Student is studing." << endl;
    }

    void sleeping()
    {
        cout << name << " is sleeping." << endl;
    }

private:
    string gfName;

    void chatting()
    {
        cout << name << "is chatting with his gf " << gfName << endl;
    }
};

int main()
{
    Student S1(1, 2, 3, "Jatin", "Sans");

}