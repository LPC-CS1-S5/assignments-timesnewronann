#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream fs;
  fs.open("allstate.txt", ios:: in);

  if(fs.fail())
    cout << "File open Error" << endl;

  if (fs.good())
    cout << "File status is good" << endl;

  if (fs.eof())
    cout << "File EOF encountered" << endl;

  if (fs.bad())
    cout  << "File status is bad. R/W Error on I/O" << endl;
}