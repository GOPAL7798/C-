// PointerArithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int A[5] = { 1,2,3,4,5 };

	int* p = A, *q = &A[4];

	//*p indicates the elements in the array
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p--;
	cout << *p << endl;

	//p indicates the address of the elements in the array

	cout << p << endl;
	cout << p + 2 << endl;


	for (int i = 0;i < 5;i++) {
		cout << p << endl;
		p++;
	}

	cout <<  *q - * (p + 2)<< endl;





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
