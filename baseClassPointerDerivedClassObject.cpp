// baseClassPointerDerivedClassObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base {
public:

    void fun1() { cout << "Function 1 of Base" << endl; }
    void fun2() { cout << "Function 2 of Base" << endl; }
    void fun3() { cout << "Function 3 of Base" << endl; }
};

class Derived:public Base {
public:
    void fun4() {
        cout << "Function 4 of Derived" << endl;
    }
    void fun5() { cout << "Function 5 of Derived" << endl; }
};

int main()
{
    Derived d;//from derived class can access functions from both classes

    cout << "  using derived class " << endl;
    d.fun1();
    d.fun2();
    d.fun3();
    d.fun4();
    d.fun5();
    cout << "   " << endl;

    cout << " using base class  " << endl;

    Base b;
    b.fun1(); //only base class functions can be called
    b.fun2();
    d.fun3();
    cout << "  " << endl;

    cout << " using pointer with base and having object from derived class  " << endl;
    Base * p;
    p = new Derived();
    p->fun1();
    p->fun2();
    p->fun3();

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
