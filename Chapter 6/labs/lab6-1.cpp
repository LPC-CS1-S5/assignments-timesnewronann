#include <iostream>
using namespace std;
// Funtion Prototype
bool	 inputvalidate(int, int); // function header 
void 	getlistprime(int, int); // function header
int main()
{
	int num1, num2;

	do {
		cout << "Enter two numbers : "; 
		cin >> num1 >> num2;
	} while( !inputvalidate(num1,num2) );  // function call for input validate

	getlistprime(num1, num2); // function call for getlist prime
}