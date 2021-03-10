#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    int N;
    string stuName;
    double score1, score2;

    ofs.open("stuRecord.txt"); //open
    if (ofs.fail())
    {
        cerr << "File open error" << endl;
        exit(0);
    }

    cout << " Enter the number of students : ";
    cin >> N;

    ofs << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "What is the student's name: " << endl;
        cin >> stuName;
        ofs << stuName << " ";
        for (int j = 0; j < 2; j++)
        {
            cout << "What is the score? " << endl;
            cin >> score1;
            ofs << score1 << " ";
        }
        ofs << endl;
    }
    ofs.close();
}