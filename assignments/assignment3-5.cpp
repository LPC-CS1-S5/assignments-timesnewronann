//ronan
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int num1, num2, num3;

  srand(time(0));

  num1 = random() %100;
  num2 = random() %100;
  num3 = random() %100;

  cout << "Random number 1: " << num1 << endl;
  cout << "Random number 2: " << num2 << endl;
  cout << "Random number 3: " << num3 << endl;
  
}