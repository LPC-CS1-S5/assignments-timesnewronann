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