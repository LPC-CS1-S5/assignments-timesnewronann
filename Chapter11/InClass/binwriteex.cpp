#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Woo {//ex is woo, stuff and niceguy but you could name it anything
  char nice[10];
  int stuff;
  char stuff1[10];
};

int main()
{
  Woo niceguy;

  strcpy(niceguy.nice, "poopoo");
  niceguy.stuff = 20;
  strcpy(niceguy.stuff1, "help");

	ofstream 	ofs;

	ofs.open("ronan.bin");
	// ifs << i;

	// 1st : the location of storage to write
	// 2nd : size of that storage
	ofs.write( (char *)&niceguy , sizeof(Woo) );
	ofs.close();

}