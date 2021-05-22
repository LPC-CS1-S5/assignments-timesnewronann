#include <iostream>
#include <fstream>
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

	ifs.read( (char *)&nr, sizeof(nr)) ;

	cout << "Test\n";
	cout << nr.stname << endl;
	cout << nr.sex << endl;
	cout << nr.year << endl;
	cout << nr.name << endl;
	cout << nr.count << endl;

	ifs.close();	
}

// string is a variable length the compiler does not know the exact length
// compiler does not know the actual size of the structure
// fixed lengths the strucuture always has the fixed size
// changed to character arrays 