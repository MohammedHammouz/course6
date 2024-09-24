// Vectors-Pointers-Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;
struct stEmployee {
    string name;
    float salary;
};
int EnterPositiveNumber(int* number) {
    cout << "Enter number of employees:\n";
    cin >> *number;
    return *number;
}
void EnterEmployeeInformation(stEmployee& employee) {

    cout << "Enter employee name" << endl;
    cin >> employee.name;
    getline(cin, employee.name);
    cout << "Enter employee salary" << endl;
    cin >> employee.salary;
}
void ShowEmployeeInformation() {
    stEmployee* ptr;
    int num;
    int number = EnterPositiveNumber(&num);
    ptr = new stEmployee[number];
    for (int i = 0; i < number; i++) {
        EnterEmployeeInformation(ptr[i]);
    }
    for (int i = 0; i < number; i++) {
        cout << "Employee name: " << ptr[i].name << endl;
        cout << "Employee salary: " << ptr[i].salary << endl;
    }
    delete[]ptr;
}
int main() {
    ShowEmployeeInformation();
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
