// functions1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int add(int x, int y) {
    int z;
    z = x + y;
    return z;
}
//Method Overloading
int add(int x, int y, int z) {
    int d;
    d = x + y + z;
    return d;
}

int maximum(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}
int minimum(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }
    else if (b < c) {
        return b;
    }
    else {
        return c;
    }
}

int power(int m, int n) {
    int z = 1;
    for (int i = 0;i < n;i++) {
        z *= m;
    }
    return z;
}


int main()
{
    cout <<"using add function: " << add(10, 8) << endl;
    cout << "using add function in method Overloading : " << add(10, 13, 18) << endl;
    cout <<"using maximum function: " << maximum(10, 19, 6) << endl;
    cout << "using minimum function: " << minimum(10, 5,9) << endl;
    cout << "using power function: " << power(2, 5) << endl;


    
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
