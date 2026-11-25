// file section #5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("students.txt", ios::app);

    if (!outFile)
    {
        cout << "Error opening file!";
        return 1;
    }

    char choice;
    char name[20];
    int id;
    float grade;

    do
    {
        cout << "Enter student name: ";
        cin >> ws;
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        outFile << name << ", " << id << ", " << grade << "$" << endl;

        cout << "Do you want to add more records? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outFile.close();

    cout << "Records saved successfully!";

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
