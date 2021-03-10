#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () 
{
  int base, exp;
  int powernum =1;
  int i;
  
  cout << "Enter a base: " << endl;
  cin >> base;
  cout << "Enter an exponent: " << endl;
  cin >> exp;


  
  cout << base << " to power number : " << powernum << ", ";

  for (i = 0; i < exp; i++)
  {
    powernum = powernum * base ;
    cout << powernum << ", ";
  }
}