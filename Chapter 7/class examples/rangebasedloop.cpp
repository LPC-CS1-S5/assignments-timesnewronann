#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int num[10] = {10,20,30,40,50,60,80,90,100};

  for(int i =0; i <10; i++) // og structure
  {
    num[i]+= 10;
    cout << num[i] << endl;
  }
  // To read-only purpose, range-base for-loop to change the element value, use the reference variable type
  for(int &eachnumber: num) // python
  {
    eachnumber +=10;
    cout << eachnumber << endl;

  }
}