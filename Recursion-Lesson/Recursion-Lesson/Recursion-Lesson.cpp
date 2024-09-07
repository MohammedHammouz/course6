// Recursion-Lesson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintNumbersFrom1ToN(int N, int M) {
    if (N <= M) {
        cout << N << endl;
        PrintNumbersFrom1ToN(N + 1, M);

    }
}

void PrintNumbersFromMTo1(int N, int M) {
    if (M >= N) {
        cout << M << endl;
        PrintNumbersFromMTo1(N, M - 1);

    }
}

int MyPower(int base, int power) {
    if (power == 0) {
        return 1;
        //MyPower(2,0)=1
    }
    else {
        return base * MyPower(base, power - 1);
        //2*MyPower(2,1)=2
        //2*MyPower(2,2)=4
        //2*MyPower(2,3)=8
        //2*MyPower(2,4)=16
    }
}
int main()
{
    PrintNumbersFrom1ToN(1, 4);
    PrintNumbersFromMTo1(1, 4);
    cout<<MyPower(2, 4)<<'\n';
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
