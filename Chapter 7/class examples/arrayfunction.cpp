#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int makearray(int [], int);

int main()
{
	const int N = 10;
	int 	num1[N] ;
	int 	num2[N] ;
					// 9  9  9.  9 .... 9 
	int 	num3[N];
  
	srand(time(0));
	makearray(num1, N);
	makearray(num2, N);
	

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


int makearray(int n[], int SIZE)
{

	for(int i=0;i< SIZE;i++)
	{
		n[i] = rand() % 10;
		cout << n[i] << "\t";
	}
	cout << endl;
}
	
	

