#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
  int pow;
  int i;
  int base , exp;
  base = 5;
  exp = 10;

  cout << "Enter the base and exponent : ";
  cin >> base >> exp;
  i= 0; pow = 1
  while ( i < exp) {
    pow= pow * base;
    i+= 1;
  }
  cout << "pow " << pow << endl;
  
}