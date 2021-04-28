#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// Print the number from 0 to 9 by using the for-loop
	int num;
  int sum = 0;
  cout << "Enter a number: ";
  cin >> num;


  for(int i= 0; i < num; i++)
  {
    cout << i << endl;
    sum = sum + i;
  } 
  cout << "The sum is: " << sum << endl;
  }

