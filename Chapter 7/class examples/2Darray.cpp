#include <iostream>
using namespace std;

int main()
{
  char cstrarray[5][10] = { "C++", 
                            "Python",
                            "Java",
                            "JSP",
                            "HTML"

  }
  for (int i =0; i < 5; i++)
  {
   //for (int j =0; j < 10; j++)
   cout << "the length of str " << strlen(cstrarray[i]) << endl;
   for (int j = 0; j <strlen(cstrarray[i])); j++)
    {
      cout <<cstrarray[i][j];
    }
    cout <<endl;
  }

  cout << "NULL" << cstrarray[0][3] << endl;
  cout << "size of " << sizeof(cstrarray[0]) << endl;

  char str[3] = "ABC";

  cout << str << endl; // the arrays have null values at the end of them
}