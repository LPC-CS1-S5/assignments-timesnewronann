#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum() // random num 1-100
int getRdnum(int n2) // random num 1 - n2
int getRdnum(int n1,int n2) // random number n1 + 1, n2

int main()
{
  int random;
  srand(time(0));

  cout << "Random number that is from 1 - 100: " << getRdnum() << endl;
  cout << "Random number that is from 1 - n2: " << getRdnum(n2) << endl;
  cout << "Random number that is from n1 + 1 to n2" << getRdnum()
}

int getRdnum()
{
  return rand() % 100 + 1;
}

int getRdnum(int n2)
{
  int num;
  num = rand() % (100 - n2 + 1 ) + n;
  return num;

}

int getRdnum(int n1, int n2)
{
  int num;
  num = rand()% (n2 - n1 + 1) + n1;
  return num;
}