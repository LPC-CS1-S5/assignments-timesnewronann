#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int N = 10;
  int num[N] = {1, 2, 3, 4 ,5 ,6 ,7 ,8 ,9, 10};

  for (i = 0; i < 10; i++)
  {
    cout << setw(5) << num[i];

  }
  cout << endl;

  for (int value: numbers)
  {
    cout << setw(5) << value;
  }
  cout << endl;
}