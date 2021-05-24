#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  char cstr[100] = "Character Array";

  ofs.open("bin.out", ios::out|ios::binary );

  ofs.write(cstr, strlen(cstr)); // cstr is the array name. Array name has the address for the first element
              // The first parameter is the address of memory
              // The second parameter is the size of the writing
}