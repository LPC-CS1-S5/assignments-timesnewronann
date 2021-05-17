//Int makingNameRecords
// make the struct array nr
// read from a file and then parse the each field by the delimeter ','
// Assign the each field value to the member variable in struct

//  parameter nr[]
// the arrays of Namerecords that are filled with the fields of the line read from a file.

// return value 
// the number of array elements
// the same number of the lines read from a file

// void printNameRecords(Namerecords[], int)
// print all elements in struct array 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAXSIZE = 1000;

struct Namerecords{
  string stname
  string sex;
  int year;
  string name; 
  int count;
};

int makingNameRecords(Namerecords []);
void printNameRecords(Namerecords[], int);

string getstatename(string);
string getgender(string);
int getyear(string);
string getname(string);
int getcount(string);

int main()
{
  int numofRecords = 0;
  Namerecords nr[MAXSIZE]; // call makingNameRecords and printNameRecords

  numofRecords = makingNameRecords(nr);
  printNameRecords(nr, numofRecords);

}

int makingNameRecords(Namerecords nr[])
{
  int cnt = 0;
  string readline;
  ifstream ifso;

  ifso.open("cany.txt");
  if (!ifso) {
    cout << "File Open Error \n";
    exit(0);

  }
  while ((ifso >> readline) && (cnt < 1000)) { // reads the lines from the text
    nr[cnt].stname = getstatename(readline);
    nr[cnt].sex = getgender(readline);
    nr[cnt].year = getyear(readline);
    nr[cnt].name = getname(readline);
    nr[cnt].count = getcount(readline);
    cnt++;
  }
  return cnt;
}

void printNameRecords(Namerecords nr[], int numofRecords)
{
  for(int i = 0; i < numofRecords)
  {
    cout << setw(5) << nr[i].stname << "\t";
    cout << setw(5) << nr[i].sex << "\t";
    cout << setw(5) << nr[i].year << "\t";
    cout << setw(5) << nr[i].name << "\t";
    cout << setw(5) << nr[i].count << endl;
    
  }
}

string getstatename(string str)
{
  return str.substr(0,2); // split the state name from the lines
}

string getgender(string str)
{
  int pos = str.find(',');
  return str.substr(pos+1, 1);
}

int getyear(string str)
{
  int pos 
}

string getname(string str)
{

}

int getcount(string str)
{

}