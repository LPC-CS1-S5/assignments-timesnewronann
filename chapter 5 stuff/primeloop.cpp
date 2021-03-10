#include <iostream>
using namespace std;

int main() {
  int num;
  int i;

  cout << "Enter the number: " ;
  cin >> num;

  for(i=2; i < num; i++) {
  
    if (num % i == 0) {
      break;
    }
  }
  if (i != num) {
   cout << num << " is not a prime" << endl;
  }
  else 
    cout << num << " is a prime number" << endl;
}