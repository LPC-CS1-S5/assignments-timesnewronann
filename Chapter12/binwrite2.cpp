#include <iostream>
#include <fstream>
using namespace std;

struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

int main()
{
	ofstream ofs;
	Namerecords nr;

	ofs.open("name.bin");

	nr.stname = "CA";
	nr.sex 	= "F";
	nr.year = 2019;
	nr.name = "Mary";
	nr.count = 10;

	ofs.write( (char*)&nr, sizeof(nr)); // access the whole field

	ofs.close();
}