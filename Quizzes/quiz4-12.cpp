#include <iostream>

using namespace std;

int main()
{
  const double w02 = 1.10;
  const double w06 = 2.20;
  const double w10 = 3.70;
  const double w20 = 4.80;
  double RATE, weight, distance;
  double total_price;
  cout << "Enter weight and distance: " << endl;
  cin >> weight >> distance;

  if ((weight <0) || (weight >20))
    exit (0);
    cout << "Enter a weight greateir than 0 and less than or equal to 20" << endl;

  if (weight <= 2)
    RATE = w02;
  else if (weight < 6)
    RATE = w06;
  else if (weight < 10)
    RATE = w10;
  else if (weight < 20)
    RATE = w20;
  
  if ((distance < 10) || (distance >3000))
    exit (0);
    cout << "Enter a distance greater than 10 and less than 3000" << endl;

  if (distance > 500)
  total_price = (distance / 500) * RATE;
  cout << "Total price: " << total_price << endl;
  cout << "Weight: " << weight << endl;
  cout << "Distance: " << distance << endl;

}