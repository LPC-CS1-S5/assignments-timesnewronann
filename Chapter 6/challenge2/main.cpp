//Parth, Ronan, Uriel
#include <iostream>
#include <fstream>
using namespace std;


void getInput( int& , int&);
void isSame(int, int);
int intDivision(int, int);
void writefile(ofstream&,int);

int main(){
  int num1, num2;
  int same;
  int div;
  ofstream ofs;

  getInput(num1, num2);
  isSame(num1,num2);
  intDivision(num1, num2);
  
  
  ofs.open("g3-challenge2.txt");
  if(ofs.fail())
  {
    cerr << "File Open Error\n";
    exit(0);
  }
  writefile(ofs, div);
  ofs.close();
}

