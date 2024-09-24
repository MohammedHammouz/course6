// Dealingwithstrings-String-Object(common method).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string S1 = "My name's Mohammed Hammouz,I love programming";
	cout << S1.length() << endl;
	cout << S1.at(3) << endl;
	S1.append(" @ProgrammingAdvices");
	S1.insert(9, " Said");
	cout << S1.substr(15, 8) << endl;
	S1.push_back('X');
	cout << S1 << endl;
	S1.pop_back();
	cout << S1 << endl;
	cout << S1.find("said") << endl;
	if (S1.find("said") == S1.npos) {
		cout << "said is not found" << endl;
	}
	S1.clear();
	cout << S1 << endl;
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
