#include <iostream>

using namespace std;

int main() {

  double meal_charge = 88.67; // The original meal was $88.67 
  double tax_amount = meal_charge * 0.0675; // To calculate the tax amount
  double tip = (meal_charge + tax_amount) * .2; // Used to find the tip
  double total_bill = meal_charge + tax_amount + tip; // total cost of the meal

  cout << " Meal cost: $" << meal_charge << endl;
  cout << " Tax: $" << tax_amount << endl;
  cout << " Tip: $" << tip << endl;
  cout << " Total cost: $" << total_bill << endl;

}