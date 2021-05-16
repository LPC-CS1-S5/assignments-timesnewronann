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
  Student s;

  ifs.open("students.txt");
  if (!ifs)
  {
    cout << "File open error" << endl;
    exit(0);
  }
  while (ifs >> s.id >> s.name)
  {
    sum = 0; 
    j = 0;
    while (j < NUMCOURSE && ifs >> s.score[j])
    {
      s.sum +=s.score[j];
      j+=1;
    }
    s.avg = s.sum/ NUMCOURSE;
    cout << "ID: \t" << s.id << "\t" << "Name: \t" << s.name << "\t" << "Score1: \t" << s.score[0] << "Score2: \t" << s.score[1] << "Sum: \t" < s.sum << "Average: \t" << s.avg << endl;
    i+=1;
  }
  cout << "Total lines: " << i << endl;
}