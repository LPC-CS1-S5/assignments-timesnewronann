#include <iostream>
using namespace std;

void getinput(int &, int &);

int main()
{
  int begin,end;

  getinput(begin,end);
}

void getinput(int, &n1, int &n2)
{
  cin >> n1 >> n2;
}