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
	Woo niceguy[10];
	ofstream 	ofs;
	int id  = 0;

	ofs.open("ronan.bin");

	cout << "Size of Strucutre" << sizeof(Woo) << endl;
	for(int i=0; i<10; i++)
	{
		strcpy(niceguy[i].nice, "poopoo");
		id += 10;
		niceguy[i].stuff = id;
		strcpy(niceguy[i].stuff1, "help");
		ofs.write( (char *)&niceguy[i], sizeof(Woo) );
	}
 

	// ifs << i;

	// 1st : the location of storage to write
	// 2nd : size of that storage
	ofs.close();

}