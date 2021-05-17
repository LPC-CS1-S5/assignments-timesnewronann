#include <iostream>
using namespace std;

int main()
{
  enum day { MON, TUES, WED, THU, FRI, SAT, SUN};

  day workday; // Enum data type delcration

  int number[7]; // enumerated data type. Enumerator can be used as an index
  for (int i = MON; i <= SUN; i++)
    number[i] = i; // number[0] = 0, number[1] = 1, number[2] = 2 and so on
}

workday = MON;
cout << number[workday] << endl; 

//workday = 2; // Error : cannot assign integer value directly, we need the type casting

for(workday = MON; workday <= FRI; workday++) // cannot use the ++ operator on enum variable
  cout << number[workday] << endl;