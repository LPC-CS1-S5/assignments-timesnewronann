#include <iostream>
using namespace std;

int main()
{
  double celcius, farenheit;

  cout << "Enter the temperature by Celcius" << endl;
  cin >> celcius;

  farenheit = ((9/5.0) * celcius + 32);

  cout << "Celcius " << celcius << " is " << farenheit << " Farenheit" << endl;
}