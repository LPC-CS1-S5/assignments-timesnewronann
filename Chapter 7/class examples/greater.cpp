#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main()
{
	const int N = 10;
	int 	num1[N] = {0, 1, 2 ,3, 4, 5, 6, 7, 8, 9};
	int 	num2[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
					// 9  9  9.  9 .... 9 
	int 	num3[N];
  

  for(int i = 0; i < N; i++)
  {
   		 if (num1[i] < num2[i])
			num3[i] = num2[i];
		else
			num3[i] = num1[i];
  }

	for(int v: num3)
		cout << v << "\t";
}


