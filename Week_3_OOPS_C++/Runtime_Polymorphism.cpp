#include <iostream>
#include <algorithm>
using namespace std;

// Run time polymorphism
class Shape
{
public:
    virtual void draw()
    {
        // /virtual keyword se run time compiler decision lega
        // LATE binding hogi:
        cout << "Generic Drawing...." << endl;
    }
};

// override : override keyword karta kuch nhi hai base it's just for representation ki base class ke same function ko override kar diya gaya hai

class Circle : public Shape
{
public:
    // as circle alag way se draw hoga so hume circle ke liye different draw function chahiye and aak shape se bhi inherit ho raha hai

    void draw() override
    {
        cout << "Drawing Circle..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Rectangle Drawing..." << endl;
    }
};

class Triangle final : public Shape 
{
public:
    void draw() override
    {
        cout << "Drawing triangle..." << endl;
    }
};

// Final keyword if kisi class me use kiya hai then us class ko koi or class inherit nhi kar sakti 
// example  : geneter an error 
// class RightTriangle : public Triangle{
//     // here Triangle can't be a base class
// };

void shapeDrawing(Shape *s)
{
    // here we are using base class pointer and want that ki it should call the relavent draw function

    s->draw();

    // draw is polymorphic --> run time relavent draw call ho raha hai
}

int main()
{
    Circle c;
    Rectangle r;

    // jo ShapeDrawing function hai vo relavent class ka hi draw function call kare so to do that

    Shape *s = &c; // upcasting

    shapeDrawing(&c); // Gerneric Drawing...
    shapeDrawing(&r); // Generic Drawing...
    // but abhi ye hai ki shapeDrawing() Shape i.e. the base class uska hi draw ffunction call kar raha hai

    Triangle *t = new Triangle();
    shapeDrawing(t);

    cout << endl
         << endl;

    // Upcasting ans downcasting without using the virtual keyword
    /*
    Shape *s2 = new Shape();
    s2->draw();  // Shape ka draw call hua

    // UpCasting
    Shape *s3 = new Circle();
    s3->draw();   // Shape ka draw call hua

    Circle *c2 = new Circle();
    c2->draw();   // Circle ka draw call hua

    // DOWNCASTING
    Shape *s4 = new Shape();
    Circle *c3 = (Circle *)s4;
    c3->draw();  // Circle Ka draw Call hua
    */

    // UpCasting and Downcasting with the virtual keyword 
    Shape *s2 = new Shape();
    s2->draw();  // Shape ka draw call hua

    // UpCasting
    Shape *s3 = new Circle();
    s3->draw();   // Circle ka draw call hua

    Circle *c2 = new Circle();
    c2->draw();   // Circle ka draw call hua

    // DOWNCASTING
    Shape *s4 = new Shape();
    Circle *c3 = (Circle *)s4;
    c3->draw();  // Shape Ka draw Call hua
}