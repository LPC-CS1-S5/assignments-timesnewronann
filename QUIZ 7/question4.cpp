#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector> 
#include <algorithm>
#include <iterator>

using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
  vector <int> number;
  int size = 20;
  makevector(number, size);
  printvector(number);
  deleteone(number);

}

void makevector(vector<int> &vec, int size)
{
  for(int i = 0; i < size; i++)
  {
    vec.push_back(rand() % 10);
  }
}

void printvector(vector<int> vec)
{
  for (int v : vec) // ranged based for loop
  {
    cout << v << "\t";
  }
  cout << endl;
}

void deleteone(vector<int> &vec)
{
  int usernum;
  int deleteWOO = 0;

  cout << "Enter the user's value: " << endl; // enter the value they want to delete 
  cin >> usernum;
  cout << endl;

  vector<int> :: iterator iter; // create the vector 
  iter = find(vec.begin(), vec.end(), usernum);

  if (iter != vec.end() && usernum) 
  {
    vec.erase(iter); // deletes the one number 
  }
  else 
  {
    cout << "Delete Item: Not Found " << endl;
  } 

  cout << usernum << "is deleted " << deleteWOO << " times " << endl;
  printvector(vec);
}