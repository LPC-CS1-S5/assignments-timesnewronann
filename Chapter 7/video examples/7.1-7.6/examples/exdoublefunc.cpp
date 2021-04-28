#include <iostream>
using namespace std;

double powernumbers(int,int);

int main()
{
	double M,N,i;
 
	do{
	cout <<  "please , enter the base number and exponent: " << endl;
	cin >> N >> M;
	}
	while (N <= 0 || N >= 10 || M < 1 || M > 10);

	powernumbers(N, M);
	
}

double powernumbers(double base, double exponent)
{
	int i;
	double nthPower=1;
	for (i = 1; i<M; i++) {      
		nthPower *= N;
	cout << "power of " << i << ": " << nthPower << endl;

	return nthPower;
}