#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int begin, end;
  int i;

  cout << "Input two integers: " << endl;
  cin >> begin >> end;
  
      if ((begin < 0) || (end > 1300)) {
    cout << "Input two integers less than 1300 and greater than 0" << endl;
      }
      else {
      i = 0;
      }
  
  for (i = begin; i < end; i++) {
    cout << pow(2,i) << endl;
    i++;
  }
}



    
  
  


  
