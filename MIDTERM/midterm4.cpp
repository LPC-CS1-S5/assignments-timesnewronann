#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum(); // random num 1-100
int getRdnum(int n2); // random num 1 - n2
int getRdnum(int n1,int n2); // random number n1 + 1, n2

int main()
{
  int random;
  srand(time(0));

	int n1 = 10; // used as a range
	int n2 = 20;
  cout << "Random number that is from 1 - 100: " << getRdnum() << endl;
  cout << "Random number that is from 1 - n2: " << getRdnum(n2) << endl; // declare n2
  cout << "Random number that is from n1 + 1 to n2 " << getRdnum(n1, n2);
}

int getRdnum()
{
  return rand() % 100 + 1;
}

int getRdnum(int n2)
{
  int n;
  int num;
  num = rand() % n2 + 1; // fix to have a proper number
  // 1 ~ n2; rand() % n2
  return num;

}

int getRdnum(int n1, int n2)
{
  int num;
  num = rand()% (n2 - n1 + 1) + n1; // fix 
  return num;
  
}