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
	Woo niceguy[10];

	ifs.open("ronan.bin");


  for ( int i = 0; i < 10; i++)
  {
	ifs.read( (char *)&niceguy[i], sizeof(Woo)) ; 
  cout << niceguy[i].stuff << endl;
  cout << niceguy[i].nice << endl;
  cout << niceguy[i].stuff1 << endl;
  }



	


}