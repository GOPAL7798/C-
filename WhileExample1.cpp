// WhileExample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i=1,n, sum = 0;

	cout << "enter the value of n: ";
	cin >> n;


	while (i <= n) {
		sum = sum + i;
		i++;
	}
	cout << "Sum of n natural numbers is: " << sum << endl;

	/*do {
		sum = sum + i;
		i++;
		
	} while (i <= n);
	cout << "Sum of n natural numbers is: " << sum << endl;*/

	/*for (i;i <= n;i++) {
		sum = sum + i;
	}
	cout << "Sum of n natural numbers is: " << sum << endl;*/
	
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
