// SwitchExample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Welcome to our Hotel" << endl;

    cout << "Here is the menu and items" << endl;

    cout << "1. Poori    --        40" << endl;
    cout << "2. Dosa     --        35" << endl;
    cout << "3. Idly     --        30" << endl;
    cout << "4. Vada     --        30" << endl;
    
    cout << "Enter your Items number: ";

    cin >> number;

    switch (number) {

    case 1:  cout << "1. Poori     --     40" << endl;
        break;
    case 2: cout << "2. Dosa       --     35" << endl;
        break;
    case 3: cout << "3. Idly       --     30" << endl;
        break;
    case 4: cout << "4. Vada       --     30" << endl;
        break;
    default:cout << "Invalid number" << endl;

    }
    cout << "Visit our Hotel again";
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
