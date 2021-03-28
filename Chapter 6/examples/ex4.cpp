#include <iostream>
using namespace std;

int myfunction(void);


int i = 300;
int main()
{

  int i, returnval;
  i = 100;
  returnval = myfunction();

  for (int i = 0; i < 10; i++)
  {
    cout << i << " " ;
  } // value of for loop i will be until the }
  cout << "i: " << endl;
}

int myfunction()
{
  i = 200;
  cout << "myfunction " << i << endl;

  return i;
}