// We are going to make a program that checks the validity of the email accounts. The requirement of an email account is as follows:

//emailid@organization.com

//The id of the email must be starting with the alphabet characters
//The length of id must be greater than 5 and less than 15
//The domain name should be one of the list {com, org, edu, net, and gov} 
//The program asks for the user email string and then split the id, //organization name, and domain name. After that, check the validity of the //email string base on the above requirements.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
bool alphabet(char[]); // email must be starting with the alphabet characters
bool length(char[]); // length must be 5 < x < 15
bool domain(char[]); // domain name should be from the list

int main()
{
  const int SIZE = 100;
  char email[SIZE];

  cout << "Enter your email: " << endl;
  cin >> email;

  if (alphabet(email))
  {
    cout << "Email alphabet passed ! " << endl;
  }

  if (length(email))
  {
    cout << "Email length passed ! " << endl;
  }

  if (domain(email))
  {
    cout << "Email domain passed ! " << endl;
  }

  if ( (alphabet(email)) && (length(email)) && (domain(email)) )
  {
    cout << "This email is valid ! " << endl;
  }
  else 
  {
    cout << "This email is invalid ! " << endl;
  }


}

bool alphabet(char email[])
{
  int i = 0;
  if ( ! isalpha(email[0]))
  {
    return false;
  }
  while (email[i] != '@')
  {
    if (!isalnum(email[i]))
    {
      return false;
    }
    i +=1;
  }
}

bool length(char email[])
{
  int i = 0;
  while (email[i] != '@')
  {
    i++;
  }

  if ((i > 5) && (i < 15)) // if the email fits within the length specified
  {
    return true;
  }
  else 
  {
    cout << "This email does not fit the length of the constraints, try again!" << endl;
    return false;
  }
}

bool domain(char email[])
{
  const char DSIZE = 10;
  char domain[DSIZE][10] = { "com", "edu", "org", "net", "gov"};
  for (int i = 0; i < DSIZE; i++)
  {
    if(strcmp(domain[i], email+strlen(email)-3) == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}