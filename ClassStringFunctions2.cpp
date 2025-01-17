// ClassStringFunctions2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	//----copy function in class string

	string a = "hello";

	char str[10];
	a.copy(str, 3);
	str[3] = '\0';

	cout << "copy function example: " << str << endl;

	//-----find function----

	string b = "welcome home";

	cout << "Examples of Find function are : " << endl;

	cout << b.find("home") << endl;
	cout << b.find('e') << endl;
	cout << b.find('k') << endl;
	cout << b.rfind('e') << endl;

	cout << "Find_first_of examples: " << endl;
	cout << b.find_first_of('e') << endl;
	cout << b.find_first_of('e',3) << endl; //searching starts from given number(3)
	cout << b.find_first_of("ch") << endl; //finding any letter first in the string
	cout << b.find_first_of("ch",4) << endl; 

	cout << "Find_last_of examples: " << endl;
	cout << b.find_last_of('e') << endl;
	cout << b.find_last_of('e', 3) << endl; //searching starts from given number(3)
	cout << b.find_last_of("ch") << endl; //finding any letter first in the string
	cout << b.find_last_of("ch", 4) << endl;









	

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
