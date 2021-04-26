#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const int N = 5, M = 2;
  int num[N] = {10, 15, 20, 25, 30};
  int subarray[M] = {10, 17, 25};
  // array num has all element of subarray
  // True or false 
  int result = 0; 

  for (int i = 0; i < 4; i++) // First loop to traverse all elements in the subarray
  {
    for (j = 0; i < N; i++) // Second loop to traverse all elements in the num
    {
      if(subarray[i] == num[j])
      {
        result =1;
        break;
      }
      
    }
  }
  if (result = M)
  {
    cout << "ALl elements are in num array" << endl;
  }
  else 
  {
    cout << "All elements are not in num array" << endl;
  }
}