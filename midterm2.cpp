#include <iostream>
#include <fstream> // need for text files
using namespace std;

int main()
{
  ifstream inputFile; // input file stream
  string name;
  int score1, score2, sum;
  double average;

  inputFile.open("students.txt"); // open input file
  if (!inputFile) // if file can't open
  {
    cerr << "Error: file was not opened";
    exit(0);
  }
  while (inputFile >> name >> score1 >> score2)
   {
     cout << "Student's name: " << name << "\t";
     cout << "Score 1: " << score1 << "\t";
     cout << "Score 2: " << score2 << "\t";
     cout << "Sum: " << sum << "\t";
     cout << "Avg: " << average << "\n";

   }
   inputFile.close();
   return 0;
}