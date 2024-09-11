// vector-functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    vector <int> vNumbers;
    int Size = 0;
    int Capacity = 0;
    vNumbers.push_back(10);

    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(20);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(30);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(40);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(50);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(60);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(70);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(80);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(90);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(100);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(110);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;


    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vNumbers.push_back(120);
    Capacity = vNumbers.capacity();
    Size = vNumbers.size();
    cout << "Size: " << Size << endl;
    cout << "Capacity: " << Capacity << endl;

    vector <int> vec;
    for (int i = 1; i <= 12; i++) {
        vec.emplace_back(i);
        cout << vec.size() << endl;
        cout << "Capacity: " << vec.size() << endl;
    }
    vec.shrink_to_fit();
    cout << "vec after shrink:" << vec.capacity();
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
