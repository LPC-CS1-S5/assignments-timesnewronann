//write a program that validates the integer user input such that (user input > 0) and (user input < 100). If the user input is not valid, take another again until it would be valid.
// Once the user input valid, print out the user input.

#include <iostream>

using namespace std;

int main() {

int userInput;
cout << "Enter a value: " << endl;


cin >> userInput;

while((userInput < 0) || (userInput >100)) 
{
  cout << "Enter a value again: " << endl;
  cin >> userInput;
  userInput++;
}
cout << userInput;

}
