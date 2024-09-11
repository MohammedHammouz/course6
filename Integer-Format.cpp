// Integer-Format.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int Page = 1, TotalPages = 10;
    //print string and variables
    printf("The page number = %d\n", Page);
    printf("You are in page %d of %d\n", Page,TotalPages);

    // wide specification
    printf("The page number =%0*d \n",2,Page);
    printf("The page number =%0*d \n", 3, Page);
    printf("The page number =%0*d \n", 4, Page);
    int number1 = 20, number2 = 30,result=0;
    printf("The result of %d + %d = %d \n",number1,number2, number1+number2);
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
