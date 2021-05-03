#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> number1{15, 2, 315, 1, 50};
  vector<int>:: iterator iter;

  for (iter = number1.begin(); iter != number1.end; iter++)
  {
    *iter += 10; // pointer
    cout << iter << endl;
  }

  sort(number1.begin(), number1.end()); // sortted order
  for (int val: number1)
  {
    cout << val << "\t";
  }
  cout << endl; 

  number1.insert(number1.end(), 500);
  for(int val: number1)
  {
    cout << val<< "\t";
  }
  cout << endl;

  number1.insert(begin(), -10);
  for (int val: number1)
  {
    cout << val << "\t";
  }
  cout << endl;

  sort(number1.begin(), number1.end());
  for (int val: number1)
  {
     cout << val << "\t";
  }
  cout << endl;
   
  // insert 50 with keeping sorted order
  int userinput = 1000;
  int flag = 1;
  for(iter = number1.begin(); iter != number1.end(); iter++) // end is equal to the last element, != means not going to do for the last element
  {
    if (userinput < *iter)
    {
      number1.insert(iter, userinput);
      flag = 0;
      break;
    }
  }
  if (flag)
  {
    number1.insert(number1.end()), userinput);
  }
  for (int val: number1) // if I want to insert an array I need to move everything to the right and but in a vector it automatically does it. You use an if statement to insert. Iterator is an iterator
  {
    cout << val << "\t";
  }
  cout << endl;
}