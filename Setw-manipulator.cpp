// Setw-manipulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "-----------------|------------------------------------------|----------------------------" << endl;
    cout << "    Code         |            name                          |           mark             " << endl;
    cout << "-----------------|------------------------------------------|----------------------------" << endl;
    cout << setw(11)<<"C101" << setw(7) <<"|"<<setw(39)<<"Introduction to programming1" << setw(4) << "|" << setw(14)<<"95" << setw(14) << "|" << endl;
    cout << setw(11) << "C102" << setw(7) << "|" << setw(28) << "Computer Hardware" << setw(15) << "|" << setw(14) << "88" << setw(14) << "|" << endl;
    cout << setw(11) << "C103" << setw(7) << "|" << setw(19) << "Networks" << setw(24) << "|" << setw(14) << "88" << setw(14) << "|" << endl;
    cout << "-----------------|------------------------------------------|----------------------------" << endl;
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
