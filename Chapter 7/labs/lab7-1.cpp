#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int makearray(int, []); // function to make the array
void bubble(int [], int); // function to switch the numbers around
void printout(int [], int); // function to print it out

const int SIZE = 100; // size of the array

int main()
{
  int number[SIZE]; // array number
  int last;

  last = makearray(number); 
  printout(number, last); // calling functions back into the main
  bubble(number, last);
  printout(number, last);

}

int makearray(int number[])
{
  int last;
  srand(time(NULL));
  do {
    last = rand() % 20;
  } while (last < 10);

  for (int i = 0; i <last; i++)
  {
    number[i] = rand() % 100;
  }
  return last;

}

void bubble(int number[], int last)
{
  for (int i=0; i < last-1; i++)
  {
    if (number[i] > number[i+1])
    {
      swap(number[i], number[i+1]);
    }
  }
}

void printout(int number[], int last)
{
  for (int i = 0; i < last; i++)
  {
    cout << setw(5) << number;
    cout << endl;
  }
}