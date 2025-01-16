// StringFunctions1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//------String Concantation-----

	/*char s[20] = "Good";
	char s1[10] = "Morning";

	strcat_s(s, sizeof(s), s1);
	strncat_s(s,sizeof(s),s1,7); //printing how many letters -7
	cout << s << endl;*/

	//----String Copy------
	
	//char s[10];
	//char s1[6] = "Hello";

	///*strcpy_s(s, sizeof(s), s1);
	//strncpy_s(s,sizeof(s),s1,4);*/
	//cout << s << endl;

	//-----String SubString----

	/*char s[20] = "programming";
	char s1[10] = "gr";

	strstr(s, s1);
	cout << strstr(s, s1) << endl;*/

	//-----string Character-----

	/*char s[20] = "Programming";

	cout << strchr(s,'r') << endl;
	cout << strrchr(s, 'm') << endl;*/

	//-----String compare------

	/*char s[10] = "Hello";
	char s1[10] = "hello";

	cout << strcmp(s, s1) << endl;*/

	//---string to Integer----

	/*char s[10] = "237";
	char s1[10] = "54.789";

	long int x = strtol(s, NULL,10);
	float y = strtof(s1, NULL);

	cout << x << endl << y << endl;*/


	//-----String Tokeniser------

	char s1[20] = "x=10;y=20;z=30";
	char* context = nullptr;


	char *token = strtok_s(s1, "=;", &context);

	while (token != NULL) {
		cout << token << endl;
		token = strtok_s(NULL, "=;",&context);
	}

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
