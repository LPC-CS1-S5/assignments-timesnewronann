#include <iostream> using namespace std;

int myfunction(int, int);
int main()
{

  int num1, num2;
  num1 = 10;
  num2 = 5;

  myfunction(num1, num2)
  cout << "Num1: " << num1 << " " << "Num2: " << num2 << endl;


}

int myfunction(int num1, int num2)
{
  int tmp;
  tmp = num1;
  num1 = num2;
  num2 = tmp;
  cout << "Num1: " << num1 << " " << "Num2: " << num2; << endl;
}