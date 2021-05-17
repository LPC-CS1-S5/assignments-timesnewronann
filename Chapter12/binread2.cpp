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
	ifstream ifs;
  Namerecords nr;
	
	ifs.open("name.bin");

	ifs.read( (char *)&nr, sizeof(nr) ); 

  cout << nr.stname << endl;
  cout << nr.sex << endl;
  cout << nr.year << endl;
  cout << nr.name << endl;
  couit << nr.count << endl;

  ifs.close();
	
}