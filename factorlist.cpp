
// - Make a program that provides factors for a given number within a range
//     Input: 1 integer within a given range
//     Output: List of factors for the given number (ex. 12 has factors of 2*2*3)
//     12 : 1, 2, 3, 4, 6, 12
#include <iostream>
using namespace std;

int main()
{

    int i, num;

    cout << "Enter your numbers : ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cout << "Factor " << i << endl;
    }
}