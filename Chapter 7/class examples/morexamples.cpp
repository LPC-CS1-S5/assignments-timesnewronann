#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  char name[] = "programming";

  for (int i = 0; i < sizeof(name); i++)
  {
    cout << name[i] << " " ;
  }
  cout << endl;

  for(char pname: name)
  {
    cout << pname << endl;
  }
}