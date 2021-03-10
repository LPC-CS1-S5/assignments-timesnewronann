// Write a program that displays the characters by the order of ASCII value from 0 to 127
// Display 16 characters in each line

#include <iostream>

using namespace std;

int main() {
  
  int i = 0;
  
  while (i <= 127) 
  {
    cout << static_cast<char>(i);
    i++;
  }
  if (i % 16 == 0) {
    cout << endl;
    }
    else {
      exit(0);
    }
  
}

