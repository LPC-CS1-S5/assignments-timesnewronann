//ronan
#include <iostream>
using namespace std;

int main()
{
  int val1, val2;
  cout << "Enter two integers: " << endl;
  cin >> val1 >> val2;

  if ( val1 %2 == 0 &&  val2 %2== 0) // only works if both numbers are even
  // if ( ( val1 % 2 == 0) && ( val2 % 2 == 0 ) )
  {
    cout << "The integers are even: " << val1 << " " << val2 << endl;
   
  }
  else 
    cout<< "The integers are odd" << endl;
