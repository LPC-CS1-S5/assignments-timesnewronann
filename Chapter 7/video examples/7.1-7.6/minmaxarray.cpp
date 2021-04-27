#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
  const int N  = 10;
  int num[N] = {10, 25, 15, 20, 30, 35, 40 ,45, 50, 55};
  int min, max;

  // FInding min and max in array with the ranged based for loop
  min = max = num[0];

  for (int value : num)
  {
    if (min > value)
      min = value;
    if (max < value)
      max = value;
  }
  cout << "Min" << min << endl;
  cout << "Max" << max << endl;
}