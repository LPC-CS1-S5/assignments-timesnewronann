#include <iostream>
using namespace std;

int sum(int, int);
int main()
{
	int num1, num2;
	int result;
	num1 = 10;
	num2 = 20;
	result = sum(num1, num2);
	cout << "Result : " << result << endl;

}

int sum(int num1, int num2)
{
	int s;
	s = num1 + num2;
	return s;
}
