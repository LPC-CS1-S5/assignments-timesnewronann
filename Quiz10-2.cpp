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
  cont int SIZE = 100;
  char email[SIZE];

  cout << "Enter your email: " << endl;
  cin >> email;

  if (alphabet(email))
  {

  }

  if (length(email))
  {

  }

  if (domain(email))
  {

  }

  if ( (alphabet(email)) && (length(email)) && (domain(email)) )
  {

  }


}

bool alphabet(char email[])
{
  int i = 0;
}