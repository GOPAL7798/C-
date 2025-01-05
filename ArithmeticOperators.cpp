// ArithmeticOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a ;
    int b ;

    int c,d,e,g,f;
    cout << "Enter your a and b values " << endl;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    cout << "sum" << c<< endl;
    cout << "minus" << d<<endl;
    cout << "multiply" << e<<endl;
    cout << "division" << f<<endl;
    cout << "modulus" << g<<endl;
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
