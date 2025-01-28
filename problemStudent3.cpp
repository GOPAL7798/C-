// problemStudent3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual ~Shape(){}
};

class Rectangle :public Shape{
private:
    float length;
    float breadth;

public:
    Rectangle(float l=0, float b=0) {
        length = l;
        breadth = b;
    }

    float area()  {
        return length * breadth;
    }
    
    float perimeter() {
        return 2 * (length * breadth);
    }

};

class Circle :public Shape{
private:
    float radius;
public:
    Circle(float r=0) {
        radius = r;
    }
    float area()  {
        return  3.1425 * radius * radius;
    }
    float perimeter() {
        return 2 * 3.1425 * radius;
    }
};

int main()
{
    Shape *s;
    Rectangle r (10.0, 5.0);

    s = &r;
   cout<<"area of Reactangle is: "<< s->area()<<endl;
   cout << "perimeter of Reactangle is: " << s->perimeter() << endl;

   Circle c(10.5);
   s = &c;
   cout << "area of circle is: " << s->area() << endl;
   cout << "area of perimeter is: " << s->perimeter() << endl;

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
