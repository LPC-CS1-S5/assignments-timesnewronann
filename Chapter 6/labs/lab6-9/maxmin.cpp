#include <iostream>
using namespace std;

int maxmin(int n1, int n2, int n3, int &max, int &min)
{
  min = n1;
  if (min > n2)
	min = n2;
  if (min > n3)
	min = n3;

  max = n1;
  if (max < n2)
	max = n2;
  if (max < n3)
	max = n3;

  return 0;
}
