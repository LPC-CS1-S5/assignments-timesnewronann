#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	const int N = 10;
	int 	num1[N] = {0, 1, 2 ,3, 4, 5, 6, 7, 8, 9};
	int 	num2[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	

	int sum = 0;
  for (int i =0; i<N; i++)
  {
    sum = num1[i] + num2[N-i-1];
    cout << sum<< endl;
  }
 
}
