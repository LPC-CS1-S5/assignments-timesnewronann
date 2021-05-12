#include <iostream>
using namespace std;

int main()
{
  struct student { // struct tag "student" is name of struct
    int id;
    string sname;  
  }; // *Declaration the struct 

  student s1 = {12345678, "Ellain"}; // Declaration the struct variable and initialization

  student s[10]; // Array of the struct student
  
  for(int i =0; i <10; i++) // loop for traversing the struct student
  {
    cout << "Enter your id:";
    cin >> s[i].id;
    cout << "Enter your name: ";
    cin >> s[i].sname;
  }


  // Nested structure
  struct nested {
    int number;
    student s[19] // struct "nested" has the type as a member variable 
  };

  nested n;
  n.number = 10;
  n.s[0].id = 12345678;
  n.s[0].sname = "Ellain"; //* Accessing the nested struct element


  nested n;
  n.number = 10;
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter your id: ";
    cin >> n.s[i].id;
    cout << "Enter your name: ";
    cin >> n.s[i].sname ;
  }



  cout << s1.id << endl; // *Accessing the member variable
  cout << s1.sname << endl;



}