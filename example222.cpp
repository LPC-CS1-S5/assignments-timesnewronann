#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  int num,sum;
  int i;
  srand(time(0));
  sum = 0;
  /* 1. lcv initialization
     2. condition to terminate
     3. lcv increament/ decreament */

  i = 0;
  while ( i< 10) //condition
  {
    num = rand() %  100;
    if ( num % 2 == 0) //random number is even)
    sum  = sum +num;
      cout << num << " is even" << endl; //print
    else 
      cout << num << " is odd" << endl;
    i += 1; 
  }
  cout << "sum " << sum << endl;
}