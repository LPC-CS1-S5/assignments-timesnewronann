#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int N = 10;
  int num[N] = {10, 25 15, 20, 30, 35, 40, 45, 50, 55};
  int sum = 0;
  int evensum = 0, oddsum = 0;

  for (int i = 0; i <N; i++)
  {
    sum+= num[i];
  }
  cout << "Summation of array: " << sum << endl;

  // summation with even and odd index values

  for (int i = 0; i < N; i++)
  {
    if (i %2 == 0)
    {
      evensum = num[i];
    }
    else 
    {
      oddsum =num[i];
    }
  }
  cout << "Sum with even index \n" << evensum << endl;
  cout << "Sum with odd index \n" << oddsum << endl;
}