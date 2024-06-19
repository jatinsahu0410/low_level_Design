#include<iostream>
#include<string>
using namespace std;

class UserInfo
{
public:
    void addUser(string name)
    {
        // user add code
    }

    void delUser(string name)
    {
        // user delete code
    }

    // but acc to the Single Responsibility Principle it should be in different class as this call contains function related to the user only 
    void logError(string err){
        // log the error 
    }
};

class logger
{
public:
    void logError(string err)
    {
        // log error
    }
};

// SRP example 2
class ContentManager
{
public:
    void addContent(string contentID, string content)
    {
        // db add
    }

    void removeContent(string contentID, string content)
    {
        // db delete
    }

    string getContent(string contentID)
    {
        // get from db
        return "Actual content";
    }
};

class ContentRenderer
{
public:
    string renderAsHTML(string contentID)
    {
        ContentManager c;
        string content = c.getContent(contentID);
        // html banane ki processing
        string html = "html string";
        return html;
    }   
};

int main(){
    return 0;
}