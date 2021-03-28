#include <iostream>
using namespace std;

int getsum(int);

int main()
{
  int n, res;
  cout << "Enter your input\n";
  cin >> n;

  res = getsum(n);
  cout << "The summation result is " << res;
  return 0;
}

int getsum(int)
{
  int N;
  int numbers;
  int sum;
  int minimum;
  int maximum;

  cout << " How many numbers in your list? ";
  cin >> N;
  for (int i=0; i < N; i++)
  {
  cout << "Enter your numbers in the list: ";
  cin >> numbers;
  sum += numbers;
  cout << numbers;
  cout << sum;

  
  }
}