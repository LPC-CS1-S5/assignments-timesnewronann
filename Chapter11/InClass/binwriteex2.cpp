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
  Woo niceguy1;
  Woo niceguy2;
	ofstream 	ofs;

	ofs.open("ronan.bin");

	cout << "Size of Strucutre" << sizeof(Woo) << endl;
  strcpy(niceguy1.nice, "poopoo");
  niceguy1.stuff = 20;
  strcpy(niceguy1.stuff1, "help");
	ofs.write( (char *)&niceguy1, sizeof(Woo) );
  
  strcpy(niceguy2.nice, "peepee");
  niceguy2.stuff = 30;
  strcpy(niceguy2.stuff1, "resolved");
	ofs.write( (char *)&niceguy2, sizeof(Woo) );

	// ifs << i;

	// 1st : the location of storage to write
	// 2nd : size of that storage
	ofs.close();

}