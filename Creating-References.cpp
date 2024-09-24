// Creating-References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //define and declare variable
    int a = 10;
    //define variable and declare the address of variable of a frommemory
    int& x = a;
    
    //print the result
    cout<<"The address of a variable is: " << &a << endl;
    cout << "The address of x variable is: " << &x << endl;

    //Output:
    //The address of a variable is: 00000061176FF7E4
    //The address of a variable is: 00000061176FF7E4

    cout << a << endl;
    cout << x << endl;

    //Output:
    //10
    //10

    x = 20;
    cout << a << endl;
    cout << x << endl;

    //Output:
    //20
    //20

    x = 30;
    cout << a << endl;
    cout << x << endl;

    //Output:
    //30
    //30
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
