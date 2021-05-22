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
	Woo niceguy;

	ifs.open("ronan.bin");

	ifs.read( (char *)&niceguy, sizeof(Woo)) ; // 0000 0000 0000 0000 0000 0000 0000 1010

	cout << niceguy.stuff << endl;
  cout << niceguy.nice << endl;
  cout << niceguy.stuff1 << endl;
}