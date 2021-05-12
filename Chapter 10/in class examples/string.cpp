#include <istring>
#include <iostream>
using namespace std; 

int main()
{
  string str1, str2;

  str1 = "programming" ; 
  str2 = "Poopoopeepee programming";

  cout << str1.substr(7,4) << endl; // start at the 7th position and 4 characters long

  cout << str1.subtr1(str1.length()-4, 4) << endl;

  pos = str2.find(',' , 0);
  cout << "Find position" << pos << endl;
  
  cout << str1.assign(str2, 3, 3) << endl;
}