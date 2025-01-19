// passByValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Pass by Value
void swap(int x, int y) {
	cout << x << "  " << y << endl;
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << "  " << y << endl;
}



int main()
{
	int x = 10, y = 20;
	swap(x, y);
	cout << "In pass by value the arguments in the main doesn't change values and there is a change in the arguments in declared function"<<endl;
	cout << "Pass by Value Example: " << x << "  " << y << endl;
	

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
