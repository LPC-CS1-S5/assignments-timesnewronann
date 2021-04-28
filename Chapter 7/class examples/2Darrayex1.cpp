#include <iostream>
using namespace std;

int main()
{
  double num[3];

  for(int i = 0; i < 3; i++)
  {
    cout << num[i];
    cout << *(num+i); // address calculation num + (i * unit size)

  }
}