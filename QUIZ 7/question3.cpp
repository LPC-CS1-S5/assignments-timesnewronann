#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int findMax(int number[], int from, int to);
const int N = 10;

int main()
{
  int number[N] ={10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  int from = 0; // starting index of the range 
  int to = N - 1; // the last index of the range 
  int max;
  int maxTwo;

  max = findMax(number, from, to);
  cout << max << endl;
}

int findMax(int number[], int from, int to)
{
  int max = 0;
  int maxTwo = 0;
  
  for (int i = from; i < to/2; i++) // from is basically 0 so from the start to the middle of the list
  {
    if (max < number[i])
    {
      max = number[i];
    }
  }
  for (int i = to/2; i <= to; i++) // traverse the array half way to the end of the list
  {
    if(maxTwo < number[i])
    {
      maxTwo = number[i];
    }
  }
  return max,maxTwo;
}
