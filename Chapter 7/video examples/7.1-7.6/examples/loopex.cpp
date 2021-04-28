
#include <iostream>
using namespace std;

int main()
{

	int i =0 ;

	while (i<10)
	{
		cout << " i : " << i << endl;
		i += 1;
	}
	
}//while loop

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  srand(time(0));
  int index = 0;
  int num;
  while (index < 10)
  {
    num = rand() % 100;
    if (num % 2 == 0)
      { 
        cout << num << " is an even random number" << endl;
      }
    index += 1;
  }
  return 0;
}
//ronan
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
  int num1,num2,num3,num4;
  int max = 100;
  srand(time(0));
//while loop is confusing to me compared to the for loops
  for (int i = 0; i <10; i++) {
    cout << "The random number is : " << rand()%max << endl;
  }
   i =0;
  while(i < 10 )
  {
	  	num1 = rand() % max;
		if (num1 % 2 == 0)
			cout << "i is eve
  }
 

}

}