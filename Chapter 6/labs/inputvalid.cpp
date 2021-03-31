#include <iostream>
using namespace std;

bool inputvalidate(int num1, int num2) // boolean for num1 and num2 be correct inputs
{
  if (num1 < num2) 
    return true;
  else
    return false;
}