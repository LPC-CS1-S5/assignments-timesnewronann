#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;


int main()
{
	string 	readline;
	ifstream ifs;
	stringstream ss;

	ifs.open("allstates.txt");

	ifs >> readline; 
	ss << readline;


	getline(ss, readline, ',');
	cout << readline << endl;
	
	getline(ss, readline, ',');
	cout << readline << endl;
	
	getline(ss, readline, ',');
	cout << readline << endl;

	getline(ss, readline, ',');
	cout << readline << endl;
	
	getline(ss, readline, ',');
	cout << readline << endl;

    


}