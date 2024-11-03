//Terrence Williamson
//11.01.2024
//Chapter 5 Programming Project
//Student-Lineup

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string n1 = "Oliver\n", n2 = "Blaire\n", n3 = "Anna\n", n4 = "Timothy\n";
int names = 0;

int main()
{
    ofstream outputFile;
    outputFile.open("LineUp.txt"); //create output file
    outputFile << n1 << n2 << n3 << n4; //write student names to file
    outputFile.close();

    ifstream inputFile;
    inputFile.open("LineUp.txt");
    for (; getline(inputFile, n1); names++) //using getline to explicitly show how many names
        for (; getline(inputFile, n2); names++)
            for (; getline(inputFile, n3); names++)
                for (; getline(inputFile, n4); names++)
                    inputFile.close();

    inputFile.open("LineUp.txt"); //reopening file
    while (inputFile >> n1 >> n2 >> n3 >> n4) {

        cout << "There are " << names << " students in the class.\n";
            if (n1 < n2 && n1 < n3 && n1 < n4) //get first student in line
            cout << n1 << " is at the front of the line.\n";
        else if (n2 < n1 && n2 < n3 && n2 < n4)
            cout << n2 << " is at the front of the line.\n";
        else if (n3 < n1 && n3 < n2 && n3 < n4)
            cout << n3 << " is at the front of the line.\n";
        else if (n4 < n1 && n4 < n2 && n4 < n3)
            cout << n4 << " is at the front of the line.\n";

        if (n1 > n2 && n1 > n3 && n1 > n4) //get last student in line
            cout << n1 << " is at the back of the line.\n";
        else if (n2 > n1 && n2 > n3 && n2 > n4)
            cout << n2 << " is at the back of the line.\n";
        else if (n3 > n1 && n3 > n2 && n3 > n4)
            cout << n3 << " is at the back of the line.\n";
        else if (n4 > n1 && n4 > n2 && n4 > n3)
            cout << n4 << " is at the back of the line.\n";
    }
    inputFile.close();   
}
