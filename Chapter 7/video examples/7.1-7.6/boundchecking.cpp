//bounds checking = memory address calculation- base address of array + data size of element x i
// out of range

#include <iostream>
using namespace std;

int main)_
{
  const int SIZE = 3;
  int i;
  int number[SIZE] = {10, 20, 30};

  for (i = 0; i <= 10; i++)
  {
    number[i] = i;
    cout << i << "inserted" << endl;
  }

  for (i= 0; i <= 20; i++)
  {
    cout << number[i] << endl;
  }
  return 0;
}

// Do not access the out of index even if there is not any compile error it doesn't make errors but creates garbage values.