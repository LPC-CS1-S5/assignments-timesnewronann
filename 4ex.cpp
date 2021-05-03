#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  char cstr[20] = "ABC, DEF, GHI"; // comma seperated string
  char *pos; 
  int i;
  char field[10] ;

  pos = strstr(cstr, ",");

  cout << pos << endl;
  for(int i = 0; i < strlen(cstr) - strlen(pos); i++)
    {
      field[i] = cstr[i];
    }
  field[i] = '\0';

  cout << i << endl;

  cout << field << endl;
}