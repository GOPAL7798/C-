// RectangleClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
	
public:
	int length;
	int  breadth;

	int area() {
		return length * breadth;
	}
	int perimeter() {
		return 2 * (length + breadth);
	}

};

int main()
{

	Rectangle r1, r2;
	r1.length = 12;
	r1.breadth = 13;
	cout << "Area of Rectangle is: " << r1.area() << endl;
	cout << "perimeter of Rectangle is: " << r1.perimeter() << endl;

	r2.length = 17;
	r2.breadth = 12;
	cout << "Area of Rectangle is: " << r2.area() << endl;
	cout << "perimeter of Rectangle is: " << r2.perimeter() << endl;
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
