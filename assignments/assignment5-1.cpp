#include <iostream>

using namespace std;

int main() {
  int n, num; 
  int nthPower = 1; 
  float invertnthPower;

  cout << "Enter a number: " << endl;
  cin >> n;

  if ( n > 0) {
    num = n; 
  }
  else {
    num = n * -1;
  }

  for (int i = 0; i < num; i++ ) {
    nthPower *= 2;
  }
  if  (n < 0) {
    invertnthPower = 1.0 / nthPower;
    cout << invertnthPower;
  }
  else {
    cout << nthPower;
  }
  

}