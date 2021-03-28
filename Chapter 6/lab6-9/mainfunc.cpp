#include <iostream> 
using namespace std;

int getinput(int &, int &, int &);
int maxmin(int, int, int, int &, int &);

int main()
{
  int num1, num2, num3;
  int max, min;

  getinput(num1, num2, num3);
  maxmin(num1,num2, num3, max,min);
  cout << "The gap between " << max << "and " << min " : " << maxmin << endl;
}