// PositiveANdnegativeElements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int A[] = { 1,3,5,7,9,-1,-3,-5,-7,-9 };
	int PositiveCount = 0;
	int NegativeCount = 0;

	for (int x : A) {
		if (x < 0) {
			PositiveCount++;
		}
		else {
			NegativeCount++;
		}
	}cout << "Positive Numbers are : " << PositiveCount << endl;
	cout << "Negative Numbers are: " << NegativeCount << endl;
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
