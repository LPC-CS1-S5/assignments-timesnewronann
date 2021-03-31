#include <iostream>
using namespace std;

void change(int &);

int main()
{
	int num = 10;
	change(num);
	cout << "num " << num << endl;
}

void getinput(int &n)
{
	n = 100;
	return ;
}


