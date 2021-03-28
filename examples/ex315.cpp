#include <iostream>
using namespace std;

int findmin(int, int, int);
int main()
{
  int num1, num2, num3;
  int min;
  num1=10;
  num2 =5;
  num3 =15;

  min = findmin(num1, num2, num3);
  cout << "Min is " << min << endl;
  
}