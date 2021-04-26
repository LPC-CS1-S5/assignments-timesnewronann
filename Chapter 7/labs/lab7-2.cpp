#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// all the functions to make the arrays/programs
int makearray(int []); 
void makemask(int [], int last);
void applymask(int [], int [], int);
void printout(int [], int);

const int SIZE = 100;

int main() 
{
  int mask[SIZE]; // array with the index of size (index 100)
  int number[SIZE]; // aray with the index 100
  int last; // making an integer

  last = makearray(number); // setting the function make array = to last
  printout(number, last); // function call
  makemask(mask, last); // function call
  printout(mask, last); // function call

  applymask(number, mask, last); // function call
  printout(number, last) // function call
}

int makearray(int number[])
{
  int last;
  srand(time(NULL));
  do {
    last = rand() % 20;
  } while (last < 10);

  for (int i = 0; i < last; i++)
  {
    number[i] = rand() % 100;
  } 

  return last;
}


void makemask(int mask[], int last)
{
  for (int i = 0; i < last; i++)
  {
    mask[i] = rand() % 2;
  }

}

void applymask(int number[], int mask[], int last)
{
  for (int i = 0; i < last; i++)
  {
    number[i] = (mask[i] && number[i]) ? number[i] : 0;
  }
}

void printout(int number[], int last)
{
  for (int i = 0; i < last; i++)
  {
    cout << setw(5) << number[i];
  }
cout << endl;
}