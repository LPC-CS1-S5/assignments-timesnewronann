#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const double RetailPrice = 99;
  int numofSold;
  double RetailCost,TotalCost;

  

  cout << "How many items sold? " << endl;
  cin >> numofSold;


  if (numofSold < 0)
  {
    cerr << "Input Error" << endl;
    exit(0);
  }
    if (numofSold >0)
    {
    RetailCost = numofSold * RetailPrice;
    cout <<fixed <<showpoint << setprecision(2);
    }
    if (numofSold >=10 && numofSold <= 19 )
    {
      TotalCost = RetailCost - (RetailCost * .20);
      cout << "Original price: " << RetailCost << endl;
      cout << "Discount: 20% " << endl;
      cout << "Sales price: " << TotalCost << endl;
    }
    if (numofSold >= 20 && numofSold <= 49)
    {
      TotalCost = RetailCost - (RetailCost * .30);
      cout << "Original price: " << RetailCost << endl;
      cout << "Discount: 30% " << endl;
      cout << "Sales price: " << TotalCost << endl;
    }
    if (numofSold >= 50 && numofSold <=99)
    {
      TotalCost = RetailCost - (RetailCost * .40);
      cout << "Original price: " << RetailCost << endl;
      cout << "Discount: 40% " << endl;
      cout << "Sales price: " << TotalCost << endl;
    }
  
    if (numofSold >= 100)
    {
      TotalCost = RetailCost - (RetailCost * .50);
      cout << "Original price: " << RetailCost << endl;
      cout << "Discount: 50% " << endl;
      cout << "Sales price: " << TotalCost << endl;
    }


  


}