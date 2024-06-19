#include <iostream>
#include <algorithm>
using namespace std;

// Base Class Employee
class Employee
{
protected:
    string Name;
    int empId;

public:
    Employee(string Name, int empId)
    {
        cout<<__FUNCTION__<<endl;
        this->empId = empId;
        this->Name = Name;
    }

    void display() const
    {
        cout << "Employee : " << Name << " with Employee id : " << empId << endl;
    }
};

// Single Inheritance from the Base Class
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    Developer(const string &Name, int empId, const string &lang) : Employee(Name, empId), programmingLanguage(lang){};

    void show() const
    {
        display();
        cout << "Specialization Developer, Programming Language : " << programmingLanguage << endl;
    }
};

// Multiple Inheritance
/*
here we have a class techLead which is a employee, project Manager and teamlead
means here a class is made form 3 different class
*/
// base Class
class ProjectManager
{
protected:
    string projectName;

public:
    ProjectManager(const string &projectName) : projectName(projectName) {};

    void manageProject() const{
        cout<<"Leading the project : "<<projectName<<endl;
    }
};

// TEAM LEAD
class TeamLead{
    protected:
        int teamSize;
    
    public:
        TeamLead(int &teamSize) : teamSize(teamSize) {};

        void leadTeam() const{
            cout<<"Its work to lead the team of around "<< teamSize << " people."<<endl;
        }
};

// Derived class from the 3 class 
class TechLead : public Employee, public ProjectManager, public TeamLead{
    public:
        TechLead(const string &Name, int empId, const string &projectName, int teamSize) : Employee(Name, empId), ProjectManager(projectName), TeamLead(teamSize) {};

        void displayTechLeadInfo() const{
            display();
            manageProject();
            leadTeam();
        }
};

// Multi Level Inheritance b/w Employee Hr Manager and Hr Director
// Hr manager would be the base class for HR Director 
class HRManager : public Employee{
    public:
        HRManager(const string name, int empId) : Employee(name, empId) {
            // its a marco to print the name of the function
            cout<<__FUNCTION__<<endl;
        };

        void handleHR(){
            cout<<"Handle Human Resource"<<endl;
        }
};

// Derived class from the Hr Manager class 
class HRDirector : public HRManager{
    public:
        HRDirector(const string name, int empId) : HRManager(name, empId) {
            cout<<__FUNCTION__<<endl;
        };

        void manageHrManager(){
            cout<<"HR Director manages the HR department "<<endl;
        }
};

// Heriarchial Inheritance 
class Excutive : public Employee{
    public:
        Excutive(const string &name, int empId) : Employee(name, empId) {};

        void makeExeDecission(){
            cout<<"Take all the Excutive decission for the Company"<<endl;
        }
};

class CEO : public Excutive{
    public : 
        CEO(const string &name, int empId) : Excutive(name, empId) {};

        void leadCompany(){
            cout<<"Take all the higher level decision for the company"<<endl;
        }
};
int main()
{
    cout<<endl;
    // single inheritance 
    Developer dev1("Sans", 101, "Pytho");
    dev1.show();

    cout<<endl;
    // Multiple Inheritance  
    TechLead tech1("Jatin Sahu", 102, "NLP based learning", 10);
    tech1.displayTechLeadInfo();

    cout<<endl;

    // Multi Level Inheritance 
    // HRDirector --> HRManager --> Employee;
    HRDirector hrd1("Varsha", 192);
    hrd1.handleHR();
    hrd1.manageHrManager();
    cout<<endl;
    
    CEO C1("Sunder Pichai", 253);
    C1.leadCompany();
    
}