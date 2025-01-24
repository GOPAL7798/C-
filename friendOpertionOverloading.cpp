// friendOpertionOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    friend Complex operator+(Complex c1, Complex c2);

    void display() {
        cout << real << " + i" << imag << endl;
    }
};

 Complex operator+(Complex c1, Complex c2) {
     Complex t;
     t.real = c1.real + c2.real;
     t.imag = c1.imag + c2.imag;
     return t;
}

int main()
{
    Complex c1(10, 6), c2(20, 6),c3;

    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
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
