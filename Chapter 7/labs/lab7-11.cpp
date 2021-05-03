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

void makevector(vector<int> &number) // vector function 
{
  for(int i = 0; i<number.size(); i++)
  {
    number[i] = randum() % 20;
  }
  sort(number.begin(), number.end()); // need begin and end for the sort 
}

void insertvector(vector<int> &number, int usernum)
{
  int flag = 1; 
  vector <int> :: iterator iter; // iterator

  for(iter = number.begin(); iter != number.end(); iter++)
  {
    if (usernum < *iter)
    {
      number.insert(iter, usernum); // inserts the user value
      flag = 0; 
      break;
    }
  }
  if (flag)
  {
    number.insert(number.end(), usernum);
  }
}

void deletevector(vector<int> &number, int username)
{

}

int getinput(void)
{
  int num; 
  cout << "Enter your input\n";
  cin >> num;
  return num;

}

int randnum(void)
{
  return rand() & 100;

}

void printvector(vector<int> number)
{
  for (auto iter=number.begin(); iter != number.end(); iter++)
  {
    cout << setw(5) << *iter;
  }
  cout << endl;
}