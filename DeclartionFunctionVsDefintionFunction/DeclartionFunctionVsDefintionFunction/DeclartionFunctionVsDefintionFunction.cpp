// DeclartionFunctionVsDefintionFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// declare a function
void add(int&, int&);
//define function
int ReadNumber() {
    int number = 0;
    cin >> number;
    do {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter a validate number:" << endl;
        cin >> number;
    } while (cin.fail());
    return number;
}
int main()
{
    int a;
    int b;
    cout << "Enter a number a:\n";
    a = ReadNumber();
    cout << "Enter a number b:\n";
    b = ReadNumber();
    add(a,b);
}
void add(int &a, int &b) {
    cout<<a + b<<endl;
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
