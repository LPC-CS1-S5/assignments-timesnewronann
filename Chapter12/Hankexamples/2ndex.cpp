#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
  char name[50];
  int age;
  float gpa;
};

int main()
{
  const int SIZE = 3;
  Student old_students[SIZE] = {
    {"Hank", 48, 3.58},
    {"Tom", 25, 2.50},
    {"Rick", 22, 3.90}
  };

  fstream f;
  f.open("records.dat", ios::out | ios:: binary);

  if(f.is_open())
  {
    f.write(reinterpret_cast<char*>(old_students), SIZE*sizeof(Student));
    f.close();
  }
  else
    cout << "ERROR!\n";

  Student new_students[SIZE];

  f.open("records.dat", ios::in | ios:: binary);

  if(f.is_open())
  {
    f.read(reinterpret_cast<char*>(new_students), SIZE*sizeof(Student));
    f.close();
  }
  else 
    cout << "ERROR!\n";

  for(Student& s: new_students)
  {
    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.gpa << endl;
  }

}