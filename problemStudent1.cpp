// problemStudent1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rational {
private:
    int p;
    int r;
public:
    Rational() {
        p = 1;
        r = 1;
    }
    Rational(int p, int r) {
        this->p = p;
        this->r = r;
    }
    Rational(Rational& q) {
        this->p = q.p;
        this->r = q.r;
    }
    int getP() { return p; }
    int getR() { return r; }

    void setP(int p) {
        this->p = p;
    }
    void setR(int r) {
        this->r = r;
    }

    Rational operator+(Rational q) {
      
            Rational t;
            t.p = this->p * q.r + this->r * q.p;
            t.r = this->r * q.r;
            return t;
        }
    friend ostream& operator<<(ostream & os, Rational & q);
};

ostream& operator<<(ostream& os, Rational& q)
{
    os << q.p << "/" << q.r;
    return os;
}

int main()
{
    Rational r1(4, 4), r2(5, 5), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
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
