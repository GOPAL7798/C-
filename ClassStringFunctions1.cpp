// ClassStringFunctions1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    //----append function-----
    string s = "Hello";
    s.append(" World");
    cout <<"Append function example: "<< s << endl;

    //---insert function---
    string a = "How You";
    a.insert(3, " area", 4);
    cout <<"Insert function example: " << a << endl;

    //----replace function----
    string b = "Govind";
    b.replace(2, 4, "pal");
    cout << "Replace function Example: " << b << endl;

    //----erase function---
    string c = "hello";
    c.erase();
    cout << "Erase function example: " << c << endl;

    //----pushback function----
    string d = "gopa";
    d.push_back('l');
    cout << "pushback function example: " << d << endl;

    //----popback function----
    string e = "gopalg";
    e.pop_back();
    cout << "popback function example: " << e << endl;
    
    //-----swapback-----
    string f = "hello";
    string g = "world";
    f.swap(g);

    cout << "Swap function Example: " <<"f is: " << f << "  "<<"g is: " << g << endl;

    
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
