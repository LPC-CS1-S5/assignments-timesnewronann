#include <iostream>
using namespace std;

int main()
{
  const int R = 3, C = 4;
  int score[R][C] = { {10, 20, 30, 40}, // 100
                    {50, 60, 70, 80}, // 260
                    {90, 100, 110, 120} // 420
                   };

  int rowsum = 0, maxrow, row;
  int csum = 0, maxcol,  

  for (int i = 0; i < R; i++)
  {
    for (j = 0; j < C; j++)
    {
      rowsum += score[i][j];
      cout << score[i][j] << "\t"; // how to print out the elements for a 2D array
    }

    if (i == 0)
    {
      maxrow = 0;
      max = rowsum;
    }
    else {
       if (rowsum > max) // when greater sum than current max we need to change the maxrow to i
    {
      maxrow = i;
      max = rowsum;
    }
  }
   
    cout << endl;
    cout << "Row sum" << rowsum << endl;
    
  }

  cout << "The row that has max sum is " << maxrow << "row" << endl;
  cout << "========================" << endl;

  for (int i = 0; i < C; i++)
  {
    int csum =0;
    for (j =0; j < R; j++)
    {
      cout << score[j][i] << "\t"; // how to print out columns then rows
      colsum += score[j][i];
    }
    if (i == 0 )
    {
      maxcol = 0;
      max = colsum;
  
    }
    else {
      if (colsum > max)
      {
        maxcol = i;
        max = colsum;
      }
    }
    cout << endl;
    cout << "Column sum" << csum << endl;
  }
cout << "The column that has max sum is " << maxcol + 1 << endl;

}

