#include <iostream> 

using namespace std;

int main() {

  int moneyEarned = 6000;
  double percent1 = 0.05;
  double percent2 = 0.07;
  double percent3 = 0.1;

  double savings1;
  double savings2;
  double savings3;

  savings1 = moneyEarned * percent1;
  savings2 = moneyEarned * percent2;
  savings3 = moneyEarned * percent3;

  cout << "If you put 5% in savings you will put: " << savings1 << endl;
   cout << "If you put 7% in savings you will put: " << savings2 << endl;
    cout << "If you put 10% in savings you will put: " << savings3 << endl;
}