#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int i = 10; // first write integer with binary mode

  ofstream ofs;
  ofs.open("ronan.bin"); // binary file has the extension that was made by developer like png, or jpeg 
  // Need to give the write function 
  //ifs << i; // make a statement like this if you use a text file 

  // 1st: the location of storage to write (kind of variable/structure/memory space)
  // 2nd: the size of that storage 
  ofs.write((char *)&i, sizeof(i)); // 4 because of integer, better expression is sizeof(int) or direct which variable directly rather than the type sizeof(int) or sizeof(i) both work

  ofs.close();




}