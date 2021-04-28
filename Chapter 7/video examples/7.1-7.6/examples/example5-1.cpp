#include <iostream> 
using namespace std;

int main() 
{
  int base, powernum, exp, end, start;
  cout << "Enter the base and power number" << endl;
  cin >> base >> exp ;

  int i = 0;
  powernum = 1;
  while (i < exp)
  {

      powernum = powernum * base;
      i++;
  }
  cin >> start >> end;
  powernum = 1;
  while ( powernum < start){
    powernum *= 2;
  }
  while (powernum < end) {
    powernum = powernum *2;
    cout << powernum;
  }
}