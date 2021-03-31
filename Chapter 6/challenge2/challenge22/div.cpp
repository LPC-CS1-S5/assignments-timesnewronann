#include <iostream>
using namespace std;

int isGreater(int n1, int n2)
{
  int ln1, ln2;

  ln1 = n1 % 10;
  ln2 = n2 % 10;

	if ( ln1 > ln2)
		return n1;
	else
		return n2;
}