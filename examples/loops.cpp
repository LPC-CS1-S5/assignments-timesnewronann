#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int num1, num2;
	int sum;
	int i;

	cin >> num1 >> num2;
  // 1) while loop
	i = num1 ;
	while ( i <= num2)
	{
		if ( num1 % 2 == 0)
			sum = sum + i++;
	}
	cout << " sum " << sum << endl;

	// 2) 2nd version of while loop
	while ( num1 <= num2)
	{
		if ( num1 % 2 == 0)
			sum = sum + num1++;
	}
	cout << " sum " << sum << endl;

	//3) do-while loop
	do 
	{
		if ( num1 % 2 == 0)
			sum = sum + num1++;
	} while ( num1 <= num2) ;
	cout << " sum " << sum << endl;
  
  
  	do {
		cout << "Enter two numbers " ;
		cin >> num1 >> num2;
	} while( (num1 < num2) && (num1 > 0) && (num2 >0));



}
}