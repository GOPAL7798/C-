// ProblemStudent4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

class StackOverFlow :exception {};
class StackUnderFlow :exception {};

class Stack
{
private:
    int* stk;
    int top = -1;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
            throw StackOverFlow();
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }

};

int main()
{
    Stack s(5);

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);

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
