#include<iostream>
#include<algorithm>
using namespace std;

//  aache se pdhne ke liye dsa_by _babbar week --> 9 se dekh lena  
class Student{
private:
    string gfName;
public:
    int id;
    string Name;
    int age;

    void study(){
        cout<<this->Name<<" is Studying."<<endl;
    }

    void chatting(){
        cout<<"He is Chatting with his gf "<<gfName<<endl;
    }

    void setGfName(string gfName){
        this->gfName = gfName;
    }
};

// for more info --> dsa week 9 oops me se dekh lena 
int main(){
    Student s1;
    s1.Name = "Jatin";
    s1.id = 12;
    s1.age = 20;
    s1.setGfName("NO"); 
    s1.chatting(); 
}