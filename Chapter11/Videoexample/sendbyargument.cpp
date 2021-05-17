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

void printrecord(const Student); // call-by-value sesnd an argument with call by-value

int main()
{
  Student s;
  printrecord(s); // call-by-value send an argument
}

void printrecord(const Student s)
{
  // finish the function
}