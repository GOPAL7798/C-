// ClassStringOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{

	string a = "Kingmaker";

	//at() function or [] are similar
	a.at(4) = 'r';
	cout << a << endl;

	a[4] = 'm';
	cout << a << endl;

	//---front and back function----
	cout << "Front function example: " << a.front() << endl;
	cout << "Back function example: " << a.back() << endl;


	//----- + and = function ------

	string b = "Gopal";
	string c = " Gudipati";

	string d = b + c;

	cout <<"First example of + function: " << d << endl;

	b=b + " Gudipati";
	cout <<"second example of + function: " << b << endl;

	//= function
	
	string e = "Gopal";
	string f = "Bablu";

	e = f;
	cout <<"Example of = function: " << e << endl;



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
