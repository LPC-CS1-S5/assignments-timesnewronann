#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int num1, num2;
	int sum;
	int i;

	do {
		cout << "Enter two numbers " ;
		cin >> num1 >> num2;
	} while( (num1 > num2) || (num1 < 0) || (num2 < 0));
  
	while ( num1 <= num2)
	{
		if ( num1 % 2 == 0)
			sum = sum + num1++;
	}
	cout << " sum " << sum << endl;



}