#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 int num, min;
 int i;
 srand(time(0));

 min = 100;	// min should be initialized
 i = 0;
 while (i < 5)
 {
   num = rand() % 100; // random numbers range from 0 - 100
   cout << num << "\t";
   if (min > num) // if condition to make the loop
    min = num;
   i += 1;
 }
 cout << "\nMin value is " << min << endl;

}






	