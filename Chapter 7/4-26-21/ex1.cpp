#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const int N = 5, M = 3;
  int num[N] = {10, 15, 20, 25, 30};
  int subarray[M] = {10, 20, 25};
  // array num has all element of subarray
  // True or false 
  int result = 1; 

  for (int i = 0; i < 4; i++) // First loop to traverse all elements in the subarray
  {
    for (j = 0; j < N; j++) // Second loop to traverse all elements in the num
    {
      if(subarray[i] == num[j])
      {
        result = 0;
        break;
      }
      
    }
  }
  cout << result << endl;
  if (result)
  {
    cout << "ALl elements are in num array" << endl;
  }
  else 
  {
    cout << "All elements are not in num array" << endl;
  }
}