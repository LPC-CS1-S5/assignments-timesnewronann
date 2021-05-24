/*We are going to check the inclusion relationship between the two arrays. In this program, we need to check that the "numbers1" is a subset of the "numbers2"(no need to check a reverse way). We assume that two arrays "numbers1" and "numbers2" have the sorted order(increasing).

If it is implemented without a nested-loop, you can get the extra points.
tips: Two arrays have already sorted in ascending order.
*/

#include <iostream> // cin and cout 
#include <cctype> // cstring stuff
using namespace std;

bool POOP(int numbers1[], int numbers2[], int SIZE1, int SIZE2); // funciton prototype 

int main()
{
  const int SIZE1 = 5;  // provided in the question prompt 
  const int SIZE2 = 10; // array lengths ^
  int numbers1[SIZE1] = {2, 3, 5, 9, 10}; // array with the list 
  int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17}; 

  if(POOP(numbers1,numbers2,SIZE1,SIZE2)) 
    cout << "Numbers1 is a subset of the numbers2" << endl; 
  else 
    cout << "Numbers1 is not a subset of the numbers2" << endl;



}

bool POOP(int numbers1[], int numbers2[], int SIZE1, int SIZE2) // function header 
{
  int i; // I got an error that said J was not delcared in the scope so I brought the 
          // declaration out 
  int j;
  for (i = 0; i < SIZE1; i++) // I'm not sure how to do this without a nested loop
  {
    for (j = 0; j < SIZE2; j++)
    {
      if (numbers1[i] == numbers2[j])
      break;
    }
    if ( j == SIZE2)
      return 0;
  }
  return 1; 
}