// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int A[10] = { 3,5,7,9,11,13,17,19,21,23 }, n = 10;
    int mid, key, l = 0, h = 9;

    cout << "Enter the key: ";
    cin >> key;

    while (l <= h) {
        mid = (l + h) / 2;
        if (key == A[mid]) {
            cout << "found the key at the index: " << mid;
            return 0;
        }
        else if (key < A[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }cout << "Not found the key in the array";
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
