#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
bool idcheck(char[]);
bool domaincheck(char []);

int main()
{
  const int SIZE = 100; 
  char email[SIZE]; // array to get a list of emails

  cout << "Enter your email \n";
  cin >> email; // take user email

  if (idcheck(email))
  {
    cout << "Email Id was passed" << endl;

  }

  if (domaincheck(char))
  {
    cout << "Domain was passed" << endl;

  }

}

bool idcheck(char email[])
{
  int i = 0;
  if (!= isalpha(email[0])) // The first character must be an alphabet
    return false;
  while (email[i] != '@') // Checking that @ is in the email ID
  {
    if ( ! isalnum(email[i])) // The values must be alpha numeric 
    {
      return false;
    }
    i += 1; 
  }

  if ( i > 10) // Email ID length has to be less than 10
  {
    return false;
  }
  return true;
}

bool domaincheck(char email[])
{
  const int DSIZE = 10;
  char domain[DSIZE][10] = {"com", "edu", "org", "net"};
  for(int i = 0; i < DSIZE; i++)
  {
    if (strcmp(domain[i], email+strlen (email)-3) == 0)
    {
      return true;
    }
    return false;
  }

}