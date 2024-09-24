// Vector-Change-Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <vector>
int main()
{
    
    vector<int>num{ 1,2,3,4,5 };
    cout << "initial vector: ";
    for (const int&i:num) {
            cout << i << "  ";
    }
    cout << "\n\nupdated vector: ";
    for (int& i : num) {
        i = 20;
        cout << i <<"  ";
    }

    num[1] = 40;
    num.at(2) = 80;
    num.at(4) = 90;
    
    cout << "\n\nupdated vector: ";
    for (const int& i : num) {
        cout << i << "  ";
    }
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
