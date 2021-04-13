#include <iostream>
using namespace std;

void swapTwoValues(int &, int&);
void swapTwoValues(float&, float&);

main()
{
  swapTwoValues(n1, n2);
  swapTwoValues(f1, f2);
}

void swapTwoValues(int &n1, int &n2)
{
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}

void swapTwoValues(float &f1, float &f2)
{
  float tmp; 
  tmp = f1;
  f1 = f2;
  f2 = tmp;
}