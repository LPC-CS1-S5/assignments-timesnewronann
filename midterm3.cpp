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
  for (int i=0; i < N; i++)
  {
    rdNum = getRdnum();
    if (isGreater(rdNum))
    {
      outputFile << rdNum << endl;
    }
  }
  outputFile.close();
  return 0;
}

int getRdnum()
{
  return rand() % 50 + 1;
}

int isGreater(int n)
{
  static int prec = 0;
  int a, b;
  a = n;
  if(prec==0){
    prec = n;
    return(0);
  }
  if (prec < n) {
    
    prec = n;
    return(1);
  }
    else{
      prec = n;
    return(0);
    }
  }
  
