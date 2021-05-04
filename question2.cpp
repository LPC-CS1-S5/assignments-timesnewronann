#include <iostream>
using namespace std;

void printtriangle(int numbers[][3], int, int);
const int rows = 3;
const int cols = 3;

int main()
{
  int rows;
  int cols;
  int numbers[rows][cols] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

  printtriangle(numbers, rows, cols);
}

void printtriangle(int numbers[][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (i >= j)
      {
        cout << numbers[i][j] << " ";
      }
    }
    cout << endl;
  }
}