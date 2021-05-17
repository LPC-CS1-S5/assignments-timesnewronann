#include <iostream>
using namespace std;

int main()
{
  union Temp{ // only one member can be used at a time. All members of a union use the same   
    float F; //  memory area
    float C;
  }; 
}

  Temp temp;
char choice;
cin >> choice;
if (choice == 'F') // Depending on the user choice value, a member variable is chosen 
  temp.F = 85.00; //     selectively
else 
  temp.C = 23.00;

cout << temp.F << endl; // Suppose that "choice" == F temp.F will be 85
cout << temp.C << endl; // At this time, temp.C is also 85

temp.c = 100;
cout << temp.F << endl; // this is also 100