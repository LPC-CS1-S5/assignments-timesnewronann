#include <iostream>
#include <iomanip>
using namespace std;

//initialization with declaration
int main()
{
  double score[3][4] = { 
                        {100, 90, 80, 100},
                        {100, 100, 80, 100},
                        {100, 80, 90, 100}
  };

  for (int i = 0; i < 3; i++) // first loop traverse the rows
    {
      for (int j = 0; j < 4; j++) // second loop traverse the columns
      {
        cout << setw(5) << score[i][j];
      }
      cout << endl;
    }
}