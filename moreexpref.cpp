#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int n1, n2;
	n1 = 10;
	n2 = 20;
	swap(n1, n2);
	cout << "After swap " << n1 << " " << n2 << endl;
}

void swap(int &n1, int &n2)
{
	int tmp;
	tmp = n1;
	n1 = n2;
	n2 = tmp;
	cout << " In function " << n1 << " " << n2 << endl;
}