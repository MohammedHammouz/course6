// Dynamic-allocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//void Enternumberofstudent() {
//    int number;
//    cout << "Enter number of students\n";
//    cin >> number;
//    float* ptr;
//    ptr = new float[number];
//    cout << "Enter grades of students\n";
//    for (int i = 0; i < number; i++) {
//        cout << "Student" << i + 1 << ":";
//        cin >> *(ptr + i);
//    }
//    for (int i = 0; i < number; ++i) {
//        cout << "Student" << i + 1;
//        cout << ":" << *(ptr + i) << endl;
//    }
//    delete[]ptr;
//}
struct stEmployee {
    string Name;
    float Salary;
    int counter;
};
int EnterpositiveNumber(int* number) {
    cout << "Enter a positive number\n";
    cin >> *number;
    return *number;
}
void EnterInformation2(string message) {

    stEmployee employee, * ptr;

    int* ptr2;
    int number = EnterpositiveNumber(&number);
    ptr = new stEmployee[number];
    for (int i = 1; i <= number; i++) {
        ptr2 = &i;
        cout << message << " " << *ptr2 << endl;
        cin >> ptr->Name;
        cin >> ptr->Salary;
        cout << (ptr->Name) << endl;
        cout << (ptr->Salary) << endl;
        
    }
    delete[]ptr;

}
int main() {
    EnterInformation2("Enter information of employee");
    
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
