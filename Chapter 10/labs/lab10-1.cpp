// password requirement:
// Its length is at least 6
// It contains at least one digit
// It contains at least one lowercase alphabet
// It contians at least one uppercase alphabet
// It contains at least one special chracter: !"#$%&'()*+,-./{}~:;<=>?@
// All characters that have true as a result of the function ispunct()

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool checklength(char[]); // length at least 6
bool checkdigit(char []); // at least one digit
bool checklower(char []); // at least one lowercase
bool checkupper(char []); // at least one uppercase
bool checkspecial(char []); // at least one special

int main()
{
  char pwdstr[20];

  cout << "Enter your password" << endl;
  cin >> pwdstr;

  if ( checklength(pwdstr) && checkdigit(pwdstr) && checklower(pwdstr) && checkupper(pwdstr) && checkdigit(pwdstr))
  {
    cout << "Your password is strong" << endl;
  }
}

bool checklength(char pwdstr[])
{
  int i = 0;
  while(pwdstr[i] != '\0')
  {
    i++;
  }
  if (i >= 6)
  {
    return true;
  }
  else
    return false;
}


bool checkdigit(char pwdstr[])
{
  int i = 0;
  while(pwdstr[i] != '\0')
  {
    i++;
  }
  if (isdigit(pwdstr[i]))
  {
    return true;
  }
  else 
    return false;
}

bool checklower(char pwdstr[])
{
  int i = 0;
  while (pwdstr[i] != '\0')
  {
    i++;
  }
  if (islower(pwdstr[i]))
  {
    return true;
  }
  else 
    return false;
}

bool checkupper(char pwdstr[])
{
  int i = 0;
  while (pwdstr[i] != '\0')
  {
    i++;
  }
  if (isupper(pwdstr[i]))
  {
    return true;
  }
  else 
    return false;
}

bool checkspecial(char pwdstr[])
{
  int i = 0;
  
}