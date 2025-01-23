// EmployeeConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee {
public: 
    string name;
    int id;
    double salary;

    Employee(string n=0, int i=0, double s=0) {
        name = n;
        id = i;
        salary = s;
    }

    void displayEmpDetails() {
        cout << "Name of the Employee is :" << name << " and id is: " << id << " and salary is: " << salary << endl;
    }
};



int main()
{
    Employee e1 = Employee("Gopal", 23, 57566.2534);
    Employee e2 = Employee("Naveen", 24, 45678.3356);

    e1.displayEmpDetails();
    e2.displayEmpDetails();

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
