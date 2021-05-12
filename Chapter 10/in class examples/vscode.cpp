#include <iostring> 

using namespace std;

int main()
{
  string str1, str2;
  string dest;  
  int pos;

  str1 = "programming";
  str2 = "C++, programming, section, 3";

  cout << str1.substr(str1.length() - 4, 4) << endl;

  cout << str1.assign(str2, 3, 3) << endl;

  pos = str2.find(',', 0);
  cout << "Find position" << pos << endl;
  dest = str2.substr(0, pos);
  cout << "Destination " << dest << endl;

  int prev = pos;
  pos = str2.find(',' , pos) // find comma and first comma is skipped
  dest = str2.substr(prev, pos-prev+1)
}