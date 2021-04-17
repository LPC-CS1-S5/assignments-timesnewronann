#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const int N =10; 
  int num1[N] = {0,1,2,3,4,5,6,7,8,9};
  int num2[N]; // copy with reverse order // 9,8,7... 0

  for (int i = 0; i < N; i++)
  {
    num2[i] = num1[N-i-1];

  }
  for (int v: num2)
  {
    cout << v << "\t";
  cout << endl;
  }
}