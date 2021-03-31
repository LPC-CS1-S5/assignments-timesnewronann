#include <iostream>
using namespace std;

int getListprime(int);

void getListprime(int begin= 0, int end = 100)
{
int i, j;
if ( begin <= 1 || end <= 1 )
  return;
for ( i = begin; i < end; i++)
{
  for (j = 2; j <= (i/j); j++)
    {
      if (i % j == 0)
        break;
    }
  if (j > (i/j))
  cout << i << "is a prime number\n";
}
}

int main()
{
  int begin, end;
  do {
    cout << "Enter your input (two integer for range)" << endl;
    cin >> begin >> end;
    if (begin < end)
    {
      getListprime(begin,end);
    }
    else if(begin < end)
    {
      getListprime();
    }
    else
    {
      getListprime(begin);
    } 
  }while (begin != -1);
} 