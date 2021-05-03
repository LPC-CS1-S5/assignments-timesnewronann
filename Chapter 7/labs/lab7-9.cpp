#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElement(int [], int[][5], int, int);
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
// int result[] return the values into the first parameter
// int num[][5] finds the greatest amongs the rows and columns
// last parameter greatest number amongst all the list

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
// Find max element within the numbers in columnns and rows
void findMaxElement(int result[], int num[][5], int rows, int cols)
{
  int rowMax = 0;
  for (int i =0; i < rows; i++)
  {
    int max = 0;
      for (int j = 0; j < cols; j++)
      {
        // insert statement to find max element within the columns and rows
        if (num[i][j] > max)
        {
          max = num[i][j]; // shows which value will be the max 
        }
        result[i] = max; // max row
      }
  }
}

// fomd the max element in the entire list
void findMaxVal(int result[], int num[][5], int rows, int cols)
{
  int maxValue = 0;
  int newMax = 0;
  int rowMax = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      {
        // insert statement to find greatest number amongst the entire list
        if (num[i][j] > max)
        {
          max = num[i][j];
        }
      }
     if (max > newMax)
     {
       newMax = max;
       rowmax = i;
     } 
  }
  for (int i = 0; i < cols; i++)
  {
    result[i] = num[rowMax][i];
  }
}