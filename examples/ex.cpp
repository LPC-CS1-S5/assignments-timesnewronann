#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	int i;
	int sum; // local variables : not initialized 

	i = 0;
  sum =0;
	while (i < 10)
	{
		sum += i;
		i++;
	}
	cout << "sum " << sum << endl;

  i - 0;
  while (i++ < 10)
    cout << i << endl; // 0,1,2,3... 9

  i = 0;
  while (i++ <10) // starts from 0 but print value is not from 0 - 1,2,3,4,5,6... 10
    cout << i << endl;
  
  i = 0;
  while (++i < 10) // starts at 1 1,2,3,4,... 9
    cout << i << endl;

  /* while loop
  1. lcv initial
  2. condition
  3. ++/ -- */

}
