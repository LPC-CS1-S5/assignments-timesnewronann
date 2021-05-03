//1. Make a vector variable and the initial N integer numbers
//2. Sort vector
//3. Insert the user number into the vector
//4. Delete the item from the vector by searching the user value.

#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void makevector(vector<int> &);
void insertvector(vector<int> &, int);
void deletevector(vector<int> &, int);

int randum(void);
int getinput(void);
void printvector(vector<int> );

int main()
{
  const int SIZE = 10;
  int usernum;
  vector<int> number(10); // vector call

  srand(time(NULL)); // random variable

  // function calls
  makevector(number);
  printvector(number);
  usernum = getinput();
  insertvector(number, usernum);
  printvector(number);
  usernum = geinput();
  printvector(number);
  deletevector(number, usernum);
  printvector(number); 

}
