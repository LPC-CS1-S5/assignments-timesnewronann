#include <iostream>
using namespace std;

void swap3(int &, int &, int &);
void swap(int &, int &);

int main()
{
	int n1, n2, n3;
	n1 = 10;
	n2 = 20;
	n3 = 30;

	swap(n1, n3);
	swap(n2, n3);
	cout << "After swap " << n1 << " " << n2 << " " << n3 << endl;


	swap3(n1, n2, n3);
	cout << "After swap " << n1 << " " << n2 << " " << n3 << endl;
}

void swap3(int &n1, int &n2, int &n3)
{
	int tmp;
	tmp = n1;
	n1 = n3;
  n3 = n2;
	n2 = tmp;
	cout << " In function " << n1 << " " << n2 << n3 << endl;
}

void swap(int &n1, int &n2)
{
	int tmp;
	tmp  = n1;
	n1 = n2;
	n2 = tmp;
}