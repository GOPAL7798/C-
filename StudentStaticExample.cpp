// StudentStaticExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    static int AddNo;

    Student(string n) {
        name = n;
        AddNo++;
        roll = AddNo;
    }
    void display() {
        cout << "Name: " << name << " roll: " << roll << endl;
    }
};

int Student::AddNo = 0;

int main()
{
    Student s1("Gopal");
    Student s2("Naveen");
    Student s3("Akshay");
    Student s4("Praveen");
    Student s5("Lokesh");

    s1.display();
    cout << "number of admissions: "<<Student::AddNo << endl;
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
