#include <iostream>
using namespace std;

int main()
{
    int num;
    int i, flag;
    int begin, end;

    cout << "Enter two numbers : ";
    cin >> begin >> end;
    num = begin;
    while (num <= end)
    {
        flag = 0;
        for (i = 2; i < num ; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (flag)
        // if (i != num)
            cout << num << " is not a prime\n";
        else
            cout << num << " is a prime number\n";
        num++;
    }
}