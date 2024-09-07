// Static-Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void MyFuncStaticVariable() {
    static int number = 1;
    cout << number << endl;
    number++;
}

void MyFuncVariable() {
    int number = 1;
    cout << number << endl;
    number++;
}
int main()
{
    // using static variable then the memory will save variable value
    MyFuncStaticVariable();//1
    MyFuncStaticVariable();//2
    MyFuncStaticVariable();//3
    // using variable then the memory will not save variable value
    MyFuncVariable();//1
    MyFuncVariable();//1
    MyFuncVariable();//1
    
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
