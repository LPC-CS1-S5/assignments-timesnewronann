#include <iostream>
using namespace std;

int getinput(int);

int main()
{
  int num1, num2;
  getinput(num1, num2);
  cout << "Your input is " << num1 << num2 << endl;

}

int getinput(int &n1, int &n2)
{
  cout << "Enter two numbers : ";
  cin >> n1 >> n2;
  return;
}