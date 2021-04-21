#include <iostream>

using namespace std;

int main()
{
  int num[10] = {15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
  char c[12] = {'c', 'p', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g'};

  for (int i = 0; i <10; i++)
  {
    cout << num[i] << "\t";
  }
  cout << endl;
  cout << "Size of num " << sizeof(num) << endl; // checks the size of an array 

  for (int i =0; i < 12; i++)
  {
    cout << c[i];
  }
  cout << endl;
  cout << "Size of char array c " << sizeof(c) << endl;







}
