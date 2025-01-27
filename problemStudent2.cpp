// problemStudent2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee {
private:
    int empid;
    string name;
public:
    Employee(int e = 0, string n = "") {
        empid = e;
        name = n;
    }
    void Display() {
        cout << "Employee name is " << name << " and Employee Id is " << empid <<  endl;
    }
   
};

class FullTimeEmployee :public Employee {
private:
    int salary;
public:
    FullTimeEmployee(int s = 0, int e = 0, string n = "") :Employee( e, n) {
        salary = s;
    }
    void fullTimeDisplay() {
        cout <<  "Full-Time Employee Salary is " << salary << endl;
    }
};

class PartTimeEmployee :public Employee {
private :
    int wages;
public:
    PartTimeEmployee(int w = 0, int e = 0, string n = "") :Employee(e, n) {
        wages = w;
    }
    void partTimeDisplay() {
        cout << "Part-Time wages for Employee is " << wages << endl;
    }
    void employee() {
        Display();
        FullTimeEmployee();
        partTimeDisplay();
    }
};
int main()
{
    FullTimeEmployee f1 = FullTimeEmployee(50000, 25, "Gopal");
    PartTimeEmployee p1 = PartTimeEmployee(25000, 6, "Naveen");

    f1.fullTimeDisplay();
    p1.partTimeDisplay();

    f1.Display();
    p1.Display();

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
