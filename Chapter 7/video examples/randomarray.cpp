#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
  const int N= 10; // length of the array
  int num[N];

  srand(time(0));

  for(int i = 0; i < N; i++)
  {
    num[i] = rand() % 100;
  }

  for(int i=0; i < N; i++)
  {
    cout << num[i] << "\t";
  }