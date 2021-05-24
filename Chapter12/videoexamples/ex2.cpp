#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  char str[256];

  ifs.open("cany.txt", ios::in);
  if (!ifs)
  {
    cout << "File Open Error\n";
    exit(0);
  }

  ifs.getline(str,256, ','); // get the first field
  cout << str << endl;
  ifs.getline(str,256, ','); // get the second field
  cout << str << endl;


}