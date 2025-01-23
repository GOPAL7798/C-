// CopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Bike {
public:

    int cc;
    string name;

    Bike(int c, string n) {
        cc = c;
        name = n;
    }

    
    Bike(Bike& a) {   // using copy constructor
        cc = a.cc;
        name = a.name;
    }

    void DisplayBikeDetails() {
        cout << "The Bike name is: " << name << " and its cc is: " << cc << endl;
    }

};

int main()
{
    Bike b1(220, "Pulsar");
    Bike b2(b1);

    b2.DisplayBikeDetails();



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
