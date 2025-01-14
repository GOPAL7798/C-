// MultplicationOfTwoMatrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], Mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter Rows and Columns for First Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter Rows and Columns for Second Matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Cant be Multiplied";
        return 0;
    }

    // Storing Elements of First Matrix.
    cout << endl << "Enter Elements of Matrix 1:" << endl;

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter Element A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }

    // Storing Elements of Second Matrix.
    cout << endl << "Enter Elements of Matrix 2:" << endl;

    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter Element B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }

    // Multiplying Matrix A and B and Storing in Array Mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            Mult[i][j] = 0;

            for (k = 0; k < c1; ++k)
            {
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }

    // Displaying the Multiplication of Two Matrix.
    cout << endl << "Output Matrix: " << endl;

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << Mult[i][j];

            if (j == c2 - 1)
                cout << endl;
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
