// NameEnteringString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	//this will cause error for second satement
	/*char s[20];
	cout << "Enter your Name: ";
	cin.get(s,20);

	cout << "Welcome " << s << endl;

	cin.ignore();

	char r[20];
	cout << "Enter your Name: ";
	cin.get(r, 20);

	cout << "Welcome " << r << endl;*/

	//so we can this for print Second statement 
	//char s[20];
	//cout << "Enter your Name: ";
	//cin.get(s, 20);

	//cout << "Welcome " << s << endl;

	//cin.ignore();

	//char r[20];
	//cout << "Enter your Name: ";
	//cin.get(r, 20);

	//cout << "Welcome " << r << endl;

	//or we can use .getline for second statement

	char s[20];
	cout << "Enter your Name: ";
	cin.getline(s, 20);

	cout << "Welcome " << s << endl;

	char r[20];
	cout << "Enter your Name: ";
	cin.getline(r, 20);

	cout << "Welcome " << r << endl;

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
