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
}

int findMax(int number[], int from, int to)
{
  int max = 0;
  int maxTwo = 0;
  for (int i = to/2; i <= to; i++)
  {
    if(maxTwo < num[i])
    {
      maxTwo = num[i];
    }
  }
  return max,maxTwo;
}
