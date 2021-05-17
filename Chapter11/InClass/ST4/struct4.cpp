#include <iostream>
#include <fstream>
using namespace std;

const int MAXSIZE = 1000;

struct Namerecords { // Struct tag 
  string stname;
  string sex;
  int year; 
  string name;
  int count;
};

int main()
{
  ifstream ifs;
  string readline;
  Namerecords nr;

  ifs.open("cany.txt");

  while(ifs >> readline)
  {
    nr.stname = getStname();
    nr sex = getGender();
    cout << readline << endl;
    nr.stname = readline.substr(0,2);
    cout << nr.stname << endl;

    pos = readline.find(','); // 2 
    cout << "Pos " << pos << endl;
    nr.sex = readline.substr(pos+1,1);
    cout << nr.sex << endl;

    nr.year = getyear(readline);
  }
}

int getyear(string line) // extract the line
{
    int startpos = 0, pos = 0;

    for(int i = 0; i < 2; i++)
    {
      pos = line.find(',', startpos);
      startpos = pos + 1;
    }
    return stoi(line.substr(pos+1, 4));

}