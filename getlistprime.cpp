#include <iostream>
using namespace std;

void getlistprime(int num1, int num2)
{
  int i, j;
  for (i = num1; i < num2; i++)
  {
    for (j = 2; j < (i/2); j++)
    {
      if (i % j==0)
      break;
    }
    if (i==j)
    cout << i << " is prime number" << endl;
  }
}