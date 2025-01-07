// switchExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int month;
	
	cout << "Enter the number of month: ";
	cin >> month;

	switch(month) {
	case 1: cout << "jan";
		break;
	case 2: cout << "feb";
		break;
	case 3:cout << "mar";
		break;
	case 4:cout << "apr";
		break;
	case 5:cout << "may";
		break;
	case 6: cout << "jun";
		break;
	case 7:cout << "jul";
		break;
	case 8: cout << "aug";
		break;
	case 9:cout << "sep";
		break;
	case 10: cout << "oct";
		break;
	case 11:cout << "nov";
		break;
	case 12: cout << "dec";
		break;

	default:cout << "Invalid number";

	}

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
