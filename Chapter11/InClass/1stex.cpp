#include <iostream>
using namespace std;

int main()
{
  // Once the tag is made it will be used as a data type
  struct Student // Structure Tag, you can delete the tag but instead of a tag you can give the variable directly
  {
    int id;         // Structure Members 
    string sname;
    double GPA;
  };  // } s ;      You need the semi colon after the brace

  Student s;
  Student s2;


  Student s;

  s.id = 10;         // Way to access individual fields
  s.sname = "John";
  s.GPA = 4.0

  cout << s.id << endl;
  cout << s.sname << endl;
  cout << s.GPA << endl;

}