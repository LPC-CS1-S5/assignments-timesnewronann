
#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "Enter different integer values for Numbers 1, 2, and 3" << endl;
  cin >> num1 >> num2 >> num3;  // need to fix like below
//   cin >> num1 >> num2 >> num3;

  if(num1 < num2)
  {
		if(num1 < num3)
		{
		cout << "Number 1: " << num1 << " is the smallest number" << endl;
		}
		else
		{
		cout << "Number 3: " << num3 << " is the smallest number" << endl;
		}
  }	
  else
  {
    if (num2 < num3)
    {
      cout << "Number 2: " << num2 << " is the smallest number" << endl;
    }
    else
    {
      cout << "Number 3: " << num3 << " is the smallest number" << endl;
    }    
    
  }
}