#include <iostream>
#include <fstream>
using namespace std;

struct Student // created a record 
{
  char name[50];        
  int age;
  float gpa;
} ;

int main()
{
  Student stu = {"Hank", 48, 3.58}; // initialized 

  fstream f;
  f.open("records.dat", ios::out | ios:: binary); //open a file in binary mode for writing 

  if(f.is_open()) // verified if it was open 
  {
    f.write(reinterpret_cast<char*>(&stu), sizeof(Student)); // if open write the contents 
                                          // used sizeof to make sure # of bytes was right
    f.close();
  }  
  else
    cout << "Error!\n";
  
  Student newStu; // when that finished created a seperate student variable 
  f.open("record.dat", ios::in | ios:: binary); // reading in binary mode
  if (f.is_open()) 
  {
    f.read(reinterpret_cast<char*>(&newStu), sizeof(Student)); // read the bytes to the 
                                                                // memory location 
    f.close();
  }
  else 
    cout << "Error!\n";

  cout << newStu.name << endl; // print out the contents of the variable 
  cout << newStu.age << endl;
  cout << newStu.gpa << endl;
}