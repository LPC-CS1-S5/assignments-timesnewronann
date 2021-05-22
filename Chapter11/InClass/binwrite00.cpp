#include <iostream>
#include <fstream>
using namespace std;

struct Woo {//ex is woo, stuff and niceguy but you could name it anything
  string nice;
  int stuff;
  string stuff1;
};

int main()
{
  Woo niceguy;

  niceguy.nice = "poopoo peepee";
  niceguy.stuff = 20;
  niceguy.stuff1 = "help";

	ofstream 	ofs;

	ofs.open("ronan.bin");
	// ifs << i;

	// 1st : the location of storage to write
	// 2nd : size of that storage
	ofs.write( (char *)&niceguy , sizeof(Woo) );
	ofs.close();

}