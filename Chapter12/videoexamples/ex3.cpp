#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;

  string str;

  ifs.open("cany.txt", ios::in);

  if(!ifs){
    cout << "File Open Error\n";
    exit(0);
  }

  getline(ifs, str, ',');
  cout << str << endl;
  getline
}