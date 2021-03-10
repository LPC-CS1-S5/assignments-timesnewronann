#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    string name;
    int nStudents;
    double score1, score2, average;


    cout << "Enter the number of student scores that will be written: ";
    cin >> nStudents;
    cout << endl;

    ofs.open("dataOut.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error";
        exit(0);
    }

    for (int i = 0; i < nStudents; i++) 
    {
        cout << "Enter the student's name: ";
        cin >> name;
        ofs << name << endl;

        cout << "\nEnter the first score: ";
        cin >> score1;
        ofs <<score1;

        cout << "\nEnter the second score: ";
        cin >> score2;
        ofs << score2 << endl;


        if (!ofs.fail())
            cout << "Data written into the file\n"; //Dialoge confirms output to file
    }
    ofs.close();
}