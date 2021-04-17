#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main()
{
	const int N = 10;
	int 	num1[N] = {0, 1, 2 ,3, -4, 5, 6, 7, 8, 9};
	int 	num2[N] ; // copy with reverse order.
					 // 9, 8, 7,.. 0
	int min, max, size;
  min = max = num1[0];
  for (int i = 1; i < N; i++)
  {
    if (min > num1[i])
      min = num1[i];

    if (max < num1[i])
      max = num1[i];
      
  }

  cout << "Min Values" << setw(5) << min << endl;
  cout << "Max Values" << setw(5) << max << endl;
	