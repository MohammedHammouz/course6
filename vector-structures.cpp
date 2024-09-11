// vector-structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>

using namespace std;
struct stEmployee {
    string First_Name;
    string Last_Name;
    float Salary;
};

void ReadNumbersToArray(vector <stEmployee>& vEmployee) {
    char start = 'y';
    do {
        stEmployee Employee;
        cout << "Enter employee first name:\n";
        cin >> Employee.First_Name;
        cout << "Enter employee last name:\n";
        cin >> Employee.Last_Name;
        cout << "Enter employee salary:\n";
        cin >> Employee.Salary;
        vEmployee.push_back(Employee);
        cout << "Do you want to add more employee information (y/n)? ";
        cin >> start;
    } while (start == 'y' || start == 'Y');
    
}

void PrinNumbersInvectoArray(vector <stEmployee>& vEmployee) {
    cout << "Vector Numbers:\n\n";
    for (stEmployee &Employee : vEmployee) {
        cout << Employee.First_Name << endl;
        cout << Employee.Last_Name << endl;
        cout << Employee.Salary << endl;
        cout << endl;
    }
}

int main()
{
    vector <stEmployee> vEmployee;
    ReadNumbersToArray(vEmployee);
    PrinNumbersInvectoArray(vEmployee);    
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
