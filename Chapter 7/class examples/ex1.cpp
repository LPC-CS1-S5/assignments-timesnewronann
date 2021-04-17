#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main()
{
	const int N = 10;
	int 	num1[N] ;
	int 	num2[N] ;
					// 9  9  9.  9 .... 9 
	int 	num3[N];
  
	srand(time(0));
	for(int i=0;i<N;i++){
		num1[i] = rand() % 10;
		num2[i] = rand() % 10;
	}
	for(int v: num1)
		cout << v << "\t";
	cout << endl;
	for(int v: num2)
		cout << v << "\t";
	cout << endl;

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


