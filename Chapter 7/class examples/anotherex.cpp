#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int makearray(int[], int);
int isSame(int[], int, int);
int main()
{
  const int N = 10;
  int num1[N] ;
  int num2[N] ;
  int input;

  srand(time(0));
  makearray(num1,N);
  makearray(num2,N);
  cin >> input;
  isSame(num1,N, input);
  isSame(num2,N, input);

 
}

int isSame(int num1[], int N, int input)
{
 for (int i = 0; i < N; i++)
  {
    if (num1[i] == input)
      cout << "This array has the same input" << endl;
 
  }
}

int makearray(int n[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
  {
    n[i] = rand() % 10;
    cout << n[i] << "\t";
  }
  cout << endl;
}