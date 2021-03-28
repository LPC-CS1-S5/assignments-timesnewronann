#include <iostream>
using namespace std;

int main () {
  
  cout << "First Index" << endl; // This is one is good
  int N;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < i+1; j++) {
      cout << "(" << i << "," << j << ")" << endl;
    }
  }

  cout << "Second Index" << endl; // This one is good

  for (int i = 0; i <3; i++) {
    for (int j = i; j < 3; j++) {
       cout << "(" << i << "," << j << ")" << endl;
    }
  }

  cout << "Third Index" << endl;

  for (int i = 0; i <3; i++) {
    for (int j=2; j >0; j--) {
        cout << "(" << i << "," << j << ")" << endl;
    }
  }

}















