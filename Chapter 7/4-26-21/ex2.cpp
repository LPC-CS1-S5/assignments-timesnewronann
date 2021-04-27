#include <iostream>
using namespace std;

int main()
{
  const int N = 10;
  int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int *p; 
  int i;

  num = &i;
  p = &i; // array always points to the first element of the list
  // array name is a pointer 
  // Constant pointer. Always points to the first element in array. Any address can be assigned pointer variable
  
  for (int i = 0; i < N; i++)
  {
    cout << num[i] << "\t";
  }
  cout << endl;
  for (int i = 0; i < N; i++)
  {
    cout << *(num+i) << "\t";
  }
  cout << endl;
  p = num;
  for (int i = 0; i < N; i++)
  {
    cout << *(p+i) << "\t";
  }
  cout << endl;

}