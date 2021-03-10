#include <iostream> 
using namespace std;

int main () 
{
  int num;
  int b, e;
  bool isPrime = true;

  cout << "Enter a starting value: " << endl;
  cin >> b;

  cout << "Enter an ending value: " << endl;
  cin >> e;

  cout << "The prime numbers between " << b << " and " << e << " are: " << endl;

  while ( b < e) {
    isPrime = true;
    if (b == 0 || b == 1) {
      isPrime = false;
    }
    else {
      for (int i = 2; i <= b / 2; ++i) {
        if ( b % i == 0) {
          isPrime = false;
          break;
        }
      }
    }
    if (isPrime)
      cout << b << " ";
    ++b;
  }
  return 0;
  }
 

  