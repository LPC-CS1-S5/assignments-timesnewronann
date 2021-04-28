#include <iostream>
#include <vector> // first step include header file
#include <algorithm>
using namespace std;

int main()
{
  vector<int> number {15, 2, 315, 1, 50}; // can be used similar to an array, you need to use an actual data type as well

  vector<char> name {'a', 'b', 'c'};

  vector<int> number2 (10); // When you use parathesis not a value it is the size. So size of 10 elements. All values are zero 

  vector<int> number3 (10, -1) // 10 elements all initialized as -1

  vector<int> number4; // number 4 size will be 0 and have segementation fault error message. Tried to access out of the memory bounds. Vectors are explicitly boundary checks and cannot go over the index. It will make an error

for (int vak: number1) 
  {
    cout << val << "\t";
  }
  cout << "Before Sort" << endl;
  sort(number1.begin(), number1.end));
  for (int val: number1)
  {
    cout << val << "\t";
    cout << "After sort " << endl;
  }

// PUSH BACK
  number4.push_back(10);
  number4.push_back(20);
  number4.push_back(30);
  number4.push_back(40);
  number4.push_back(50); // append

  for (int val: number4)
  {
    cout << val << "\t"
  }
    cout << endl;


// POP BACK
  number4.pop_back(); // delete one last element.

  for (int val: number4)
  {
    cout << val << "\t"
  }
  cout << endl;

// CLEAR
  number4.clear(); // clear, zero elements, going to be empty
  if (number4.empty()) {
    cout << "empty" <<endl // empty
  }

  //sort(number1.begin(), number1.end()); // first parameter is the iterator, can help to have an iteration such as loop control index 
  // end function also give the iterators


  int num[5];
  for(int i = 0; i <10; i++)
  {
    cout << num[i];
  }

  for (int i = 0; i <number.size(); i++) // you can use .size() to get the number of elements
  {
    cout << number[i] << "\t";
  }
  cout << endl;

  for (int i = 0; i < name.size(); i++)
  {
    cout << name[i] << "\t";
  }
  cout << endl;

  for (int i = 0; i < number2.size(); i++)
  {
    cout << number2[i] << "\t";
  }
  cout << endl;

  for (int i = 0; i < number3.size(); i++)
  {
    cout << number3[i] << "\t";
  }
  cout << endl;

  for (int val: number1)
  {
    cout << val << "\t";
  }
  cout << endl;

  for (int i = 0; i < 10; i++)
  {
    cout << number4[i] << "\t";
  }

  for (int val: number4)
  {
    cout << val << "\t" // doesn't resort in an error 
  }
}