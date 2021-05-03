#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>
using namespace  std;

int main()
{
	char 	cstring[5];

	cout << "Enter the string " ;
	cin >> cstring ;
	cout << "You string is " << cstring << endl;

	// Ex) 12A9 ; 1 x 16^3 + 2 x 16^2 + A x 16 + 9 = 
	// A = 10. B=11, C=12, D=13, E. 14, F 15
  int l = strlen(cstring); 
  int decimal = 0;
  int  hexanumber;
	for(int i=0; i<l; i++)
  {
    if (isxdigit(cstring[i]))
    {
		if (isdigit(cstring[i]))
		{
			// '1' -> 1 ;  31-30= 1
			decimal += (int)((cstring[i]-'0')); 
		}
		if (isalpha(cstring[i]))
		{
			// a,b,c,d, e
			decimal += (10 + (cstring[i] - 'A')); //trying to use unicode but im not sure if it works
		}
		decimal += hexanumber * pow(16, (l - i) - 1) ; 
      
    }
  }
  cout << "The number in hex is: " << cstring << " and the number in decimal is: \n" << decimal << endl;
}
