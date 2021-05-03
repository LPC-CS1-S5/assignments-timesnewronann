#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  char cstring[10];

  cout << "Enter the string " ;
  cin >> cstring;
  cout << "Your string is " << cstring << endl;

  // count the number of digits and alphabets
  // Ex, 0123ABD, # of digits : 3, # of alpha : 3
  // isAlpha(), isDigit()

  int cnt_digit = 0; 
  int cnt_alpha = 0;
  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    if (isalpha(cstring[i]))
    {
      cnt_alpha++;
    }
    if (isdigit(cstring[i]))
    {
      cnt_digit++;
    }
  }
  cout << "# of digit " << cnt_digit << endl;
  cout << "# of alpha " << cnt_alpha << endl;

}