#include <iostream>
#include <fstream>
using namespace std;

int main()
{
const int NUMCOURSE = 2;
ifstream ifs;
struct student
{
  int id;
  string name;
  int score[NUMCOURSE];
  int sum;
  int avg;

};
student s;

ifs.open("students.txt");

while(i < 10)
{
  ifs >> s.id;
  cout << "ID : " << s.id << endl;
  ifs >> s.name;
  cout << " name : " << s.name << endl;
  for(int j = 0; j < NUMCOURSE;j++)
  {
    ifs >> s.score[j];
      cout << " score : " << s.score[j] << endl;
    s.sum += s.score[j];
  }
 // ifs >> s.score[NUMCOURSE];
 // ifs >> sum;
 // ifs >> avg;
 cout << " Sum : " << s.sum << endl;
 s.avg = s.sum / 2;
 cout << " Avg : " << s.avg << endl;
  i++;
}
ifs.close();
}