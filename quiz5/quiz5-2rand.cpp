#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num, min;
  int i;
  srand(time(0));

  min = 100;
  i = 0;
  while (i <5)
  {
    num = rand() % 100; 
    cout << num << "\t";
    if (min > num)
      min = num;
    i += 1;
  }
  cout << "\nMin value is " << min << endl;
}