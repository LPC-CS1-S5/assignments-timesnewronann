#include <iostream>
#include <fstream>
using namespace std;

struct Woo {//ex is woo, stuff and niceguy but you could name it anything
  char nice[10];
  int stuff;
  char stuff1[10];
};

int main()
{
	ifstream ifs;
	Woo niceguy1;
	Woo niceguy2;

	ifs.open("ronan.bin");

	ifs.read( (char *)&niceguy1, sizeof(Woo)) ; // 0000 0000 0000 0000 0000 0000 0000 1010

	cout << niceguy1.stuff << endl;
  cout << niceguy1.nice << endl;
  cout << niceguy1.stuff1 << endl;

	ifs.read( (char *)&niceguy2, sizeof(Woo)) ; // 0000 0000 0000 0000 0000 0000 0000 1010

	cout << niceguy2.stuff << endl;
  cout << niceguy2.nice << endl;
  cout << niceguy2.stuff1 << endl;



}