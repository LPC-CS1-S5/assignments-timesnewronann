#include <iostream>
using namespace std;

double 	areaWH(int w  int h =1);
int main()
{
	int width, height;
	double area;

	width = 100;
	height = 10;

	area = areaWH(width, height);
	cout << "Area " << area << endl;
  area = areaWH(width);
  cout << "Area " << area << endl;
  area = areaWH(10);
  cout << "Area " << area << endl;
}

double areaWH(int w, int h)
{
	double area;
	area = w * h;
	return area;
}