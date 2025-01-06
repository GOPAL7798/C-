// billElseIfExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    float billAmount, discount;

    cout << "enter the bill amount: ";
    cin >> billAmount;

    if (billAmount <= 1000) {
        cout << "there is your bill" << endl;
        cout << billAmount << endl;
    }
    else if (billAmount > 1000 && billAmount <= 5000) {
        discount = billAmount - billAmount * 10 / 100.0;
        cout << "Autual bill: " << billAmount << endl;
        cout << "bill with discounted amount: " << discount;
    }
    else if (billAmount > 5000) {
        discount = billAmount - billAmount * 20 / 100.0;
        cout << "Autual bill: " << billAmount << endl;
        cout << "bill with discounted amount: " << discount;
    }
    return 0;
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
