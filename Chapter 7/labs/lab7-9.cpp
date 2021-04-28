#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElement(int [], int[][5[], int, int);
void findMaxVal(int[], int[][5], int, int);
const int SIZE= 10;
int main()
{
  const int NUM_ROWS = 6;
  const int NUM_COLS = 5;
  int result[SIZE] = {0};
  int
  findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
  cout << "The row that has the max value";
  for(int i =0; i <NUM_COLS; i++)
  {
    cout << setw(5) << result[i];
  }
}

void findMaxSum(int result[], int num[][5], int rows, int cols) // int [][5] empty bracket is a pointer
// cout << *(result + i) <-- pointer 
// pointer to one dimensional array (5) 
// void findMaxSum(int *result, int *num[5], int rows, int cols)
{
  int maxrowsum = 0;
  for(int i =0; i <rows; i++)
  {
    int rowsum =0;
    for(int j=0; j < cols; j++)
    {
      rowsum += num[i][j];
    }
    // rowsum : summation of the row
    if (maxrowsum < rowsum || i == 0)
    {
      maxrowsum = rowsum;
      maxrow = i;
    }
  
  }
  for (int i = 0; i < cols; i++)
  {
    result[i] = num[maxrow][i];
  }
}