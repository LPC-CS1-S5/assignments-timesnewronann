#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  const int SIZE = 10; // size of array
  int n[SIZE] = {-25, 0, 10, 15, 19, 20, 25, 30, 45}; // array with the list of numbers 

  for(int i = 0; i < SIZE; i++)
  {
    if (i != 9)
    {
      if (abs(n[i] - n[i+1]) < 10)
      {
        cout << "The absolute value of " << n[i] << " - " << n[i+1] << " = " << n[i] - n[i+1] << " is less than 10" << endl;
      }
    }
    else if ( i == 9)
    {
      if (abs(n[i] - n[i-1]) < 10)
      {
        cout << " The absolute value of " << n[i] << " - " << n[i-1] << " = " << n[i] - n[i-1] << " is less than 10" << endl;
        cout << "The first element is " << n[i-1] << endl;
      }
    }
  }

}