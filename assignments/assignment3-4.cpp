//ronan
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
  float month1, month2, month3, rainAmount1, rainAmount2, rainAmount3;

  cout << "Enter the first month and rain amount: " << endl;
  cin >> month1 >> rainAmount1;

  cout << "Enter the second month and rain amount: " << endl;
  cin >> month2 >> rainAmount2;

  cout << "Enter the third month and rain amount: " << endl;
  cin >> month3 >> rainAmount3;

  double average = (rainAmount1 + rainAmount2 + rainAmount3) / 3;
  cout << "The average rain fall for the three months was: " << average << endl;

}