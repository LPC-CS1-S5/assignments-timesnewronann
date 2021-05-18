#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
 // split each fields
 

int main()
{
	string 	readline;
	ifstream ifs;

	ifs.open("allstates.txt");

	getline(ifs, readline, ',');
	cout << readline << endl;
	
	getline(ifs, readline, ',');
	cout << readline << endl;
	
	getline(ifs, readline, ',');
	cout << readline << endl;

	getline(ifs, readline, ',');
	cout << readline << endl;
	
	getline(ifs, readline, ',');
	cout << readline << endl;


}