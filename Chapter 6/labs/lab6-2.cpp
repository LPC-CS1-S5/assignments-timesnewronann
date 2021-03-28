#include <iostream>
using namespace std;

double nthpowerp(int);
double nthpowern(int);
void printout(int);

int main()
{
  int n;
  int result;

  cout << "Enter your input";
  cin >> n;

  if (n > 0)
  {
    result = nthpowerp(n);
  }
  else if (n < 0) 
  {
    result = nthpowern(n);
  }
  else 
  {
    result = 1;
  }

  printout(result);

}