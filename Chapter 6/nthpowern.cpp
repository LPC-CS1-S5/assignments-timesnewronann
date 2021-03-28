#include <iostream>
using namespace std;
double nthpowern(int num)
{
  int i;
  float invertnthPower;
  int nthPower = 1;
  
  num = num * -1;
  
  for (i = 0; i < num; i++)
  {
    nthPower *=2;
  }
  invertnthPower = 1.0/ nthPower;

  cout << "2" << "^" << num  << "=" << invertnthPower << endl;

  return invertnthPower;

}