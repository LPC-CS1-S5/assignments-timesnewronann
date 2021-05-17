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
void findusername(Students [], int, string);
int makerecord(Students []);
