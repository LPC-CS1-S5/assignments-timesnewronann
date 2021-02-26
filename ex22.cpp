//yi

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int base, exponent;
  int counter;
  int num = 1;

  cout << "Please enter the base and the exponent: " << endl;
  cin >> base >> exponent;
  counter = exponent;
  while (counter > 0) 
  {
    num = num * base;
    counter -= 1;
  }
  cout << base << "**" << exponent << " = " << num << endl;
  return 0;
}