#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;

  ifs.open("ronan.bin");

  ifs.read((char *)&readint , 4); // read the file four bytes and then store into the integer

  cout << readint << endl;

  // write program i --> converted into binary program 00000... 1010
  // value is then read by the read program.
}