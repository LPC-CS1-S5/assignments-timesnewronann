#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num1[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
  int num2[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};

  for(int i=0; i < 10; i++)
  {
    if (num1[i] != num2[i])
      break;
  }
  if (i == 10)
    cout << "Two arrays are the same" << endl;
  else{
    cout << "Two arrays are different at the position " << i << endl;
  }
}