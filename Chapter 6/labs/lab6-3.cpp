// write a program that chekc the given two lines are overlapped each other or not in one dimensional graph. The line is denoted by (x1, x2), x1< x2
#include <iostream>
using namespace std;

boolean inputvalidate(int, int);
boolean overlap(int, int ,int ,int);

int main()
{
  int x1, x2, x3, x4;
  cout << "Enter you input\n";
  cin >> x1 >> x2 >> x3 >> x4;

  if (!inputvalidate(x1, x2) || !inputvalidate(x3, x3))
    exit(0);

  if (overlap(x1,x2,x3,x4))
    cout << "Two lines are overlapped\n";
  else
    cout << "Two lines are not over\n";
    
}

bool inputvalidate(int x1, int x2)
{
  if (x1 < x2)
    return true;
  else 
    return false;
}

bool overlap(int x1, int x2, int x3, int x4)
{
  int flag = 1;
  if (x2 <= x3)
    flag = 0;
  else if (x4 <= 1)
    flag = 0;
  return flag;
}