// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, r, rev = 0, m;
	cout << "Enter the value of n: ";
	cin >> n;
	m = n;

	while (n > 0) {
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}cout << "Reverse of a given number is: " << rev << endl;
	if (rev == m) {
		cout << "number is a palindeome number" << endl;
	}
	else {
		cout << "number is not a palindrome number" << endl;
	}return 0;
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
