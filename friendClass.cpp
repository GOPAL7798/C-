// friendClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class College;
class name {
private: string a;
public: string b;
protected: string c;

     friend void fun();
     friend class College;
};

void fun() {
    name n;
    n.a = "Gopal";
    n.b = "Naveen";
    n.c = "Akshay";
    cout << "Private: " << n.a << " , public: " << n.b << " , protected: " << n.c << endl;
}

class College {
public:
    void display() {
        name na;
        na.a = "gopal";
        na.b = "naveen";
        na.c = "akshay";
        cout << "IN college they were friends: " << na.a << " ," << na.b << " ," << na.c << endl;
    }
};

int main()
{
    College c;
    c.display();
    fun();
    
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
