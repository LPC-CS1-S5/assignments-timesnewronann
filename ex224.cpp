//ronan
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int num1, num2;
  int sum;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  
  sum= 0;
  do {
    sum = num1 + num2;
    cout << num1++ << endl;
  } while (num1 < num2);
}