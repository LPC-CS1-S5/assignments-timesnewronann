
#include <iostream>
#include <fstream> // need to read and write files

using namespace std;

void getinput(int &, int &); // header for getInput calculation. Use void because no numbers need to be returned just numbers need to be inputed
int isSame(int, int); // header to prove that the two numbers are  the same
int isGreater(int, int); // header to prove that the number is greater
void writefile(ofstream &, int); // used to create the write file no need to return data

int main()
{
	int num1, num2, num3; // create the 3 numbers 
	int div; // used to divide

	ofstream ofs; // file 
	ofs.open("challenge2.txt"); // open file 
	if (ofs.fail()) // if the file can't open show this message
	{
		cerr << "File Open Error \n";
		exit(0); // restart the program
	}
	
	while(1) // loop to call in the functions
	{
		getinput(num1, num2);
		if ( isSame(num1, num2))
			break;
		div = isGreater(num1, num2);
		writefile(ofs, div);
	}


	ofs.close();
}
