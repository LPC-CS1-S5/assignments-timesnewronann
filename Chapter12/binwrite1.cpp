#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  
  int i = 10; // 0000 0000 0000 0000 0000 0000 1010
  int j = 1;
  int k = 16;
  char c = 'C';

  ofs.open("name.bin");

 // ofs.write((char&*)(&i, 4));

 // ofs.write(&c, 1);

 ofs.write((char*)&i , 4);
 ofs.write((char*)&j , 4);
 ofs.write((char*)&k , 4);

  ofs.close();
}