#include <iostream>
using namespace std;

int myfunction(void);

int main()
{
  myfunction();
  myfunction();

  myfunction();
  myfunction(); // to call back static into the main use the name of function
}

int myfunction(void)
{
  static int num = 0;

  num += 10;

  cout << "myfunction: " << num << endl;
  return 0;
}