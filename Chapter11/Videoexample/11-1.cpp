#include <iostream>
#include <fstream>
using namespace std;

const unsigned short NUMCOURSE = 2;
struct Student { // Struct tag
  int id;
  string name;
  int score[NUMCOURSE];
  int sum;
  int avg;

};

int main()
{
  ifstream ifs;
  int i, j;

  ifs.open("students.txt");
  if (!ifs)
  {
    cout << "File open error" << endl;
    exit(0);
  }
}