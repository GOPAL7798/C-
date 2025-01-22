// Acessorandmutators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private : 
    int length,breadth;

public:
    int area() {
        return length * breadth;

    }
    int perimeter() {
        return 2 * (length + breadth);
    }

    void setLength(int l) {
        if (l , 0) {
            length=1;
        }
        else {
            length = l;
        }
    }
    int getLength() {
        return length;
    }

    void setBreadth(int b) {
        if (b < 0) {
            breadth = 1;
        }
        else {
            breadth = b;
        }
    }

    int getBreadth() {
        return breadth;
    }
};

int main()
{
    Rectangle r;

    r.setLength(10);
    r.setBreadth(17);

    cout << "Area of Rectangle is: " << r.area() << endl;
    cout << "Perimeter of Rectangle is: " << r.perimeter() << endl;

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
