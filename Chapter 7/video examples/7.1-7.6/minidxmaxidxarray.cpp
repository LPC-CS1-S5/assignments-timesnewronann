#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
  const int N  = 10;
  int num[N] = {10, 25, 15, 20, 30, 35, 40 ,45, 50, 55};
  int min, max;
  int minidx, maxidx;

  // FInding min and max in array with the ranged based for loop
  min = max = num[0];
  minidx = maxidx = 0;

  for (int i = 0; i < N; i++)
  {
    if (min > num[i]) {
      minidx = i;
      min = num[i];
    }
    if (max < num[i]) {
      maxidx = i;
      max = num[i];
    }
  cout << "Min" << min << << " index " << minidx << endl;
  cout << "Max" << max << << " index " << maxdx << endl;
}