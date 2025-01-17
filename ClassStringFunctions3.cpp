// ClassStringFunctions3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	//----substring function----

	string a = "Language";
	cout << "Substring function example: " << a.substr(4) << endl;
	cout << "Substring function example: " << a.substr(0, 4) << endl;//(0,4) indicates in the array from '0' to '4' letters

	//----compare function----

	string b = "hello";
	string c = "hello";
	// for comparsion same value = 0
	// for comparsion between b<c = positive value
	// for comparsion between b>c = negative value


	cout << "compare function example: " << b.compare(c) << endl;
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
