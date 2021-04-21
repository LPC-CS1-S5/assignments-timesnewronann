#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;
int makearray(int []);
void printout(int [], int);

void swapfold(int [], int);
void sumfold(int [], int);
void equalfold(int [], int [], int);

const int SIZE =100;

int main()
{
  int mask[SIZE];
  int number[SIZE];
  int equal[SIZE];
  int lat;

  last = makearra(number);
  printout(number, last);

  swapfold(number,last);
  printout(number,last);

  sumfold(number,last);
  printout(number, ceil(last/2.0));

  last = makearray(number);
  printout(number,last);

  equalfold(number, equal, last);
  printout(equal, ceil(last/2.0))
}

int makearray(int number[])
{
  int last;
  srand(time(NULL));
  do
  {
    last = rand() %20;
  } while (last <10);

  for (int i =0; i < last; i++)
  {
    number[i] = rand() % 10;
  }
  return last;
}


void swapfold(int number[], int last)
{
  for (int i = 0; i <last / 2; i++)
  {
    swap(number[i], number[last- i - 1]);
  }
}