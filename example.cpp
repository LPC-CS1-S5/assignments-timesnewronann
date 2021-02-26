
//ronan
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
  int num1,num2,num3,num4;
  int min;
  srand(time(0));

  num1 = random() %100;
  num2 = random() %100;
  num3 = random() %100;
  num4 = random() %100;


  min = num1;
  if (min > num2) 
    min = num2;
  
  if (min > num3)
    min = num3;

  if (min > num4)
    min = num4;
  

  cout << "The four random numbers are: " << num1 << " "<< num2 << " " << num3 << " " << num4 << endl;
  cout << "The minimum is: " << min << endl;  


}