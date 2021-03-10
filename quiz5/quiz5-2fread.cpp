#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream ifs;

  int num;
  int employees;
  int ID;
  string name;
  string department;
  double salary;
  int average, total; 

  ifs.open("employee.txt");
  if (ifs.fail())
  {
    cerr << "File open error\n";
    exit(0);
  }

  total = 0;
//   while (ifs >> employees)
//   {
//     ifs >> employees >> ID >> name >> ;
//     i++;
//   }

  for (int i = 0; i <= employees; i++)
  {
    ifs >> employees >> ID >> name >> department >> salary;
    total += salary;
    cout << "worked";
  }
  cout << total;
  average = total / employees;
  cout << average;

  ifs.close();
}