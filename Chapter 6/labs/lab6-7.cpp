#include <iostream> 
#include <iomanip>

using namespace std;

void getInput(int &, int &, int &); // function that gets user input but doesn't return
void swap(int &, int &, int &); // function to create the swap
void swapTwo(int &, int &); // where the swap takes place through the temp variable


int main()
{
  int num1, num2, num3;
  getInput(num1, num2, num3);
  cout << "Before swap: " << setw(5) << num1 << setw (5) << num2 << setw(5) << num3 << endl;

  swap(num1, num2, num3);
  cout << "After swap: " << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;

}

void getInput(int &num1, int &num2, int &num3)
{
  cout << "Enter your three values\n";
  cin >> num1 >> num2 >> num3;

}

void swap( int num1, int num2, int num3)
{
  swapTwo(num1, num2);
  swapTwo(num1, num3);
}

void swapTwo( int&i, int&j)
{
  int tmp;
  tmp = i;
  i = j;
  j = tmp;
}