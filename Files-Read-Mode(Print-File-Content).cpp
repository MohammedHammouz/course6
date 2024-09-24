// Files-Read-Mode(Print-File-Content).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include<vector>
using namespace std;
void PrintFileContent(string);
void SaveVectorDataToFile(string, vector<string>);
void DeleteRecordFromFile(string, string);
void LoadDataFromFileToVector(string, vector<string>& );
void UpdateRecordFromFile(string, string);
void PrintFileContent(string FileName) {
    fstream Myfile;
    //Myfile.open(FileName, ios::out|ios::app);//read mode
    //Myfile << "Mohammed\n";
    //Myfile << "Ali\n";
    //Myfile << "Hashem\n";
    //Myfile << "Hashem\n";
    //Myfile << "Hashem\n";
    //Myfile << "Odai\n";
    //Myfile << "Essam\n";
    //Myfile << "Ghazl\n";
    //Myfile.close();
    Myfile.open(FileName, ios::in);//read mode
    if (Myfile.is_open()) {
        string Line;
        while (getline(Myfile, Line)) {
            cout << Line << endl;
        }
        Myfile.close();
    }


}
void LoadDataFromFileToVector(string FileName, vector<string>&vFileContent) {
    fstream MyFile;
    MyFile.open("Myfile.txt", ios::in);
    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void SaveVectorDataToFile(string FileName, vector<string>vFileContent) {
    fstream MyFile;
    MyFile.open("Myfile.txt", ios::out);
    if (MyFile.is_open()) {
        for (string& Line : vFileContent) {
            if (Line != " " ) {
                MyFile << Line << endl;
             
            }
        }
        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record) {

    vector<string>vFileContent;
    LoadDataFromFileToVector(FileName,vFileContent);
    for (string& Line : vFileContent) {
            if (Line == Record) {
                Line = " ";
            }
    }
    SaveVectorDataToFile(FileName, vFileContent);
}

void UpdateRecordFromFile(string FileName, string Record) {
    vector<string>vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = "Out";
        }
    }
    SaveVectorDataToFile(FileName, vFileContent);
}

int main()
{
    /*vector<string> vFileContent;*/
   /* LoadDataFromFileToVector("Myfile.txt",vFileContent);*/
    /*SaveVectorDataToFile("Myfile.txt", vFileContent);*/
    /*for (string& Line : vFileContent) {
        cout << Line << endl;
    }*/
    PrintFileContent("Myfile.txt");
    cout << endl;
    DeleteRecordFromFile("Myfile.txt","Hashem");
    cout << "MyFile after deleting\n";
    PrintFileContent("Myfile.txt");
    UpdateRecordFromFile("Myfile.txt", "Ghazl");
    cout << "MyFile after updating\n";
    PrintFileContent("Myfile.txt");
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
