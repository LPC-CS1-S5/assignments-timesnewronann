#include <iostream>
#include <fstream>
using namespace std;

void getIntput(int &, int &, int&); // use reference because num1, num2, num3 may be used again in main. So we need to use the reference type

int greatestNum(int, int, int); // don't want to use reference value because the values won't change on this function so we don't need a reference type. Only want to find which value is the greatest

void writefile(ofstream &, int); // ofstream is a class type so you need to use a reference

int main()
{
  int num1, num2, num3; // numbers used in the functions
  int gtnum;
  getInput(num1, num2, num3); // function call for the 3 numbers

  gtnum = greatestNum(num1,num2,num3); // function call for greatest number

  ofs.open("challenge.txt") // open the file 
  if (ofs.fail()) // if the text can't open the program will say it failed and reset
  {
    cerr << "File Open Error\n";
    exit(0);
  }
  writefile(ofs, gtnum); //void
  ofs.close();
}

void getInput( int&n1, int&n2, int&n3) // gets the input
{
  cout << "Enter three numbers: " << endl;
  cin >> n1 >> n2 >> n3;
}

int greatestNum(int n1, int n2, int n3) // function that finds the greatest number
{
  int max = n1; // how to find the max value 
  if(max <n2) // tess if n1 is smaller than n2 then will test if n1 is smaller than n3
    if (max <n2)
      max = n2;
    if (max < n3)
      max = n3;


}
void writefile(ofstream &, int) // creates the write File
{
  ofs << gtnum;
  if (ofs.fail())
  {
    cerr << "File Write Error\n";
    exit(0);

  }
}