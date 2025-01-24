// OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }

    Complex operator+(Complex x) {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    Complex operator-(Complex y) {
        Complex temp;
        temp.real = real - y.real;
        temp.img = img - y.img;
        return temp;
    }

    void display() {
        cout <<  real << " + " << " i" << img << endl;
    }
    void display1() {
        cout << real << " - " << " i" << img << endl;
    }
};

int main()
{
    Complex c1(45, 22);
    Complex c2(42, 12);
    Complex c3;

    c3 = c1 + c2;
    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Complex Number 3 is sum: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Complex Number 3 is difference: ";
    c3.display1();

    
    
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
