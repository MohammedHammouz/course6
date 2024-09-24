// Dealingwithstrings(Some-CCTYPE-Functions).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    char x;
    char w;
    x = toupper('a');
    w = tolower('A');
    cout << "converting a to A: " << x << '\n';
    cout << "converting A to a: " << w << '\n';
    //Digits (A to Z)
    //returns zero if not ,and non zero if yes
    cout<<"isupper('A'): " << isupper('A') << endl;
    //returns zero if not ,and non zero if yes
    cout<<"islower('A'): " << islower('A') << '\n';
    //Digits (0  to 9)
    //returns zero if not ,and non zero if yes
    cout << "isdigit('A'): " << isdigit('A') << '\n';
    //puntuation characters are !'#$%&`()*+-.|:i<=>?@[\]^_'{|}~
    cout << "ispunct('A'): " << ispunct('A') << endl;
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
