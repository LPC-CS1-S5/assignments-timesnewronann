#include <iostream>
using namespace std;

int stringLength(char []);

int main()
{
  char cstr1[20] = "Program";
  char cstr2[20] = "Programming"; // you can give 'c++' a short length and it will still copy the value 
  int length = 0;

  length =  stringLength(cstr1)
  cout << "String length is " << length << endl;

  for ( i = 0; i < strlen(cstr2); i++)
  {
    cstr1[i] = cstr2[i]; // copy over 2 into 1 
  }
  cstr1[i] = '\0' ;
  cout << "Copied string is " << cstr1 << endl;
}


int stringLength(char cstr[])
{
  int i = 0;
  while (cstr[i] ! = '\0')
  {
    i++
  }
  return i;
}