#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getRandnum(int &, int &, int &);
int findMin(int , int , int );
void printResult(int , int , int , int );

int main()
{
  int n1,n2,n3;
  int min;
  getRandnum(n1, n2, n3);
  min = findMin(n1, n2, n3);
  printResult(n1, n2, n3, min);

}

void getRandnum(int &n1, int &n2, int &n3)
{
  srand(time(0));
  n1 = (rand() % 100);
  n2 = (rand() % 100);
  n3 = (rand() % 100);

  cout << "3 random numbers " << n1 << " " << n2 << " " << n3 << endl;
}

int findMin(int n1, int n2, int n3)
{
  int min;
  if (min > n1) {
    min = n1;
    if (n1 > n2)
      min = n2;
      if (n2 > n3)
      min = n3;
  }
}

void printResult(int n1, int n2, int n3, int min)
{
  cout << "Number 1: " << n1 << endl;
  cout << "Number 2: " << n2 << endl;
  cout << "Number 3: " << n3 << endl;
  cout << "Min: " << min << endl;

}