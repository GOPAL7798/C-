// factorialOfN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i=1, n, fact=1;
	cout << "enter the number of n: ";
	cin >> n;

	/*for (i = 1;i <= n;i++) {
		fact = fact * i;
	}
	cout << "the factorial given number of " << n << " is: " << fact << endl;*/

	/*while (i <= n) {
		fact = fact * i;
		i++;
	}
		cout << "the factorial given number of " << n << " is: " << fact << endl;*/

	do {
		fact = fact * i;
		i++;

	} while (i <= n);
	cout << "the factorial given number of " << n << " is: " << fact << endl;


	
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
