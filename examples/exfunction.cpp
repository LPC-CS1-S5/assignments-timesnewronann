#include <iostream>
using namespace std;

int main() 
{
  int num1, num2;
  int sum;

  sumresult = 0;

  cout << "Enter two integers: ";
  cin >> num1 >> num2;

  //sum = num1 + num2;
  sumresult = sum(num1,num2); // function call
  cout << "Sum: " << sumresult << endl;
}



int sum(int n1, int n2) // function header
{
  int sum;
  sum = n1 + n2; // function body
  return sum; //return statement
}