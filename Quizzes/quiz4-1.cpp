// geometry calculator
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int selection;
  double radius, length, width, base, height, Area;
  cout << "Geometry Calculator" << endl;
  cout << "\t1. Calculate the Area of a Circle" << endl;
  cout << "\t2. Calculate the Area of a Rectangle" << endl;
  cout << "\t3. Calculate the Area of a Triangle" << endl;
  cout << "\t4. Quit" << endl;
  cout << "\t Enter your choice (1-4): " << endl;
  cin >> selection;

    switch (selection)
    {
      case 1:
        cout << "What is the radius of the Circle ?" << endl;
        cin >> radius;
        Area = 3.14159 * pow(radius,2);
        cout << "The area is " << Area << endl;
      break;

      case 2:
        cout << "What is the length and width of the rectangle?" << endl;
        cin >> length >> width;
        Area = length * width;
        cout << "The area is " << Area << endl;
      break;

      case 3: 
        cout << "What is the length of the triangle's base and its height?" << endl;
        cin >> base >> height;
        Area = (base * height) * 0.5;
        cout << "The area is " << Area << endl;
      break;

      case 4:
        exit(0);

      default:
        cout << "Error number entered is outside the range of 1 through 4 when selecting an item from the menu" << endl;

    }
}