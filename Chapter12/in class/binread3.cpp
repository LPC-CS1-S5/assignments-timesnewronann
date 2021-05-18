#include <iostream>
#include <fstream>
#include <iomanip>
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
	ifstream ifs;
	Namerecords nr;

	ifs.open("name.bin");

	cout << sizeof(nr) << endl;
	
	ifs.seekg(sizeof(nr), ios_base::beg); 
	ifs.read((char*)&nr, sizeof(nr));

	cout << setw(5) << nr.stname << "\t";
	cout << setw(3) << nr.sex << "\t";
	cout << setw(5) << nr.year << "\t";
	cout << setw(10) << nr.name << "\t\t";
	cout << setw(5) << nr.count << endl;


	ifs.close();	
}