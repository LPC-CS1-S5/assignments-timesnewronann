#include <iostream>
#include <iomanip>
using namespace std;

int sum2D(int [][5], int , int ); // function for the sum of the 2D array
int main()
{
  const int NUM_ROWS = 5; // There will be 5 rows 
  const int NUM_COLS = 5; // There will be 5 columns

  int ret = 0;
  int numbers[NUM_ROWS][NUM_COLS] = { {2, 7, 9, 6, 4},
                                      {6, 1, 8, 9, 4},
                                      {4, 3, 7, 2, 9},
                                      {9, 9, 0, 3, 1},
                                      {6, 2, 7, 4, 1} }; 
  ret = sum2D(numbers, NUM_ROWS, NUM_COLS);
  cout << "Total sum is: " << setw(5) << ret << endl;

}

int sum2D ( int num[][5], int rows, int cols) // you can call the parameter something else
{
  int sum = 0;
}