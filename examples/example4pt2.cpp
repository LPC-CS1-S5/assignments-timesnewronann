#include <iostream>
using namespace std;

int main() {

    int num1,num2;
    cout << "Enter two integers" << endl;
    cin >> num1 >> num2;

    if (num1 < num2)
    {
      cout << "The smaller is " << num1 << endl;
      cout<< "The larger is " << num2 << endl;
    }
    else // Condition is false; num 2 < num1
    {
      cout << num2 << " is less than or equal to " << num1 << endl;
      
    cout << num1 << " is greater than " << num2 << endl;
    }
}