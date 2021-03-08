#include <iostream>
using namespace std;

int main () {
  
  cout << "First Index" << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "(" << i << "," << j << ")" << endl;
    }
  }

  cout << "Second Index" << endl;

  for (int i = 0; i <3; i++) {
    for (int j = 1; j < 3; j++) {
       cout << "(" << i << "," << j << ")" << endl;
    }
  }

  cout << "Third Index" << endl;


  for (int i = 0; i <3; i++) {
    for (int j=0; j <3; j++) {
        cout << "(" << i << "," << j << ")" << endl;
    }
  }

}















