#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int r, h;
	double Volume;

	cout << "Enter the values of r: ";
	cin >> r;

	cout << "Enter the values of h: ";
	cin >> h;

	Volume =  3.14 * (r * r) * h;

	cout << "volume of a cylinder: " << Volume;
	return 0;
}
