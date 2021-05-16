#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUMCOURSE =2;
struct Student
{
 int id;
 string name;
 int score[NUMCOURSE];
 int sum;
 int avg;

};

int makingstructarray(Student []) // return value: the number of struct array
void printout(const Student);
void findusername(Student [], int, string);

int main()
{
  int numofRecords = 0;
  Student s[50];
  string username;

  numofRecords = makingstructarray(s);
  cout << "Total number of students records is " << numofRecords << endl;
  for (int i = 0; i < numofRecords; i++)
  {
    printout(s[i]);
  }

  cout << "Enter user name to find in Student's records\n";
  cin >> username;
  findusername(s, numofRecords, username);
}

int makingstructarray(Student s[])
{
  ifstream ifso;
  int idx = 0, j;

  ifso.open("students.txt"); // Read the "id" and "name"
  if (ifso) {
    idx = 0;
    while(ifso >> s[idx].id >> s[idx].name)
    {
      j = 0;
      s[idx].sum = 0;
      while ((j < NUMCOURSE) && (ifso >> s[idx].score[j]) ) // Read the two scores with the while-loop 
      //J : loop index for two scores
      // IDX : the index for the array "Student"
      {
        s[idx].avg = s[idx].sum / NUMCOURSE; // calculate the sum and average
        idx++;
      }
    }
  }
  return idx;
}

void printout(const Student s)
{

}

void findusername(Student s[], int numofRecords, string username)
{

}