#include <iostream>
using namespace std;

int sum(int, int); // Funtion Prototype

int main()
{
	int 	num1, num2;
	int 	sumresult;

	sumresult = 0;

	cout << "Enter two integers :";
	cin >> num1 >> num2 ;

	// sum = num1 + num2;
	sumresult = sum(num1, num2);
	cout << "Sum : " << sumresult << endl;// fucntion call
}

int sum(int n1, int n2)
{
	int  sum;
	sum = n1 + n2;
	return sum;
}

int powernumber(int N, int M)
{
  int i;
  i = 0;
  int nth power = 1;
  for (i = 1; i < M; i++){
    nthPower *= N;
  cout << "power of " << i << ": " << nthPower << endl;
  }
}

/* void powernumbers (int N, int M)
{
  int i;
  int nthPower
