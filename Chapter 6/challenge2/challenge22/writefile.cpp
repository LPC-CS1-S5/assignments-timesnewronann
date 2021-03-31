#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writefile (ofstream &ofs, int div)
{
  ofs << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error \n";
    exit(0);
  }
}


