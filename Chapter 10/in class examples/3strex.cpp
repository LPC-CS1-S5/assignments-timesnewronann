#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char cstr1[10] = "ABC";
  char cstr2[10] = "DEF";
  char cstr3[20] = "C++ Programming";
  char *pos;

  cout << (int)cstr1[3]

  cout << sizeof(cstr1); // size is 10 actual size occupied by the string 
  cout << strlen(cstr1); // 3 counts the number of characters until number of nulls

  if (strcmp(cstr1, cstr2) == 0)
  {
    cout << "Same " << cstr1 << " " << cstr2 << endl;
  }
  else if (strcmp(cstr1, cstr2) < 0)
  {
    cout << "Negative" << cstr1 << " " << cstr2 << endl;
  }
  else if (strcmp(cstr1, cstr2) > 0)
  {
    cout << "Positive" << cstr1 << " " << cstr2 << endl;
  }
  if (strncmp(cstr1, cstr2, 2 ) == 0)
  {
    cout << "Same first two character " << cst1 << " " << cstr2 << endl;

  }
  strcat(cstr1, cstr2);
  cout << cstr1 << endl;
  cout << cstr2 << endl;

  pos = strstr(cstr3, "Program" ); // null
  if (pos)
    cout << pos << endl;
  // How to get index number points to starting substring
  cout << strlen(cstr3) << endl;
  cout << strlen(pos) << endl;
  cout << strlen(cstr3) - strlen(pos) << endl;
  cout << cstr3[4] << endl;
  pos = cstr3 + 4; // instead of saying cstr3 + strlen(cstr3) - strlen(pos);
  cout << pos << endl;
}