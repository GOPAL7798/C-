// EmployeeClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee {

private:
    string name;
    int age;
    float experience;

public:
    Employee(string n, int a, float e) {
        name = n;
        age = a;
        experience = e;
    }

    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        if (a < 0) {
            a= 1;
        }
        else {
            age = a;
        }
    }
    int getAge() {
        return age;
    }

    void setExperience(float e) {
        experience = e;
    }
    float getExperience() {
        return experience;
    }

    void DisplayEmpDetails() {
        cout << "Employer name is: " << name << " and age is: " << age << " and experience is: " << experience<<endl;
    }
};

int main()
{
    Employee e1 = Employee("GOPAL", 24, 2.6f);
    cout << e1.getName() << endl;
    e1.DisplayEmpDetails();

    e1.setName("Govind");
    e1.setAge(32);
    e1.setExperience(2.7f);

    cout << e1.getName() << "  " << e1.getAge() << "  " << e1.getExperience()<<endl;


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
