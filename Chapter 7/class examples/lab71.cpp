#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int makearray(int[]);
void bubble(int[], int);
void printout(int[], int);

const int SIZE = 100;

int main() {
        int number[SIZE] = {15, 5, 30, 25, 20};  // 5, 30, 25, 20, 15
        int last, N;
		// last = makearray(number);

		last = 5;

		printout(number, last);

		cout << "Enter the number for N ";
		cin >> N; //2
		for(int cnt=0; cnt <= N; cnt++)
		{
			bubble(number, last);
		}
		cout << "N_th greatest number is " << number[last-N] << endl;
}
void bubble(int number[], int last)
{
			for(int i=0; i<last-1; i++){
				if (number[i] > number[i+1])
					swap(number[i], number[i+1]);
			}
			printout(number, last);
}

int makearray(int number[]) {
        int last;
        srand(time(NULL));
        last = rand() % 10 + 10; // from 10 to 19 

        for (int i = 0; i < last; i++)
                number[i] = rand() % 100;
        return last;
}

void printout(int numbers[], int last)
{
	cout << "Array Size : " << last << endl;
    for(int i = 0; i < last; i++)
    {
        cout << numbers[i]<< " ";
    }

    cout << endl;
}