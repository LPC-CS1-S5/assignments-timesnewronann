#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int i;
  int j;
  int k;

  ifs.open("name.bin");

  ifs.read( (char*)&i, 4);
  cout << i << endl;

  ifs.read(&c, 1);
  cout << c << endl;

  ifs.read( (char*)&j, 4);
  cout << j << endl;
  
  ifs.read( (char*)&k, 4);
  cout << k << endl;
  
}