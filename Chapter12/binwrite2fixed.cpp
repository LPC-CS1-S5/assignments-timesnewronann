#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int N=20;
struct Namerecords {
	char	stname[N];
	char 	sex[N];
	int 	year;
	char 	name[N];
	int 	count;
};

int main()
{
	ofstream ofs;
	Namerecords nr;

	ofs.open("name.bin");

	strcpy(nr.stname, "CA");
	strcpy(nr.sex, "F");
	nr.year = 2019;
	strcpy(nr.name, "Mary");
	nr.count = 10;

	ofs.write( (char *)&nr, sizeof(nr));

	ofs.close();
}
// seekg()
// seekp()
//