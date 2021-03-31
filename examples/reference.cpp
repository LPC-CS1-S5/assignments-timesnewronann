#include <iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;
	int &ref = num1;
	
	ref = num2;

  cout << "num1" << num1 << endl;
  cout << "num2" << num2 << endl;
  cout << "ref" << ref << endl;
  num1 = 0;

}

