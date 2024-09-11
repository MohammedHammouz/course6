// AddElementstovectorarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h";
using namespace std;
char ReadNumbersToArray(vector <int>& arr) {
    char start = 'y';
    do {
        int number=ReadNumber();
        arr.push_back(number);
        cout << "Do you want to add more numbers to array (y/n)? ";
        cin >> start;
    } while (start == 'y' || start == 'Y');
    return start;
}

void PrinNumbersInvectoArray(vector <int>& arr) {
    cout << "Vector Numbers:\n\n";
    for (int number : arr) {
        cout << number << endl;
    }
}

char ReadNumbersToArray2(vector <int>& arr) {
    char start = 'y';
    do {
        int number = ReadNumber();
        arr.push_back(number);
        cout << "Do you want to add more numbers to array2 (y/n)? ";
        cin >> start;
    } while (start == 'y' || start == 'Y');
    return start;
}

void PrinNumbersInvectoArray2(vector <int>& arr) {
    cout << "Vector Numbers2:\n\n";
    for (int number : arr) {
        cout << number << endl;
    }
}

int main()
{
    vector <int> arr;
    ReadNumbersToArray(arr);
    vector <int> arr2;
    ReadNumbersToArray2(arr2);
    PrinNumbersInvectoArray(arr);
    PrinNumbersInvectoArray2(arr2);
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
