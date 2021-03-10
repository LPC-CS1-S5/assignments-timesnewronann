#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    cout << "Enter a positive number: \n" ;
    cin >> n;

    if (n < 0)
    {
        cout << "You entered a negative number!" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++){
            factorial *= i;
        }
        cout << "Factorial of " << n << "is equal to: " << factorial << endl;
    }
    return (0);
}  