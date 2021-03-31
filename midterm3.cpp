#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRdnum();
  //no parameters and generates one random num (1-50), return num
int isGreater(int n);
  // check that number passed is greater than the preceding number, if yes return 1 no return 0
const int N = 10; // N defined as 10

int main()
{
  int rdNum;
  ofstream outputFile;
  srand(time(0));

  outputFile.open("numbers.txt");

  if(!outputFile)  {
    cerr << "Error: File not opened\n";
    exit(0);
  }
  for (int i=0; i)
}

int getRdnum()
{
  return rand() % 50 + 1;
}

int isGreater(int n)
{

}