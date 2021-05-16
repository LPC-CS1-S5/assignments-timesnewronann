#include <iostream>
#include <fstream>
using namespace std;

const int NUMCOURSE = 2;

struct Scores{
  int score[NUMCOURSE];
  int sum;
  int avg;
  };

struct Students{
  int id;
  string sname;
  Scores screcord;
};

void printrecord(Students s);

int main()
{
  const int N = 10;
  ifstream ifs;
  Students s[N];
  int i;

  ifs.open("students.txt");
  if (ifs.fail())
  {
    cerr << "File open Error " << endl;
    exit(0);
  }
  
  while(ifs >> s[i].id >> s[i].sname >> s[i].screcord.score[0] >> s[i].screcord.score[i])
  {
    s[i].screcord.sum = 0;
    for (int idx = 0; idx < NUMCOURSE; idx++)
    {
      s[i].screcord.sum += s[i].screcord.score[idx];
    }
    s[i].screcord.avg = s[i].screcord.sum / NUMCOURSE;
    i++;
  }

  i = 0;
  while (i < 10)
    printrecord(s[i++]); // just gets one 

// Find the particular student's record
// Maxim's record 

  string username = "Maxim";

  for (int i = 0; i < N ; i++)
  {
   if (s[i].sname.find(username) != string :: npos)
    {
     cout << "We found the record for Maxim\n";
      printrecord(s[i]);
    }
  }
}

void printrecord(Students s)
{
    cout << "Student ID: " << s.id << endl;
    cout << "Student name: " << s.sname << endl;
    for (int idx = 0; idx < NUMCOURSE; idx++)
    {
      cout << "Student record: " << s.screcord.score[idx] << endl;
    }
    cout << "Sum: " << s.screcord.sum << endl;
    cout << "Average: " << s.screcord.avg << endl;
}