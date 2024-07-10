#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Composite pattern 

class UIComponent{
public:
    virtual void draw(){};
    virtual void addComponent(UIComponent* component){};
    virtual void removeComponent(UIComponent* component){};
};

// Create a part 
class Button: public UIComponent{
public:
    void draw() override{
        cout << "creating a button" << endl;
    };

    void addComponent(UIComponent* component) override{
        cout << "Button can't have child components" << endl;
    };

    void removeComponent(UIComponent* component) override{
        cout << "Button can't have child components" << endl;
    };
};

// create a whole 
class Menu: public UIComponent{
public:
    // In this menu their could be multiple component
    vector<UIComponent *> comp;

    void draw() override{
        cout << "creating a menu" << endl;
        for(UIComponent *cmp: comp){
            cmp->draw();
        }
    }

    void addComponent(UIComponent* component) override{
        cout<<"Adding components"<<endl;
        comp.push_back(component);
    }

    void removeComponent(UIComponent* component) override{
        cout<<"Removing components"<<endl;
        // Erase the component from the vector using remove and erase idiom
        // remove removes the element from the container, but doesn't change the size of the container
        // erase removes the element from the container and shifts all the elements after it one position to the left.
        // So, we can use remove and erase in a single line to remove the element from the vector.
        comp.erase(remove(comp.begin(), comp.end(), component), comp.end());
    }
};
int main(){

    // Uicomponent object
    UIComponent *uicomponent = new Menu();

    // now creat a button 
    uicomponent->addComponent(new Button());
    uicomponent->addComponent(new Button());

    Button *btn = new Button();
    uicomponent->addComponent(btn);

    uicomponent->draw();

    uicomponent->removeComponent(btn);
    uicomponent->draw();
}