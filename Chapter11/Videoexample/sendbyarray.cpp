#include <iostream>
using namespace std;

const unsigned short NUMCOURSE = 2;
struct Scores{
    int scores[NUMCOURSE];
    int sum;
    int avg;
};

struct Students{
    int id;
    string name;
    Scores screcord;
};

void printrecord(Student []); // send by array

int main()
{
  Student s[10];
  printrecord(s); 
}

void printrecord(Student s[]) // Student s can be modified in this function
{
  // finish the function
}