// RectangleClassUsingPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {

public:
    int length,breadth;

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    cout << "Rectangle r = creating a object in Stack memory" << endl;
    Rectangle* p;
    p =&r;

    p->length = 10;
    p->breadth = 7;

    cout << "Area of Rectangle is: " << p->area() << endl;
    cout << "Perimeter of Rectangle is: " << p->perimeter() << endl;
    cout << "  " << endl;

    //creating a object in heap using pointer

    Rectangle* q = new Rectangle();
    cout << "Rectangle* q = new Rectangle(); = creating a object in Heap memory" << endl;
    q->length = 25;
    q->breadth = 20;

    cout << "Area of Rectangle is: " << q->area()<< endl;
    cout << "Area of Rectangle is: " << q->area() << endl;


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
