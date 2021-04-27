#include <iostream>
using namespace std;

int main()
{
  int *p; // pointer variable declaration
  int i = 10;
  int j = 20;
  int &ref = j;

  p = &i; // the pointer p has the address of the variable 
    //  & address operator

  i+=1;
  cout << *p << endl; //10 *p: get the indirect value of the pointer variable p, indirect = the address of I
                    // * dereferrencing = to indirect value
  cout << i << endl; // 11

  p = &j;
  cout << *p << endl; // 20
  cout << j << endl; // 20

  *p += 1;
  cout << j << endl; // 21

  cout << ref << endl; // 21
  ref = ref + 10;
  cout << *p << endl;
}