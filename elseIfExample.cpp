// elseIfExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	int day;

	cout << "Enter the number: ";
	cin >> day;

	if (day == 1) {
		cout << "mon";
	}
	else if (day == 2) {
		cout << "tue";
	}
	else if (day == 3) {
		cout << "wed";
	}
	else if (day == 4) {
		cout << "thu";
	}
	else if (day == 5) {
		cout << "fri";
	}
	else if (day == 6) {
		cout << "sat";
	}
	else if (day == 7) {
		cout << "sun";
	}
	else {
		cout << "Invalid Number";
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
