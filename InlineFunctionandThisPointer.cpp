// InlineFunctionandThisPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Money {
public :
    int IND;
    int US;

    Money(int IND, int US) {
        this->IND = IND;// using this pointer
        this->US = US;
    }

    void rupeeDisplay() {
        double rupee = 1.0 / 84.0;
        cout << "The price of single Rupee compared to dollar: " << rupee <<" INR " << endl;
    }
   inline void dollarDisplay();//if u write a fn outside class but you need it in inside class using inline keyword
};

int main()
{
    Money m1(840,10);
    m1.dollarDisplay();
    m1.rupeeDisplay();
}

void Money::dollarDisplay() {
    int rupee = US * 84;
    cout << "The price of single dollar compared to India: " << rupee<<" Dollars " << endl;

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
