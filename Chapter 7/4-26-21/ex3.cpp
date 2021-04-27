#include <iostream>
using namespace std;

void printarray(int n[]);
void printarray(int *p);
const int N = 10;

int main()
{
  int num[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  printarray(num);

}

void printarray1(int n[])
{
  for (int i = 0; i < N; i++)
  {
    cout << *(n+i) << endl; // even though you received array format you can use the pointer notation
  }
}

void printarray2(int *p)
{
  for (int i = 0; i < N; i++)
  {
    cout << p[i] << endl; // you can use the array notation in a pointer format
  }
}