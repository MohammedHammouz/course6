// Float-Format.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float PI = 3.1415929265;
    // percesion specifications
    printf("Percision specification of %.*f\n",1,PI);
    printf("Percision specification of %.*f\n", 2, PI);
    printf("Percision specification of %.*f\n", 3, PI);
    printf("Percision specification of %.*f\n", 4, PI);

    float x = 7, y = 9;
    printf("\n the float division is: %.3f / %.3f = %.3f\n\n",x,y,x/y);

    double d = 12.45;
    printf("The double value is %.3f\n", d);
    printf("The double value is %.4f\n", d);
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
