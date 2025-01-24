// problemStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int subject1;
    int subject2;
    int subject3;
    

     Student(int r, string n, int s1, int s2, int s3 ) {
        roll = r;
        name = n;
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
    }

     
    
    char caluclatedGrade() {
        int average = (subject1 + subject2 + subject3)/3;
        if (average < 40) {
            return 'C';
        }
        else if ( average < 60) {
            return 'B' ;
        }
        else {
            return 'A';
        }
    }

    

    void studentDetails() {
        cout << "name is: " << name << endl; 
        cout << "roll is: " << roll << endl;
        cout << "Subject1 marks: " << subject1 << endl;
        cout << "Subject2 marks: " << subject2 << endl;
        cout << "Subject3 marks: " << subject3 << endl;
        cout << "Grade is: " << caluclatedGrade() << endl;

    }

};



int main()
{
    Student s1 =  Student(10,"gopal",90,80,80);
    s1.caluclatedGrade();
    Student s2 = Student(24, "Naveen", 62, 53, 45);
    s2.caluclatedGrade();

    s1.studentDetails();
    s2.studentDetails();

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
